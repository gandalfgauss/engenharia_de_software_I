#include "modalityadmscreen.h"
#include "ui_modalityadmscreen.h"
#include <QMessageBox>
#include <QtSql>
ModalityAdmScreen::ModalityAdmScreen(QWidget *parent, System* sys) :
    QDialog(parent),
    ui(new Ui::ModalityAdmScreen)
{
    ui->setupUi(this);
    system = sys;
    updateBoard();
}

ModalityAdmScreen::~ModalityAdmScreen()
{
    delete ui;
}
void ModalityAdmScreen::updateBoard()
{
    //update data
    ui->listWidget->clear();
    for(auto modality : system->getModalities())
    {
        ui->listWidget->addItem(QString::fromStdString(*modality));
    }
}

void ModalityAdmScreen::on_btn_add_modality_clicked()
{
    string context = ui->lineEdit_modality->text().toStdString();
    QSqlQuery query;

    //update data
    ui->listWidget->clear();
    for(auto modality : system->getModalities())
    {
        ui->listWidget->addItem(QString::fromStdString(*modality));
    }
    if(ui->lineEdit_modality->text() != nullptr)
    {
        if(system->createModality(context))
        {

            ui->listWidget->addItem(QString::fromStdString(context));
            query.prepare("insert into table_modalities (Name) values('"+QString::fromStdString(context)+"')");
            query.exec();
        }
    }

}


void ModalityAdmScreen::on_btn_remove_modality_clicked()
{
    QListWidgetItem* item = ui->listWidget->currentItem();
    QString name = item->text();
    QSqlQuery query;
    if(item == nullptr)
    {
        return;
    }


     if(system->removeModality(item->text().toStdString()))
     {


          //update data
           ui->listWidget->clear();
           for(auto modality : system->getModalities())
           {
              ui->listWidget->addItem(QString::fromStdString(*modality));
           }

           query.prepare("delete from table_modalities where Name='" + name+"'");
           query.exec();

           query.prepare("delete from table_countries_modalities where Name='" + name+"'");
           query.exec();

           query.prepare("delete from table_medals where Modality='" + name+"'");
           query.exec();



      }
      else
      {
           QMessageBox::warning(this, "Erro", "Modalidade não existe no Sistema");
      }

}



void ModalityAdmScreen::on_btn_edit_modality_clicked()
{

    QListWidgetItem* item = ui->listWidget->currentItem();
    QString itemName = item->text();
    string context = ui->lineEdit_editModality->text().toStdString();
    QSqlQuery query;

    if(item == nullptr)
    {
        return;
    }

    if(ui->lineEdit_editModality->text() != nullptr)
    {
        if(system->createModality(context))
        {
            if(system->removeModality(item->text().toStdString()))
            {
                //update data
                ui->listWidget->clear();
                for(auto modality : system->getModalities())
                {
                    ui->listWidget->addItem(QString::fromStdString(*modality));
                }

                query.prepare("update table_modalities set Name='" + QString::fromStdString(context)+
                              "' where Name='" + itemName + "'");
                query.exec();

                query.prepare("update table_countries_modalities set Name='" + QString::fromStdString(context)+
                              "' where Name='" + itemName + "'");

                query.exec();

                query.prepare("update table_medals set Name='" + QString::fromStdString(context)+
                                              "' where Name='" + itemName + "'");

                query.exec();

            }
            else
            {
                QMessageBox::warning(this, "Erro", "Modalidade não existe no Sistema");
            }
        }
    }
}

