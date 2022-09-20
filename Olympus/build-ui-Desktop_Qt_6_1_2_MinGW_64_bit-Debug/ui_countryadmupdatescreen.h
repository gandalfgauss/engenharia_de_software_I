/********************************************************************************
** Form generated from reading UI file 'countryadmupdatescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTRYADMUPDATESCREEN_H
#define UI_COUNTRYADMUPDATESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CountryAdmUpdateScreen
{
public:
    QGridLayout *gridLayout;
    QLabel *label_nameCountry;
    QLabel *label_continentCountry;
    QPushButton *btn_boardModality;
    QPushButton *btn_addModality;
    QListWidget *listWidget;
    QLabel *label;
    QLineEdit *lineEdit_nameModality;
    QPushButton *btn_updateModality;
    QPushButton *btn_removeModality;
    QPushButton *btn_medals;

    void setupUi(QDialog *CountryAdmUpdateScreen)
    {
        if (CountryAdmUpdateScreen->objectName().isEmpty())
            CountryAdmUpdateScreen->setObjectName(QString::fromUtf8("CountryAdmUpdateScreen"));
        CountryAdmUpdateScreen->resize(400, 300);
        gridLayout = new QGridLayout(CountryAdmUpdateScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_nameCountry = new QLabel(CountryAdmUpdateScreen);
        label_nameCountry->setObjectName(QString::fromUtf8("label_nameCountry"));

        gridLayout->addWidget(label_nameCountry, 0, 0, 1, 1);

        label_continentCountry = new QLabel(CountryAdmUpdateScreen);
        label_continentCountry->setObjectName(QString::fromUtf8("label_continentCountry"));

        gridLayout->addWidget(label_continentCountry, 0, 1, 1, 2);

        btn_boardModality = new QPushButton(CountryAdmUpdateScreen);
        btn_boardModality->setObjectName(QString::fromUtf8("btn_boardModality"));

        gridLayout->addWidget(btn_boardModality, 1, 0, 1, 2);

        btn_addModality = new QPushButton(CountryAdmUpdateScreen);
        btn_addModality->setObjectName(QString::fromUtf8("btn_addModality"));

        gridLayout->addWidget(btn_addModality, 1, 2, 2, 1);

        listWidget = new QListWidget(CountryAdmUpdateScreen);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 2, 0, 6, 2);

        label = new QLabel(CountryAdmUpdateScreen);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 2, 1, 1);

        lineEdit_nameModality = new QLineEdit(CountryAdmUpdateScreen);
        lineEdit_nameModality->setObjectName(QString::fromUtf8("lineEdit_nameModality"));

        gridLayout->addWidget(lineEdit_nameModality, 4, 2, 1, 1);

        btn_updateModality = new QPushButton(CountryAdmUpdateScreen);
        btn_updateModality->setObjectName(QString::fromUtf8("btn_updateModality"));

        gridLayout->addWidget(btn_updateModality, 5, 2, 1, 1);

        btn_removeModality = new QPushButton(CountryAdmUpdateScreen);
        btn_removeModality->setObjectName(QString::fromUtf8("btn_removeModality"));

        gridLayout->addWidget(btn_removeModality, 6, 2, 1, 1);

        btn_medals = new QPushButton(CountryAdmUpdateScreen);
        btn_medals->setObjectName(QString::fromUtf8("btn_medals"));

        gridLayout->addWidget(btn_medals, 7, 2, 1, 1);


        retranslateUi(CountryAdmUpdateScreen);

        QMetaObject::connectSlotsByName(CountryAdmUpdateScreen);
    } // setupUi

    void retranslateUi(QDialog *CountryAdmUpdateScreen)
    {
        CountryAdmUpdateScreen->setWindowTitle(QCoreApplication::translate("CountryAdmUpdateScreen", "Dialog", nullptr));
        label_nameCountry->setText(QCoreApplication::translate("CountryAdmUpdateScreen", "Nome Pais", nullptr));
        label_continentCountry->setText(QCoreApplication::translate("CountryAdmUpdateScreen", "Continente", nullptr));
        btn_boardModality->setText(QCoreApplication::translate("CountryAdmUpdateScreen", "Quadro de Modalidades", nullptr));
        btn_addModality->setText(QCoreApplication::translate("CountryAdmUpdateScreen", "Adicionar", nullptr));
        label->setText(QCoreApplication::translate("CountryAdmUpdateScreen", "Nome", nullptr));
        btn_updateModality->setText(QCoreApplication::translate("CountryAdmUpdateScreen", "Atualizar", nullptr));
        btn_removeModality->setText(QCoreApplication::translate("CountryAdmUpdateScreen", "Remover", nullptr));
        btn_medals->setText(QCoreApplication::translate("CountryAdmUpdateScreen", "Medalhas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountryAdmUpdateScreen: public Ui_CountryAdmUpdateScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTRYADMUPDATESCREEN_H
