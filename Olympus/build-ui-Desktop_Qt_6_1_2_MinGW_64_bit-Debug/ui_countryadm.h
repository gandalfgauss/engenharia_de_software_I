/********************************************************************************
** Form generated from reading UI file 'countryadm.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTRYADM_H
#define UI_COUNTRYADM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CountryAdm
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_continentCountry;
    QPushButton *btn_countryBoard;
    QLineEdit *lineEdit_nameCountry;
    QPushButton *btn_addCountry;
    QPushButton *btn_updateCountry;
    QPushButton *btn_modalities;
    QPushButton *btn_removeCountry;

    void setupUi(QDialog *CountryAdm)
    {
        if (CountryAdm->objectName().isEmpty())
            CountryAdm->setObjectName(QString::fromUtf8("CountryAdm"));
        CountryAdm->resize(578, 365);
        gridLayout = new QGridLayout(CountryAdm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(CountryAdm);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 4, 0, 1, 1);

        label = new QLabel(CountryAdm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(CountryAdm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        lineEdit_continentCountry = new QLineEdit(CountryAdm);
        lineEdit_continentCountry->setObjectName(QString::fromUtf8("lineEdit_continentCountry"));

        gridLayout->addWidget(lineEdit_continentCountry, 2, 3, 1, 1);

        btn_countryBoard = new QPushButton(CountryAdm);
        btn_countryBoard->setObjectName(QString::fromUtf8("btn_countryBoard"));

        gridLayout->addWidget(btn_countryBoard, 0, 0, 1, 1);

        lineEdit_nameCountry = new QLineEdit(CountryAdm);
        lineEdit_nameCountry->setObjectName(QString::fromUtf8("lineEdit_nameCountry"));

        gridLayout->addWidget(lineEdit_nameCountry, 1, 3, 1, 1);

        btn_addCountry = new QPushButton(CountryAdm);
        btn_addCountry->setObjectName(QString::fromUtf8("btn_addCountry"));

        gridLayout->addWidget(btn_addCountry, 0, 3, 1, 1);

        btn_updateCountry = new QPushButton(CountryAdm);
        btn_updateCountry->setObjectName(QString::fromUtf8("btn_updateCountry"));

        gridLayout->addWidget(btn_updateCountry, 4, 3, 1, 1);

        btn_modalities = new QPushButton(CountryAdm);
        btn_modalities->setObjectName(QString::fromUtf8("btn_modalities"));

        gridLayout->addWidget(btn_modalities, 5, 3, 1, 1);

        btn_removeCountry = new QPushButton(CountryAdm);
        btn_removeCountry->setObjectName(QString::fromUtf8("btn_removeCountry"));

        gridLayout->addWidget(btn_removeCountry, 3, 3, 1, 1);


        retranslateUi(CountryAdm);

        QMetaObject::connectSlotsByName(CountryAdm);
    } // setupUi

    void retranslateUi(QDialog *CountryAdm)
    {
        CountryAdm->setWindowTitle(QCoreApplication::translate("CountryAdm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CountryAdm", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("CountryAdm", "Continente", nullptr));
        btn_countryBoard->setText(QCoreApplication::translate("CountryAdm", "Quadro de Pa\303\255ses", nullptr));
        btn_addCountry->setText(QCoreApplication::translate("CountryAdm", "Adicionar", nullptr));
        btn_updateCountry->setText(QCoreApplication::translate("CountryAdm", "Atualizar", nullptr));
        btn_modalities->setText(QCoreApplication::translate("CountryAdm", "Modalidades", nullptr));
        btn_removeCountry->setText(QCoreApplication::translate("CountryAdm", "Remover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountryAdm: public Ui_CountryAdm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTRYADM_H
