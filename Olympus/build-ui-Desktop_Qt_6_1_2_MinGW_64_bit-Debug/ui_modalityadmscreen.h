/********************************************************************************
** Form generated from reading UI file 'modalityadmscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODALITYADMSCREEN_H
#define UI_MODALITYADMSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModalityAdmScreen
{
public:
    QGridLayout *gridLayout;
    QPushButton *btn_add_modality;
    QPushButton *btn_remove_modality;
    QPushButton *btn_edit_modality;
    QLineEdit *lineEdit_modality;
    QListWidget *listWidget;
    QLineEdit *lineEdit_editModality;

    void setupUi(QDialog *ModalityAdmScreen)
    {
        if (ModalityAdmScreen->objectName().isEmpty())
            ModalityAdmScreen->setObjectName(QString::fromUtf8("ModalityAdmScreen"));
        ModalityAdmScreen->resize(400, 300);
        gridLayout = new QGridLayout(ModalityAdmScreen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_add_modality = new QPushButton(ModalityAdmScreen);
        btn_add_modality->setObjectName(QString::fromUtf8("btn_add_modality"));

        gridLayout->addWidget(btn_add_modality, 0, 0, 1, 1);

        btn_remove_modality = new QPushButton(ModalityAdmScreen);
        btn_remove_modality->setObjectName(QString::fromUtf8("btn_remove_modality"));

        gridLayout->addWidget(btn_remove_modality, 1, 0, 1, 1);

        btn_edit_modality = new QPushButton(ModalityAdmScreen);
        btn_edit_modality->setObjectName(QString::fromUtf8("btn_edit_modality"));

        gridLayout->addWidget(btn_edit_modality, 2, 0, 1, 1);

        lineEdit_modality = new QLineEdit(ModalityAdmScreen);
        lineEdit_modality->setObjectName(QString::fromUtf8("lineEdit_modality"));

        gridLayout->addWidget(lineEdit_modality, 0, 1, 1, 1);

        listWidget = new QListWidget(ModalityAdmScreen);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(8);
        listWidget->setFont(font);

        gridLayout->addWidget(listWidget, 3, 1, 1, 1);

        lineEdit_editModality = new QLineEdit(ModalityAdmScreen);
        lineEdit_editModality->setObjectName(QString::fromUtf8("lineEdit_editModality"));

        gridLayout->addWidget(lineEdit_editModality, 2, 1, 1, 1);


        retranslateUi(ModalityAdmScreen);

        QMetaObject::connectSlotsByName(ModalityAdmScreen);
    } // setupUi

    void retranslateUi(QDialog *ModalityAdmScreen)
    {
        ModalityAdmScreen->setWindowTitle(QCoreApplication::translate("ModalityAdmScreen", "Dialog", nullptr));
        btn_add_modality->setText(QCoreApplication::translate("ModalityAdmScreen", "Adicionar Modalidade", nullptr));
        btn_remove_modality->setText(QCoreApplication::translate("ModalityAdmScreen", "Remover Modalidade", nullptr));
        btn_edit_modality->setText(QCoreApplication::translate("ModalityAdmScreen", "Editar Modalidade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModalityAdmScreen: public Ui_ModalityAdmScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODALITYADMSCREEN_H
