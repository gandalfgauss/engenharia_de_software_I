#include "countryadm.h"
#include "ui_countryadm.h"
#include <QtSql>
CountryAdm::CountryAdm(QWidget *parent, System* sys) :
    QDialog(parent),
    ui(new Ui::CountryAdm)
{
    ui->setupUi(this);
    system = sys;

    //update data
    ui->listWidget->clear();
    for(auto country : system->getCountries())
    {
        ui->listWidget->addItem(QString::fromStdString(country->getName()));
    }
}

CountryAdm::~CountryAdm()
{
    delete ui;
}

void CountryAdm::on_btn_countryBoard_clicked()
{
    //update data
    ui->listWidget->clear();
    for(auto country : system->getCountries())
    {
        ui->listWidget->addItem(QString::fromStdString(country->getName()));
    }
}


void CountryAdm::on_btn_addCountry_clicked()
{
    QSqlQuery query;
    string name = ui->lineEdit_nameCountry->text().toStdString();
    string continent = ui->lineEdit_continentCountry->text().toStdString();

    if(ui->lineEdit_nameCountry->text() != nullptr && ui->lineEdit_continentCountry->text() != nullptr)
    {
        if(system->createCountry(name, continent))
        {
            //update data
            ui->listWidget->clear();
            for(auto country: system->getCountries())
            {
                ui->listWidget->addItem(QString::fromStdString(country->getName()));
            }

            query.prepare("insert into table_countries (Name, Continent) values('"+
                          QString::fromStdString(name)+"'," +"'"+
                          QString::fromStdString(continent)+"')");
            query.exec();
        }
    }

}


void CountryAdm::on_btn_removeCountry_clicked()
{
    QListWidgetItem* item = ui->listWidget->currentItem();
    QString name = item->text();
    QSqlQuery query;
    if(item == nullptr)
    {
        return;
    }


     if(system->removeCountry(item->text().toStdString()))
     {
         query.prepare("delete from table_countries where Name='" + name+"'");
         query.exec();

         query.prepare("delete from table_countries_modalities where Country='" + name+"'");
         query.exec();

         query.prepare("delete from table_medals where Country='" + name+"'");
         query.exec();
          //update data
           ui->listWidget->clear();
           for(auto country : system->getCountries())
           {
              ui->listWidget->addItem(QString::fromStdString(country->getName()));
           }

      }
}


void CountryAdm::on_btn_updateCountry_clicked()
{
    string name = ui->lineEdit_nameCountry->text().toStdString();
    string continent = ui->lineEdit_continentCountry->text().toStdString();
    QListWidgetItem* item = ui->listWidget->currentItem();
    Country* countr;
    QSqlQuery query;

        if(item != nullptr)
        {
            countr = system->returnCountry(item->text().toStdString());
            if(countr != nullptr)
            {
                //update data
                if(ui->lineEdit_nameCountry->text() != nullptr)
                {
                    countr->setName(name);
                    query.prepare("update table_countries set Name='" + QString::fromStdString(name)+
                                  "' where Name='" + item->text() + "'");
                    query.exec();

                    query.prepare("update table_countries_modalities set Country='" + QString::fromStdString(name)+
                                  "' where Country='" + item->text() + "'");

                    query.exec();

                    query.prepare("update table_medals set Country='" + QString::fromStdString(name)+
                                                  "' where Country='" + item->text() + "'");

                    query.exec();
                }
                if(ui->lineEdit_continentCountry->text() != nullptr)
                {
                    countr->setContinent(continent);

                    query.prepare("update table_countries set Continent='" + QString::fromStdString(continent)+
                                  "' where Name='" + item->text() + "'");
                    query.exec();
                }

                ui->listWidget->clear();
                for(auto country: system->getCountries())
                {
                    ui->listWidget->addItem(QString::fromStdString(country->getName()));
                }
            }
        }
}


void CountryAdm::on_btn_modalities_clicked()
{
    QListWidgetItem* item = ui->listWidget->currentItem();
    if( item != nullptr)
    {
        countryAdmUpdateScreen = new CountryAdmUpdateScreen(this, system, item->text());
        countryAdmUpdateScreen->show();
    }
}

