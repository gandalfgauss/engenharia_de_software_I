/********************************************************************************
** Form generated from reading UI file 'countryuserscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTRYUSERSCREEN_H
#define UI_COUNTRYUSERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CountryUserScreen
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QPushButton *btn_selectCountry;
    QPushButton *btn_boardCountry;

    void setupUi(QDialog *CountryUserScreen)
    {
        if (CountryUserScreen->objectName().isEmpty())
            CountryUserScreen->setObjectName(QString::fromUtf8("CountryUserScreen"));
        CountryUserScreen->resize(400, 300);
        gridLayout = new QGridLayout(CountryUserScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(CountryUserScreen);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(8);
        listWidget->setFont(font);

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);

        btn_selectCountry = new QPushButton(CountryUserScreen);
        btn_selectCountry->setObjectName(QString::fromUtf8("btn_selectCountry"));

        gridLayout->addWidget(btn_selectCountry, 1, 1, 1, 1);

        btn_boardCountry = new QPushButton(CountryUserScreen);
        btn_boardCountry->setObjectName(QString::fromUtf8("btn_boardCountry"));

        gridLayout->addWidget(btn_boardCountry, 0, 0, 1, 1);


        retranslateUi(CountryUserScreen);

        QMetaObject::connectSlotsByName(CountryUserScreen);
    } // setupUi

    void retranslateUi(QDialog *CountryUserScreen)
    {
        CountryUserScreen->setWindowTitle(QCoreApplication::translate("CountryUserScreen", "Dialog", nullptr));
        btn_selectCountry->setText(QCoreApplication::translate("CountryUserScreen", "Selecionar Pais", nullptr));
        btn_boardCountry->setText(QCoreApplication::translate("CountryUserScreen", "Quadro de Pa\303\255ses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountryUserScreen: public Ui_CountryUserScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTRYUSERSCREEN_H
