#ifndef COUNTRYUSERMODALITYMEDALSCREEN_H
#define COUNTRYUSERMODALITYMEDALSCREEN_H

#include <QDialog>
#include "../src/lib/system.h"
#include "utility.h"

namespace Ui {
class CountryUserModalityMedalScreen;
}

class CountryUserModalityMedalScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CountryUserModalityMedalScreen(QWidget *parent = nullptr, System* sys = nullptr, QString countr = "", QString modalit = "");
    ~CountryUserModalityMedalScreen();

private:
    Ui::CountryUserModalityMedalScreen *ui;
    System* system;
    QString country;
    QString modality;
};

#endif // COUNTRYUSERMODALITYMEDALSCREEN_H
