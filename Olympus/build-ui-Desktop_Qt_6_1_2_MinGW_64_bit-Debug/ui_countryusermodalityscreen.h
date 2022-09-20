/********************************************************************************
** Form generated from reading UI file 'countryusermodalityscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTRYUSERMODALITYSCREEN_H
#define UI_COUNTRYUSERMODALITYSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CountryUserModalityScreen
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QPushButton *btn_boardModality;
    QPushButton *btn_showMedals;

    void setupUi(QDialog *CountryUserModalityScreen)
    {
        if (CountryUserModalityScreen->objectName().isEmpty())
            CountryUserModalityScreen->setObjectName(QString::fromUtf8("CountryUserModalityScreen"));
        CountryUserModalityScreen->resize(400, 300);
        gridLayout = new QGridLayout(CountryUserModalityScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(CountryUserModalityScreen);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);

        btn_boardModality = new QPushButton(CountryUserModalityScreen);
        btn_boardModality->setObjectName(QString::fromUtf8("btn_boardModality"));

        gridLayout->addWidget(btn_boardModality, 0, 0, 1, 1);

        btn_showMedals = new QPushButton(CountryUserModalityScreen);
        btn_showMedals->setObjectName(QString::fromUtf8("btn_showMedals"));

        gridLayout->addWidget(btn_showMedals, 1, 1, 1, 1);


        retranslateUi(CountryUserModalityScreen);

        QMetaObject::connectSlotsByName(CountryUserModalityScreen);
    } // setupUi

    void retranslateUi(QDialog *CountryUserModalityScreen)
    {
        CountryUserModalityScreen->setWindowTitle(QCoreApplication::translate("CountryUserModalityScreen", "Dialog", nullptr));
        btn_boardModality->setText(QCoreApplication::translate("CountryUserModalityScreen", "Quadro de Modalidades", nullptr));
        btn_showMedals->setText(QCoreApplication::translate("CountryUserModalityScreen", "Mostrar Medalhas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountryUserModalityScreen: public Ui_CountryUserModalityScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTRYUSERMODALITYSCREEN_H
