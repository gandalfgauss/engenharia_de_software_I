/********************************************************************************
** Form generated from reading UI file 'countryusermodalitymedalscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTRYUSERMODALITYMEDALSCREEN_H
#define UI_COUNTRYUSERMODALITYMEDALSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_CountryUserModalityMedalScreen
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *CountryUserModalityMedalScreen)
    {
        if (CountryUserModalityMedalScreen->objectName().isEmpty())
            CountryUserModalityMedalScreen->setObjectName(QString::fromUtf8("CountryUserModalityMedalScreen"));
        CountryUserModalityMedalScreen->resize(400, 300);
        gridLayout = new QGridLayout(CountryUserModalityMedalScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(CountryUserModalityMedalScreen);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 2, 0, 1, 1);

        label = new QLabel(CountryUserModalityMedalScreen);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);


        retranslateUi(CountryUserModalityMedalScreen);

        QMetaObject::connectSlotsByName(CountryUserModalityMedalScreen);
    } // setupUi

    void retranslateUi(QDialog *CountryUserModalityMedalScreen)
    {
        CountryUserModalityMedalScreen->setWindowTitle(QCoreApplication::translate("CountryUserModalityMedalScreen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CountryUserModalityMedalScreen", "  Ganhador              Medalha ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountryUserModalityMedalScreen: public Ui_CountryUserModalityMedalScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTRYUSERMODALITYMEDALSCREEN_H
