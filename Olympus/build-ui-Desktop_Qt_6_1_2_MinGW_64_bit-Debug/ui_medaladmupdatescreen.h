/********************************************************************************
** Form generated from reading UI file 'medaladmupdatescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDALADMUPDATESCREEN_H
#define UI_MEDALADMUPDATESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MedalAdmUpdateScreen
{
public:
    QGridLayout *gridLayout;
    QPushButton *btn_updateMedal;
    QLabel *label_2;
    QPushButton *btn_removeMedal;
    QLabel *label_modality;
    QPushButton *btn_addMedal;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *btn_boardMedal;
    QLineEdit *lineEdit_champion;
    QLabel *label_country;
    QComboBox *comboBox;

    void setupUi(QDialog *MedalAdmUpdateScreen)
    {
        if (MedalAdmUpdateScreen->objectName().isEmpty())
            MedalAdmUpdateScreen->setObjectName(QString::fromUtf8("MedalAdmUpdateScreen"));
        MedalAdmUpdateScreen->resize(400, 300);
        gridLayout = new QGridLayout(MedalAdmUpdateScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_updateMedal = new QPushButton(MedalAdmUpdateScreen);
        btn_updateMedal->setObjectName(QString::fromUtf8("btn_updateMedal"));

        gridLayout->addWidget(btn_updateMedal, 6, 3, 1, 1);

        label_2 = new QLabel(MedalAdmUpdateScreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 2, 1, 2);

        btn_removeMedal = new QPushButton(MedalAdmUpdateScreen);
        btn_removeMedal->setObjectName(QString::fromUtf8("btn_removeMedal"));

        gridLayout->addWidget(btn_removeMedal, 7, 3, 1, 1);

        label_modality = new QLabel(MedalAdmUpdateScreen);
        label_modality->setObjectName(QString::fromUtf8("label_modality"));

        gridLayout->addWidget(label_modality, 0, 1, 1, 2);

        btn_addMedal = new QPushButton(MedalAdmUpdateScreen);
        btn_addMedal->setObjectName(QString::fromUtf8("btn_addMedal"));

        gridLayout->addWidget(btn_addMedal, 1, 3, 1, 1);

        label = new QLabel(MedalAdmUpdateScreen);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 2, 1, 2);

        listWidget = new QListWidget(MedalAdmUpdateScreen);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(8);
        listWidget->setFont(font);

        gridLayout->addWidget(listWidget, 2, 0, 6, 2);

        btn_boardMedal = new QPushButton(MedalAdmUpdateScreen);
        btn_boardMedal->setObjectName(QString::fromUtf8("btn_boardMedal"));

        gridLayout->addWidget(btn_boardMedal, 1, 0, 1, 1);

        lineEdit_champion = new QLineEdit(MedalAdmUpdateScreen);
        lineEdit_champion->setObjectName(QString::fromUtf8("lineEdit_champion"));

        gridLayout->addWidget(lineEdit_champion, 3, 2, 1, 2);

        label_country = new QLabel(MedalAdmUpdateScreen);
        label_country->setObjectName(QString::fromUtf8("label_country"));

        gridLayout->addWidget(label_country, 0, 0, 1, 1);

        comboBox = new QComboBox(MedalAdmUpdateScreen);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 5, 2, 1, 1);


        retranslateUi(MedalAdmUpdateScreen);

        QMetaObject::connectSlotsByName(MedalAdmUpdateScreen);
    } // setupUi

    void retranslateUi(QDialog *MedalAdmUpdateScreen)
    {
        MedalAdmUpdateScreen->setWindowTitle(QCoreApplication::translate("MedalAdmUpdateScreen", "Dialog", nullptr));
        btn_updateMedal->setText(QCoreApplication::translate("MedalAdmUpdateScreen", "Atualizar", nullptr));
        label_2->setText(QCoreApplication::translate("MedalAdmUpdateScreen", "Medalha", nullptr));
        btn_removeMedal->setText(QCoreApplication::translate("MedalAdmUpdateScreen", "Remover", nullptr));
        label_modality->setText(QCoreApplication::translate("MedalAdmUpdateScreen", "Modalidade", nullptr));
        btn_addMedal->setText(QCoreApplication::translate("MedalAdmUpdateScreen", "Adicionar", nullptr));
        label->setText(QCoreApplication::translate("MedalAdmUpdateScreen", "Campe\303\243o", nullptr));
        btn_boardMedal->setText(QCoreApplication::translate("MedalAdmUpdateScreen", "Quadro de Medalhas", nullptr));
        label_country->setText(QCoreApplication::translate("MedalAdmUpdateScreen", "Pais", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedalAdmUpdateScreen: public Ui_MedalAdmUpdateScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDALADMUPDATESCREEN_H
