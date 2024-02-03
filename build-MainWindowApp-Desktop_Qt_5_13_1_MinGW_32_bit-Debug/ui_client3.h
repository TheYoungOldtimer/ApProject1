/********************************************************************************
** Form generated from reading UI file 'client3.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT3_H
#define UI_CLIENT3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_client3
{
public:
    QLineEdit *emailEdit;
    QLabel *label_4;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *passEdit;
    QTextEdit *ted;
    QLineEdit *passRepeat;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *passnotMatch;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *memberExist;
    QLabel *timeout;

    void setupUi(QDialog *client3)
    {
        if (client3->objectName().isEmpty())
            client3->setObjectName(QString::fromUtf8("client3"));
        client3->resize(1012, 706);
        emailEdit = new QLineEdit(client3);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));
        emailEdit->setGeometry(QRect(460, 50, 411, 61));
        QFont font;
        font.setPointSize(18);
        emailEdit->setFont(font);
        label_4 = new QLabel(client3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 320, 301, 61));
        QFont font1;
        font1.setPointSize(20);
        label_4->setFont(font1);
        nameEdit = new QLineEdit(client3);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(460, 150, 411, 61));
        nameEdit->setFont(font);
        label_3 = new QLabel(client3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 230, 271, 61));
        label_3->setFont(font1);
        passEdit = new QLineEdit(client3);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setGeometry(QRect(460, 240, 411, 61));
        passEdit->setFont(font);
        ted = new QTextEdit(client3);
        ted->setObjectName(QString::fromUtf8("ted"));
        ted->setGeometry(QRect(-330, 690, 341, 201));
        passRepeat = new QLineEdit(client3);
        passRepeat->setObjectName(QString::fromUtf8("passRepeat"));
        passRepeat->setGeometry(QRect(460, 320, 411, 61));
        passRepeat->setFont(font);
        pushButton_2 = new QPushButton(client3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 470, 211, 121));
        QFont font2;
        font2.setPointSize(16);
        pushButton_2->setFont(font2);
        label = new QLabel(client3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 140, 241, 61));
        label->setFont(font1);
        label_2 = new QLabel(client3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 241, 61));
        label_2->setFont(font1);
        passnotMatch = new QLabel(client3);
        passnotMatch->setObjectName(QString::fromUtf8("passnotMatch"));
        passnotMatch->setGeometry(QRect(460, 400, 321, 31));
        QFont font3;
        font3.setPointSize(12);
        passnotMatch->setFont(font3);
        checkBox = new QCheckBox(client3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(820, 450, 131, 31));
        checkBox_2 = new QCheckBox(client3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(820, 480, 131, 31));
        checkBox_3 = new QCheckBox(client3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(820, 510, 181, 31));
        memberExist = new QLabel(client3);
        memberExist->setObjectName(QString::fromUtf8("memberExist"));
        memberExist->setGeometry(QRect(460, 110, 411, 31));
        memberExist->setFont(font3);
        timeout = new QLabel(client3);
        timeout->setObjectName(QString::fromUtf8("timeout"));
        timeout->setGeometry(QRect(530, 600, 311, 61));
        timeout->setFont(font3);
        emailEdit->raise();
        label_4->raise();
        nameEdit->raise();
        label_3->raise();
        passEdit->raise();
        ted->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        passnotMatch->raise();
        checkBox->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        memberExist->raise();
        passRepeat->raise();
        timeout->raise();

        retranslateUi(client3);

        QMetaObject::connectSlotsByName(client3);
    } // setupUi

    void retranslateUi(QDialog *client3)
    {
        client3->setWindowTitle(QCoreApplication::translate("client3", "Dialog", nullptr));
        emailEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("client3", "reapeat tour password :", nullptr));
        nameEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("client3", "Enter Your password :", nullptr));
        passEdit->setText(QString());
        passRepeat->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("client3", "Join", nullptr));
        label->setText(QCoreApplication::translate("client3", "Enter Your name :", nullptr));
        label_2->setText(QCoreApplication::translate("client3", "Enter Your Email :", nullptr));
        passnotMatch->setText(QString());
        checkBox->setText(QCoreApplication::translate("client3", "SignUp as CEO", nullptr));
        checkBox_2->setText(QCoreApplication::translate("client3", "SignUp as Manager", nullptr));
        checkBox_3->setText(QCoreApplication::translate("client3", "Agree with terms and conditions?", nullptr));
        memberExist->setText(QString());
        timeout->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class client3: public Ui_client3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT3_H
