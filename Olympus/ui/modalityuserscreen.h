#ifndef MODALITYUSERSCREEN_H
#define MODALITYUSERSCREEN_H

#include <QDialog>
#include "../src/lib/system.h"

namespace Ui {
class ModalityUserScreen;
}

class ModalityUserScreen : public QDialog
{
    Q_OBJECT

public:
    explicit ModalityUserScreen(QWidget *parent = nullptr, System* sys = nullptr);
    ~ModalityUserScreen();

private:
    Ui::ModalityUserScreen *ui;
    System* system;
};

#endif // MODALITYUSERSCREEN_H
