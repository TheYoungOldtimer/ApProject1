/********************************************************************************
** Form generated from reading UI file 'memberrolewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERROLEWINDOW_H
#define UI_MEMBERROLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_memberrolewindow
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *error;

    void setupUi(QDialog *memberrolewindow)
    {
        if (memberrolewindow->objectName().isEmpty())
            memberrolewindow->setObjectName(QString::fromUtf8("memberrolewindow"));
        memberrolewindow->resize(494, 347);
        label = new QLabel(memberrolewindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 80, 131, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        lineEdit = new QLineEdit(memberrolewindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(230, 80, 181, 41));
        lineEdit->setFont(font);
        pushButton = new QPushButton(memberrolewindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 190, 161, 61));
        pushButton->setFont(font);
        error = new QLabel(memberrolewindow);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(190, 130, 241, 31));
        QFont font1;
        font1.setPointSize(12);
        error->setFont(font1);

        retranslateUi(memberrolewindow);

        QMetaObject::connectSlotsByName(memberrolewindow);
    } // setupUi

    void retranslateUi(QDialog *memberrolewindow)
    {
        memberrolewindow->setWindowTitle(QCoreApplication::translate("memberrolewindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("memberrolewindow", "New role :", nullptr));
        pushButton->setText(QCoreApplication::translate("memberrolewindow", "Done!", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memberrolewindow: public Ui_memberrolewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERROLEWINDOW_H
