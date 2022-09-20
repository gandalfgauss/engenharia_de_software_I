#ifndef COUNTRYADM_H
#define COUNTRYADM_H

#include <QDialog>
#include "../src/lib/system.h"
#include "countryadmupdatescreen.h"

namespace Ui {
class CountryAdm;
}

class CountryAdm : public QDialog
{
    Q_OBJECT

public:
    explicit CountryAdm(QWidget *parent = nullptr, System* sys= nullptr);
    ~CountryAdm();

private slots:
    void on_btn_countryBoard_clicked();

    void on_btn_addCountry_clicked();

    void on_btn_removeCountry_clicked();

    void on_btn_updateCountry_clicked();

    void on_btn_modalities_clicked();

private:
    Ui::CountryAdm *ui;
    System* system;
    CountryAdmUpdateScreen* countryAdmUpdateScreen;
};

#endif // COUNTRYADM_H
