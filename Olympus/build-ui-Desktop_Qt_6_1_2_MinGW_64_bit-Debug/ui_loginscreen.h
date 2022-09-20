/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_logOut;
    QPushButton *btn_login_country;
    QPushButton *btn_modality;

    void setupUi(QDialog *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QString::fromUtf8("LoginScreen"));
        LoginScreen->resize(630, 293);
        gridLayout = new QGridLayout(LoginScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_logOut = new QPushButton(LoginScreen);
        btn_logOut->setObjectName(QString::fromUtf8("btn_logOut"));

        horizontalLayout->addWidget(btn_logOut);

        btn_login_country = new QPushButton(LoginScreen);
        btn_login_country->setObjectName(QString::fromUtf8("btn_login_country"));

        horizontalLayout->addWidget(btn_login_country);

        btn_modality = new QPushButton(LoginScreen);
        btn_modality->setObjectName(QString::fromUtf8("btn_modality"));

        horizontalLayout->addWidget(btn_modality);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QDialog *LoginScreen)
    {
        LoginScreen->setWindowTitle(QCoreApplication::translate("LoginScreen", "Dialog", nullptr));
        btn_logOut->setText(QCoreApplication::translate("LoginScreen", "LogOut", nullptr));
        btn_login_country->setText(QCoreApplication::translate("LoginScreen", "Pa\303\255ses", nullptr));
        btn_modality->setText(QCoreApplication::translate("LoginScreen", "Modalidades", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
