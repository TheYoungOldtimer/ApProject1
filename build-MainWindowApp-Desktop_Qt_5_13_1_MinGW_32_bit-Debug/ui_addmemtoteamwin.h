/********************************************************************************
** Form generated from reading UI file 'addmemtoteamwin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMTOTEAMWIN_H
#define UI_ADDMEMTOTEAMWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addmemToteamwin
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *error;

    void setupUi(QDialog *addmemToteamwin)
    {
        if (addmemToteamwin->objectName().isEmpty())
            addmemToteamwin->setObjectName(QString::fromUtf8("addmemToteamwin"));
        addmemToteamwin->resize(501, 355);
        pushButton = new QPushButton(addmemToteamwin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(264, 260, 151, 41));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        label = new QLabel(addmemToteamwin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 90, 151, 41));
        label->setFont(font);
        lineEdit = new QLineEdit(addmemToteamwin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 80, 221, 51));
        error = new QLabel(addmemToteamwin);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(216, 150, 241, 20));
        QFont font1;
        font1.setPointSize(12);
        error->setFont(font1);

        retranslateUi(addmemToteamwin);

        QMetaObject::connectSlotsByName(addmemToteamwin);
    } // setupUi

    void retranslateUi(QDialog *addmemToteamwin)
    {
        addmemToteamwin->setWindowTitle(QCoreApplication::translate("addmemToteamwin", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addmemToteamwin", "Done!", nullptr));
        label->setText(QCoreApplication::translate("addmemToteamwin", "Member's Email :", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addmemToteamwin: public Ui_addmemToteamwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMTOTEAMWIN_H
