/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_2;
    QLineEdit *emailEdit;
    QLabel *label_3;
    QLineEdit *passEdit;
    QPushButton *pushButton;
    QTextEdit *ted;
    QLabel *membernotFound;
    QLabel *wrongpass;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1029, 747);
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 120, 241, 61));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        emailEdit = new QLineEdit(Login);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setGeometry(QRect(490, 120, 411, 61));
        QFont font1;
        font1.setPointSize(18);
        emailEdit->setFont(font1);
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 210, 271, 61));
        label_3->setFont(font);
        passEdit = new QLineEdit(Login);
        passEdit->setObjectName("passEdit");
        passEdit->setGeometry(QRect(490, 210, 411, 61));
        passEdit->setFont(font1);
        pushButton = new QPushButton(Login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(560, 410, 251, 101));
        pushButton->setFont(font);
        ted = new QTextEdit(Login);
        ted->setObjectName("ted");
        ted->setGeometry(QRect(100, 370, 331, 281));
        membernotFound = new QLabel(Login);
        membernotFound->setObjectName("membernotFound");
        membernotFound->setGeometry(QRect(490, 185, 411, 21));
        QFont font2;
        font2.setPointSize(12);
        membernotFound->setFont(font2);
        wrongpass = new QLabel(Login);
        wrongpass->setObjectName("wrongpass");
        wrongpass->setGeometry(QRect(490, 280, 411, 21));
        wrongpass->setFont(font2);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Enter Your Email :", nullptr));
        emailEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("Login", "Enter Your password :", nullptr));
        passEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        membernotFound->setText(QString());
        wrongpass->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
