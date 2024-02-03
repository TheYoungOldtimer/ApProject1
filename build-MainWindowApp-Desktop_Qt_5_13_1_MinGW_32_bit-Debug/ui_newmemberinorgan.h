/********************************************************************************
** Form generated from reading UI file 'newmemberinorgan.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMEMBERINORGAN_H
#define UI_NEWMEMBERINORGAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newmemberinOrgan
{
public:
    QLabel *label;
    QLabel *error;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *newmemberinOrgan)
    {
        if (newmemberinOrgan->objectName().isEmpty())
            newmemberinOrgan->setObjectName(QString::fromUtf8("newmemberinOrgan"));
        newmemberinOrgan->resize(471, 243);
        label = new QLabel(newmemberinOrgan);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 80, 151, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        error = new QLabel(newmemberinOrgan);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(186, 140, 241, 20));
        QFont font1;
        font1.setPointSize(12);
        error->setFont(font1);
        pushButton = new QPushButton(newmemberinOrgan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 180, 151, 41));
        pushButton->setFont(font);
        lineEdit = new QLineEdit(newmemberinOrgan);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 70, 221, 51));

        retranslateUi(newmemberinOrgan);

        QMetaObject::connectSlotsByName(newmemberinOrgan);
    } // setupUi

    void retranslateUi(QDialog *newmemberinOrgan)
    {
        newmemberinOrgan->setWindowTitle(QCoreApplication::translate("newmemberinOrgan", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("newmemberinOrgan", "Member's Email :", nullptr));
        error->setText(QString());
        pushButton->setText(QCoreApplication::translate("newmemberinOrgan", "Done!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newmemberinOrgan: public Ui_newmemberinOrgan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMEMBERINORGAN_H
