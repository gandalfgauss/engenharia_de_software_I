#include "medaladmupdatescreen.h"
#include "ui_medaladmupdatescreen.h"
#include <QtSql>
MedalAdmUpdateScreen::MedalAdmUpdateScreen(QWidget *parent,  System* sys, QString countr, QString modalit) :
    QDialog(parent),
    ui(new Ui::MedalAdmUpdateScreen)
{
    ui->setupUi(this);
    system = sys;
    country = countr;
    modality = modalit;

    ui->label_country->setText(countr);
    ui->label_modality->setText(modalit);
    string aux;

    ui->listWidget->clear();
    for(auto medal : system->returnCountry(country.toStdString())->returnModality(modality.toStdString())->getMedals())
    {
        aux = addSpaces(medal->getChampion(),20);

        if(medal->getValue() == 1)
        {
            aux += addSpaces("Ouro",7);
        }
        else if(medal->getValue() == 2)
        {
            aux += addSpaces("Prata",7);
        }
        else if(medal->getValue() == 3)
        {
            aux += addSpaces("Bronze",7);
        }

        ui->listWidget->addItem(QString::fromStdString(aux));
    }

    ui->comboBox->addItem("Ouro");
    ui->comboBox->addItem("Prata");
    ui->comboBox->addItem("Bronze");

}

MedalAdmUpdateScreen::~MedalAdmUpdateScreen()
{
    delete ui;
}


void MedalAdmUpdateScreen::on_btn_boardMedal_clicked()
{
    string aux;
    //update data
    ui->listWidget->clear();
    for(auto medal : system->returnCountry(country.toStdString())->returnModality(modality.toStdString())->getMedals())
    {
        aux = addSpaces(medal->getChampion(),20);

        if(medal->getValue() == 1)
        {
            aux += addSpaces("Ouro",7);
        }
        else if(medal->getValue() == 2)
        {
            aux += addSpaces("Prata",7);
        }
        else if(medal->getValue() == 3)
        {
            aux += addSpaces("Bronze",7);
        }

        ui->listWidget->addItem(QString::fromStdString(aux));
    }
}


void MedalAdmUpdateScreen::on_btn_addMedal_clicked()
{
    string champion = ui->lineEdit_champion->text().toStdString();
    string medal = ui->comboBox->currentText().toStdString();
    string aux;
    int medal_aux=0;
    QSqlQuery query;


    if(ui->lineEdit_champion->text() != nullptr && ui->comboBox->currentText() != nullptr)
    {
        if(medal == "Ouro")
        {
            medal_aux = 1;
        }
        else if(medal == "Prata")
        {
            medal_aux = 2;
        }
        else if(medal == "Bronze")
        {
            medal_aux = 3;
        }

        if(system->returnCountry(country.toStdString())->returnModality(modality.toStdString())->createMedal(champion, medal_aux))
        {

            query.prepare("insert into table_medals (Modality, Champion, Value, Country) values('"+
                          modality+"'," +"'"+
                          QString::fromStdString(champion)+"','" +
                          QString::number(medal_aux) +"','"+
                          country +"')");
            query.exec();



            //update data
            ui->listWidget->clear();
            for(auto medal : system->returnCountry(country.toStdString())->returnModality(modality.toStdString())->getMedals())
            {
                aux = addSpaces(medal->getChampion(),20);

                if(medal->getValue() == 1)
                {
                    aux += addSpaces("Ouro",7);
                }
                else if(medal->getValue() == 2)
                {
                    aux += addSpaces("Prata",7);
                }
                else if(medal->getValue() == 3)
                {
                    aux += addSpaces("Bronze",7);
                }

                ui->listWidget->addItem(QString::fromStdString(aux));
            }
        }
    }
}


void MedalAdmUpdateScreen::on_btn_removeMedal_clicked()
{
    QListWidgetItem* item = ui->listWidget->currentItem();
    string aux;
    QSqlQuery query;
    if(item == nullptr)
    {
        return;
    }

     if(system->returnCountry(country.toStdString())->returnModality(modality.toStdString())->removeMedal(splitString(item->text().toStdString())))
     {
         query.prepare("delete from table_medals where Champion='" + QString::fromStdString(splitString(item->text().toStdString()))+"'");
         query.exec();

         //update data
         ui->listWidget->clear();
         for(auto medal : system->returnCountry(country.toStdString())->returnModality(modality.toStdString())->getMedals())
         {
             aux = addSpaces(medal->getChampion(),20);

             if(medal->getValue() == 1)
             {
                 aux += addSpaces("Ouro",7);
             }
             else if(medal->getValue() == 2)
             {
                 aux += addSpaces("Prata",7);
             }
             else if(medal->getValue() == 3)
             {
                 aux += addSpaces("Bronze",7);
             }

             ui->listWidget->addItem(QString::fromStdString(aux));
         }

      }
}


void MedalAdmUpdateScreen::on_btn_updateMedal_clicked()
{
    string champion = ui->lineEdit_champion->text().toStdString();
    string medal = ui->comboBox->currentText().toStdString();
    QListWidgetItem* item = ui->listWidget->currentItem();
    Medal* medal_aux;
    string aux;
    QSqlQuery query;
    int medal_int = 0;

    if(medal == "Ouro")
    {
        medal_int =1;
    }
    else if(medal == "Prata")
    {
        medal_int =2;
    }
    else if(medal == "Bronze")
    {
        medal_int =3;
    }

     if(item != nullptr)
     {
         medal_aux = system->returnCountry(country.toStdString())->returnModality(modality.toStdString())->returnMedal(splitString(item->text().toStdString()));
         if(medal_aux != nullptr)
         {
             //update data
             if(ui->lineEdit_champion->text() != nullptr)
             {
                 medal_aux->setChampion(champion);

                 query.prepare("update table_medals set Champion='" + QString::fromStdString(champion)+
                               "' where Champion='" +
                               QString::fromStdString(splitString(item->text().toStdString())) + "'");
                 query.exec();

             }
             if(ui->comboBox->currentText() != nullptr)
             {
                 medal_aux->setValue(medal_int);
                 query.prepare("update table_medals set Value='" + QString::number(medal_int)+
                               "' where Champion='" +
                               QString::fromStdString(splitString(item->text().toStdString())) + "'");
                 query.exec();
             }

             //update data
             ui->listWidget->clear();
             for(auto medal : system->returnCountry(country.toStdString())->returnModality(modality.toStdString())->getMedals())
             {
                 aux = addSpaces(medal->getChampion(),20);

                 if(medal->getValue() == 1)
                 {
                     aux += addSpaces("Ouro",7);
                 }
                 else if(medal->getValue() == 2)
                 {
                     aux += addSpaces("Prata",7);
                 }
                 else if(medal->getValue() == 3)
                 {
                     aux += addSpaces("Bronze",7);
                 }

                 ui->listWidget->addItem(QString::fromStdString(aux));
             }
         }
     }
}

