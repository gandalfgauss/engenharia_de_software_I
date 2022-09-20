#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <list>
#include <string>

static QSqlDatabase dataBase = QSqlDatabase::addDatabase("QSQLITE");


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
     ui->setupUi(this);

    dataBase.setDatabaseName("../database/dataBaseOlympus.db");

    if(!dataBase.open())
    {
        QMessageBox::warning(this, "Erro", "Não foi possível abir o banco de dados");
    }
    else
    {

    }

    system = System::createSystem("System");
    dataBaseToSystem();
    updateBoardMedals();
    /*system->createLogin("adm", "123");
    system->createCountry("Brasil", "America");
    system->createCountry("Argentina", "America");
    system->createModality("Natacao");
    system->createModality("Futebol");
    system->returnCountry("Brasil")->createModality("Natacao");
    system->returnCountry("Brasil")->createModality("Futebol");
    system->returnCountry("Brasil")->returnModality("Natacao")->createMedal("Joao", 1);
    system->returnCountry("Brasil")->returnModality("Futebol")->createMedal("Joao", 2);*/



}

MainWindow::~MainWindow()
{
    dataBase.close();
    delete system;
    delete ui;

}

void MainWindow:: updateBoardMedals()
{
    list<Country*> countries = system->getCountries();
    string nameCountry, gold, silver, bronze;

    ui->listWidget->clear();

    nameCountry = addSpaces("País", 16);
    gold = addSpaces("Ouro",8);
    silver = addSpaces("Prata",8);
    bronze = addSpaces("Bronze",8);

    ui->listWidget->addItem(QString::fromStdString(nameCountry) +
                            " " +QString::fromStdString(gold) +
                            " " + QString::fromStdString(silver) +
                            " "+ QString::fromStdString(bronze));
    ui->listWidget->addItem(" ");

    for(auto country : countries)
    {
        nameCountry = addSpaces(country->getName(), 16);
        gold = addSpaces(to_string(country->getGoldMedals()),8);
        silver = addSpaces(to_string(country->getSilverMedals()),8);
        bronze = addSpaces(to_string(country->getBronzeMedals()),8);

        ui->listWidget->addItem(QString::fromStdString(nameCountry) +
                                " " +QString::fromStdString(gold) +
                                " " + QString::fromStdString(silver) +
                                " "+ QString::fromStdString(bronze));
    }


    //append funcionalities country
    ui->comboBox_country->clear();
    for(auto country : countries)
    {
       ui->comboBox_country->addItem(QString::fromStdString(country->getName()));
    }

    //append funcionalities madalities
    ui->comboBox_modality->clear();
    for(auto modality : system->getModalities())
    {
       ui->comboBox_modality->addItem(QString::fromStdString(*modality));
    }

}

void MainWindow::dataBaseToSystem()
{
    QSqlQuery query;
    Country* country;
    Modality* modality;

    string nameModality, champion, nameCountry;
    int value;

    if(!dataBase.isOpen())
    {
        return;
    }
    else
    {
        query.prepare("select * from table_users");

        if(query.exec())
        {
            while(query.next())
            {
                system->createLogin(query.value(1).toString().toStdString(),
                                    query.value(2).toString().toStdString());
            }
        }

        query.prepare("select * from table_modalities");
        if(query.exec())
        {
            while(query.next())
            {
                system->createModality(query.value(1).toString().toStdString());
            }
        }

        query.prepare("select * from table_countries");
        if(query.exec())
        {
            while(query.next())
            {
                system->createCountry(query.value(1).toString().toStdString(), query.value(2).toString().toStdString());
            }
        }

        query.prepare("select * from table_countries_modalities");
        if(query.exec())
        {
            while(query.next())
            {
                country = system->returnCountry(query.value(1).toString().toStdString());
                country->createModality(query.value(2).toString().toStdString());
            }
        }


        query.prepare("select * from table_medals");
        if(query.exec())
        {
            while(query.next())
            {
                nameModality = query.value(1).toString().toStdString();
                champion = query.value(2).toString().toStdString();
                value = query.value(3).toString().toInt();
                nameCountry = query.value(4).toString().toStdString();

                country = system->returnCountry(nameCountry);

                modality = country->returnModality(nameModality);

                modality->createMedal(champion, value);
            }
        }

    }
}

