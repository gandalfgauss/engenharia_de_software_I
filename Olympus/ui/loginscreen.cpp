#include "loginscreen.h"
#include "ui_loginscreen.h"

LoginScreen::LoginScreen(QWidget *parent, System* sys, int perm) :
    QDialog(parent),
    ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
    system = sys;
    permission = perm;
}

LoginScreen::~LoginScreen()
{
    delete ui;
}

void LoginScreen::on_btn_logOut_clicked()
{
    close();

}

void LoginScreen::on_btn_login_country_clicked()
{
    if(permission == 1)
    {
        countryAdm = new CountryAdm(this, system);
        countryAdm->show();
    }
    else
    {
        countryUseScreen = new CountryUserScreen(this, system);
        countryUseScreen->show();
    }
}



void LoginScreen::on_btn_modality_clicked()
{
    if(permission == 1)
    {
        modalityAdmScreen = new ModalityAdmScreen(this, system);
        modalityAdmScreen->show();
    }
    else
    {
        modalityUserScreen = new ModalityUserScreen(this, system);
        modalityUserScreen->show();
    }
}

