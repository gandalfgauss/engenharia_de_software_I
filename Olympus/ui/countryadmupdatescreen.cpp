#include "countryadmupdatescreen.h"
#include "ui_countryadmupdatescreen.h"
#include <QtSql>
CountryAdmUpdateScreen::CountryAdmUpdateScreen(QWidget *parent,  System* sys, QString countr) :
    QDialog(parent),
    ui(new Ui::CountryAdmUpdateScreen)
{
    ui->setupUi(this);
    system = sys;
    country = countr;

    ui->label_nameCountry->setText(countr);
    ui->label_continentCountry->setText(QString::fromStdString(system->returnCountry(countr.toStdString())->getContinent()));
    //update data
    ui->listWidget->clear();
    for(auto modality : system->returnCountry(country.toStdString())->getModalities())
    {
        ui->listWidget->addItem(QString::fromStdString(modality->getName()));
    }
}

CountryAdmUpdateScreen::~CountryAdmUpdateScreen()
{
    delete ui;
}

void CountryAdmUpdateScreen::on_btn_boardModality_clicked()
{
    //update data
    ui->listWidget->clear();
    for(auto modality : system->returnCountry(country.toStdString())->getModalities())
    {
        ui->listWidget->addItem(QString::fromStdString(modality->getName()));
    }
}


void CountryAdmUpdateScreen::on_btn_addModality_clicked()
{
    string name = ui->lineEdit_nameModality->text().toStdString();
    QSqlQuery query;
    if(ui->lineEdit_nameModality->text() != nullptr)
    {
        if(system->returnCountry(country.toStdString())->createModality(name))
        {
            query.prepare("insert into table_countries_modalities (Name, Country) values('"+
                          QString::fromStdString(name)+"', '"+country +"')");
            query.exec();
            //update data
            ui->listWidget->clear();
            for(auto modality: system->returnCountry(country.toStdString())->getModalities())
            {
                ui->listWidget->addItem(QString::fromStdString(modality->getName()));
            }
        }
    }
}


void CountryAdmUpdateScreen::on_btn_updateModality_clicked()
{
    string name = ui->lineEdit_nameModality->text().toStdString();

    QListWidgetItem* item = ui->listWidget->currentItem();
    Modality* modal;
    QSqlQuery query;

     if(item != nullptr)
     {
         modal = system->returnCountry(country.toStdString())->returnModality(item->text().toStdString());

         if(modal != nullptr)
         {
             //update data
             if(ui->lineEdit_nameModality->text() != nullptr)
             {
                 modal->setName(name);

                 query.prepare("update table_countries_modalities set Name='" + QString::fromStdString(name)+
                               "' where Name='" + item->text() + "'");

                 query.exec();

                 query.prepare("update table_medals set Modality='" + QString::fromStdString(name)+
                                               "' where Modality='" + item->text() + "'");

                 query.exec();
             }

             //update data
             ui->listWidget->clear();
             for(auto modality: system->returnCountry(country.toStdString())->getModalities())
             {
                 ui->listWidget->addItem(QString::fromStdString(modality->getName()));
             }
         }
      }
}


void CountryAdmUpdateScreen::on_btn_removeModality_clicked()
{
    QSqlQuery query;
    QListWidgetItem* item = ui->listWidget->currentItem();

    if(item == nullptr)
    {
        return;
    }


     if(system->returnCountry(country.toStdString())->removeModality(item->text().toStdString()))
     {
         query.prepare("delete from table_countries_modalities where Name='" + item->text()+"'");
         query.exec();

         query.prepare("delete from table_medals where Modality='" + item->text()+"'");
         query.exec();

         //update data
         ui->listWidget->clear();
         for(auto modality: system->returnCountry(country.toStdString())->getModalities())
         {
             ui->listWidget->addItem(QString::fromStdString(modality->getName()));
         }

      }
}


void CountryAdmUpdateScreen::on_btn_medals_clicked()
{
    QListWidgetItem* item = ui->listWidget->currentItem();
    if( item != nullptr)
    {
        medalAdmUpdateScreen = new MedalAdmUpdateScreen(this, system, country, item->text());
        medalAdmUpdateScreen->show();
    }
}

