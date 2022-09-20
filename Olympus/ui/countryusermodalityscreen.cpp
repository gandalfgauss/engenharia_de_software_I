#include "countryusermodalityscreen.h"
#include "ui_countryusermodalityscreen.h"

CountryUserModalityScreen::CountryUserModalityScreen(QWidget *parent, System* sys, QString countr) :
    QDialog(parent),
    ui(new Ui::CountryUserModalityScreen)
{
    ui->setupUi(this);
    system = sys;
    country = countr;
    //update data
    ui->listWidget->clear();
    for(auto modality : system->returnCountry(country.toStdString())->getModalities())
    {
        ui->listWidget->addItem(QString::fromStdString(modality->getName()));
    }
}

CountryUserModalityScreen::~CountryUserModalityScreen()
{
    delete ui;
}

void CountryUserModalityScreen::on_btn_boardModality_clicked()
{
    //update data
    ui->listWidget->clear();
    for(auto modality : system->returnCountry(country.toStdString())->getModalities())
    {
        ui->listWidget->addItem(QString::fromStdString(modality->getName()));
    }
}


void CountryUserModalityScreen::on_btn_showMedals_clicked()
{
    QListWidgetItem* item = ui->listWidget->currentItem();
    if( item != nullptr)
    {
        countryUserModalityMedalScreen = new CountryUserModalityMedalScreen(this, system, country, item->text());
        countryUserModalityMedalScreen->show();
    }
}

