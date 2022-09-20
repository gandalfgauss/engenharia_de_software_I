/********************************************************************************
** Form generated from reading UI file 'modalityuserscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODALITYUSERSCREEN_H
#define UI_MODALITYUSERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ModalityUserScreen
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *ModalityUserScreen)
    {
        if (ModalityUserScreen->objectName().isEmpty())
            ModalityUserScreen->setObjectName(QString::fromUtf8("ModalityUserScreen"));
        ModalityUserScreen->resize(400, 300);
        gridLayout = new QGridLayout(ModalityUserScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(ModalityUserScreen);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);


        retranslateUi(ModalityUserScreen);

        QMetaObject::connectSlotsByName(ModalityUserScreen);
    } // setupUi

    void retranslateUi(QDialog *ModalityUserScreen)
    {
        ModalityUserScreen->setWindowTitle(QCoreApplication::translate("ModalityUserScreen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModalityUserScreen: public Ui_ModalityUserScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODALITYUSERSCREEN_H
