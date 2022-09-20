#ifndef COUNTRYUSERMODALITYSCREEN_H
#define COUNTRYUSERMODALITYSCREEN_H

#include <QDialog>
#include "../src/lib/system.h"
#include "countryusermodalitymedalscreen.h"
namespace Ui {
class CountryUserModalityScreen;
}

class CountryUserModalityScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CountryUserModalityScreen(QWidget *parent = nullptr, System* sys = nullptr, QString countr= "");
    ~CountryUserModalityScreen();

private slots:
    void on_btn_boardModality_clicked();

    void on_btn_showMedals_clicked();

private:
    Ui::CountryUserModalityScreen *ui;
    CountryUserModalityMedalScreen* countryUserModalityMedalScreen;
    System* system;
    QString country;
};

#endif // COUNTRYUSERMODALITYSCREEN_H
