#ifndef MEDALADMUPDATESCREEN_H
#define MEDALADMUPDATESCREEN_H

#include <QDialog>
#include "../src/lib/system.h"
#include "utility.h"

namespace Ui {
class MedalAdmUpdateScreen;
}

class MedalAdmUpdateScreen : public QDialog
{
    Q_OBJECT

public:
    explicit MedalAdmUpdateScreen(QWidget *parent = nullptr, System* sys = nullptr, QString countr = "", QString modalit = "");
    ~MedalAdmUpdateScreen();

private slots:

    void on_btn_boardMedal_clicked();

    void on_btn_addMedal_clicked();

    void on_btn_removeMedal_clicked();

    void on_btn_updateMedal_clicked();

private:
    Ui::MedalAdmUpdateScreen *ui;
    System* system;
    QString country;
    QString modality;
};

#endif // MEDALADMUPDATESCREEN_H
