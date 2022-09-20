#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QDialog>
#include "countryadm.h"
#include "countryuserscreen.h"
#include "modalityadmscreen.h"
#include "modalityuserscreen.h"
#include "../src/lib/system.h"

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QDialog
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = nullptr, System* sys = nullptr, int perm = 0);
    ~LoginScreen();

private slots:
    void on_btn_logOut_clicked();

    void on_btn_login_country_clicked();


    void on_btn_modality_clicked();

private:
    Ui::LoginScreen *ui;
    System* system;
    int permission;
    CountryAdm* countryAdm;
    CountryUserScreen* countryUseScreen;
    ModalityAdmScreen* modalityAdmScreen;
    ModalityUserScreen* modalityUserScreen;
};

#endif // LOGINSCREEN_H
