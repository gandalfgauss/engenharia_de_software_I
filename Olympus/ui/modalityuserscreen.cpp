#include "modalityuserscreen.h"
#include "ui_modalityuserscreen.h"

ModalityUserScreen::ModalityUserScreen(QWidget *parent, System* sys) :
    QDialog(parent),
    ui(new Ui::ModalityUserScreen)
{
    ui->setupUi(this);
    system = sys;
    //update data
    ui->listWidget->clear();
    for(auto modality : system->getModalities())
    {
        ui->listWidget->addItem(QString::fromStdString(*modality));
    }
}

ModalityUserScreen::~ModalityUserScreen()
{
    delete ui;
}
