/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_User;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QPushButton *login_button;
    QComboBox *comboBox_country;
    QPushButton *btn_filtroCountry;
    QComboBox *comboBox_modality;
    QPushButton *btn_filtroModality;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QPushButton *btn_medals_board;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(737, 327);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit_User = new QLineEdit(centralwidget);
        lineEdit_User->setObjectName(QString::fromUtf8("lineEdit_User"));

        verticalLayout->addWidget(lineEdit_User);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_Password = new QLineEdit(centralwidget);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_Password);

        login_button = new QPushButton(centralwidget);
        login_button->setObjectName(QString::fromUtf8("login_button"));

        verticalLayout->addWidget(login_button);

        comboBox_country = new QComboBox(centralwidget);
        comboBox_country->setObjectName(QString::fromUtf8("comboBox_country"));

        verticalLayout->addWidget(comboBox_country);

        btn_filtroCountry = new QPushButton(centralwidget);
        btn_filtroCountry->setObjectName(QString::fromUtf8("btn_filtroCountry"));

        verticalLayout->addWidget(btn_filtroCountry);

        comboBox_modality = new QComboBox(centralwidget);
        comboBox_modality->setObjectName(QString::fromUtf8("comboBox_modality"));

        verticalLayout->addWidget(comboBox_modality);

        btn_filtroModality = new QPushButton(centralwidget);
        btn_filtroModality->setObjectName(QString::fromUtf8("btn_filtroModality"));

        verticalLayout->addWidget(btn_filtroModality);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(8);
        listWidget->setFont(font);
        listWidget->setTabletTracking(false);
        listWidget->setAutoFillBackground(false);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        listWidget->setResizeMode(QListView::Fixed);
        listWidget->setUniformItemSizes(false);

        horizontalLayout->addWidget(listWidget);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        btn_medals_board = new QPushButton(centralwidget);
        btn_medals_board->setObjectName(QString::fromUtf8("btn_medals_board"));

        gridLayout->addWidget(btn_medals_board, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 737, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Usu\303\241rio", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Senha", nullptr));
        login_button->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btn_filtroCountry->setText(QCoreApplication::translate("MainWindow", "Filtro Pa\303\255s", nullptr));
        btn_filtroModality->setText(QCoreApplication::translate("MainWindow", "Filtro Modalidade", nullptr));
        btn_medals_board->setText(QCoreApplication::translate("MainWindow", "Quadro de Medalhas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
