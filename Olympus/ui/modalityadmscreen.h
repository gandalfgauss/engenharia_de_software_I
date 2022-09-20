#ifndef MODALITYADMSCREEN_H
#define MODALITYADMSCREEN_H

#include <QDialog>
#include "../src/lib/system.h"

namespace Ui {
class ModalityAdmScreen;
}

class ModalityAdmScreen : public QDialog
{
    Q_OBJECT

public:
    explicit ModalityAdmScreen(QWidget *parent = nullptr, System* sys = nullptr);
    ~ModalityAdmScreen();
private:
    void updateBoard();
private slots:
    void on_btn_add_modality_clicked();

    void on_btn_remove_modality_clicked();



    void on_btn_edit_modality_clicked();

private:
    Ui::ModalityAdmScreen *ui;
    System* system;
};

#endif // MODALITYADMSCREEN_H
