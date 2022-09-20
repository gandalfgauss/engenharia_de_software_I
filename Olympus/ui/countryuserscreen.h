#ifndef COUNTRYUSERSCREEN_H
#define COUNTRYUSERSCREEN_H

#include <QDialog>
#include "../src/lib/system.h"
#include "countryusermodalityscreen.h"

namespace Ui {
class CountryUserScreen;
}

class CountryUserScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CountryUserScreen(QWidget *parent = nullptr, System* sys = nullptr);
    ~CountryUserScreen();

private slots:
    void on_btn_selectCountry_clicked();

    void on_btn_boardCountry_clicked();

private:
    Ui::CountryUserScreen *ui;
    System* system;
    CountryUserModalityScreen* countryUserModalityScreen;
};

#endif // COUNTRYUSERSCREEN_H
