#include "countryusermodalitymedalscreen.h"
#include "ui_countryusermodalitymedalscreen.h"

CountryUserModalityMedalScreen::CountryUserModalityMedalScreen(QWidget *parent, System* sys, QString countr, QString modalit) :
    QDialog(parent),
    ui(new Ui::CountryUserModalityMedalScreen)
{
    ui->setupUi(this);
    system = sys;
    country = countr;
    modality = modalit;
    string aux;

    //update data
    ui->listWidget->clear();
    for(auto medal : system->returnCountry(country.toStdString())->returnModality(modality.toStdString())->getMedals())
    {
        aux = addSpaces(medal->getChampion(),60);

        if(medal->getValue() == 1)
        {
            aux += addSpaces("Ouro",8);
        }
        else if(medal->getValue() == 2)
        {
            aux += addSpaces("Prata",8);
        }
        else if(medal->getValue() == 3)
        {
            aux += addSpaces("Bronze",8);
        }

        ui->listWidget->addItem(QString::fromStdString(aux));
    }

}

CountryUserModalityMedalScreen::~CountryUserModalityMedalScreen()
{
    delete ui;
}
