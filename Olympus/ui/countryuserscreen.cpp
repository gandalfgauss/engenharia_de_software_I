#include "countryuserscreen.h"
#include "ui_countryuserscreen.h"

CountryUserScreen::CountryUserScreen(QWidget *parent, System* sys) :
    QDialog(parent),
    ui(new Ui::CountryUserScreen)
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

CountryUserScreen::~CountryUserScreen()
{
    delete ui;
}

void CountryUserScreen::on_btn_selectCountry_clicked()
{
    QListWidgetItem* item = ui->listWidget->currentItem();
    if( item != nullptr)
    {
        countryUserModalityScreen = new CountryUserModalityScreen(this, system, item->text());
        countryUserModalityScreen->show();
    }
}


void CountryUserScreen::on_btn_boardCountry_clicked()
{
    //update data
    ui->listWidget->clear();
    for(auto country : system->getCountries())
    {
        ui->listWidget->addItem(QString::fromStdString(country->getName()));
    }

}

