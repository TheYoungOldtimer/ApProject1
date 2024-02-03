/********************************************************************************
** Form generated from reading UI file 'neworganwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWORGANWINDOW_H
#define UI_NEWORGANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_neworganwindow
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *neworganwindow)
    {
        if (neworganwindow->objectName().isEmpty())
            neworganwindow->setObjectName(QString::fromUtf8("neworganwindow"));
        neworganwindow->resize(441, 298);
        pushButton = new QPushButton(neworganwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(214, 212, 121, 41));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        lineEdit = new QLineEdit(neworganwindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 90, 181, 41));
        label = new QLabel(neworganwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(26, 100, 181, 20));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        retranslateUi(neworganwindow);

        QMetaObject::connectSlotsByName(neworganwindow);
    } // setupUi

    void retranslateUi(QDialog *neworganwindow)
    {
        neworganwindow->setWindowTitle(QCoreApplication::translate("neworganwindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("neworganwindow", "Done!", nullptr));
        label->setText(QCoreApplication::translate("neworganwindow", "New organization name :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class neworganwindow: public Ui_neworganwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWORGANWINDOW_H
