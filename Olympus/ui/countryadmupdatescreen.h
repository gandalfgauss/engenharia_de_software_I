#ifndef COUNTRYADMUPDATESCREEN_H
#define COUNTRYADMUPDATESCREEN_H

#include <QDialog>
#include "../src/lib/system.h"
#include "medaladmupdatescreen.h"
namespace Ui {
class CountryAdmUpdateScreen;
}

class CountryAdmUpdateScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CountryAdmUpdateScreen(QWidget *parent = nullptr, System* sys = nullptr, QString countr = "");
    ~CountryAdmUpdateScreen();

private slots:
    void on_btn_boardModality_clicked();

    void on_btn_addModality_clicked();

    void on_btn_updateModality_clicked();

    void on_btn_removeModality_clicked();

    void on_btn_medals_clicked();

private:
    Ui::CountryAdmUpdateScreen *ui;
    System* system;
    QString country;
    MedalAdmUpdateScreen* medalAdmUpdateScreen;

};

#endif // COUNTRYADMUPDATESCREEN_H