void MainWindow::on_login_button_clicked()
{
    QString qs1, qs2;
    string user, password;
    qs1 = ui->lineEdit_User->text();
    qs2 = ui->lineEdit_Password->text();

    user = qs1.toStdString();
    password = qs2.toStdString();

    ui->lineEdit_Password->clear();
    ui->lineEdit_Password->setFocus();
    int permission;
    if(system->login(user, password))
    {
        qDebug() << "Login Aceito";
        permission = 1;
        loginscreen = new LoginScreen(this, system, permission);
        loginscreen->show();


    }
    else
    {
        qDebug() << "Login Não Aceito";
        permission = 0;
        loginscreen = new LoginScreen(this, system, permission);
        loginscreen->show();
    }
}



void MainWindow::on_btn_medals_board_clicked()
{
    updateBoardMedals();
}






void MainWindow::on_btn_filtroCountry_clicked()
{
    QString country = ui->comboBox_country->currentText();
    string country_s = country.toStdString();
    string nameModality, gold, silver, bronze;
    Country* country_obj = system->returnCountry(country_s);

    if(country_obj == nullptr)
    {
        QMessageBox::warning(this, "Erro", "País não Encontrado");
        return;
    }

    ui->listWidget->clear();

    nameModality = addSpaces("Modalidade", 16);
    gold = addSpaces("Ouro",8);
    silver = addSpaces("Prata",8);
    bronze = addSpaces("Bronze",8);

    ui->listWidget->addItem(QString::fromStdString(nameModality) +
                            " " +QString::fromStdString(gold) +
                            " " + QString::fromStdString(silver) +
                            " "+ QString::fromStdString(bronze));
    ui->listWidget->addItem(" ");

    for(auto modality : country_obj->getModalities())
    {
        nameModality= addSpaces(modality->getName(), 16);
        gold = addSpaces(to_string(modality->getGoldMedals()),8);
        silver = addSpaces(to_string(modality->getSilverMedals()),8);
        bronze = addSpaces(to_string(modality->getBronzeMedals()),8);

        ui->listWidget->addItem(QString::fromStdString(nameModality) +
                                " " +QString::fromStdString(gold) +
                                " " + QString::fromStdString(silver) +
                                " "+ QString::fromStdString(bronze));
    }

}


void MainWindow::on_btn_filtroModality_clicked()
{
    list<Country*> countries = system->getCountries();
    string nameModality = ui->comboBox_modality->currentText().toStdString();
    string gold, silver, bronze;
    string nameCountry;

    ui->listWidget->clear();

    nameCountry = addSpaces("País", 16);
    gold = addSpaces("Ouro",8);
    silver = addSpaces("Prata",8);
    bronze = addSpaces("Bronze",8);


    ui->listWidget->addItem(QString::fromStdString(nameCountry) +
                            " " +QString::fromStdString(gold) +
                            " " + QString::fromStdString(silver) +
                            " "+ QString::fromStdString(bronze));
    ui->listWidget->addItem(" ");

    for(auto country : countries)
    {
        for(auto modality : country->getModalities())
        {
            if(modality->getName() == nameModality)
            {
                nameCountry = addSpaces(country->getName(), 16);
                gold = addSpaces(to_string(modality->getGoldMedals()),8);
                silver = addSpaces(to_string(modality->getSilverMedals()),8);
                bronze = addSpaces(to_string(modality->getBronzeMedals()),8);

                ui->listWidget->addItem(QString::fromStdString(nameCountry) +
                                        " " +QString::fromStdString(gold) +
                                        " " + QString::fromStdString(silver) +
                                        " "+ QString::fromStdString(bronze));
            }
        }

    }
}

