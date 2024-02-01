/********************************************************************************
** Form generated from reading UI file 'client3.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT3_H
#define UI_CLIENT3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client3
{
public:
    QLineEdit *emailEdit;
    QLineEdit *nameEdit;
    QLineEdit *passEdit;
    QTextEdit *ted;
    QLineEdit *passRepeat;
    QPushButton *pushButton_2;
    QLabel *memberExist;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;

    void setupUi(QDialog *client3)
    {
        if (client3->objectName().isEmpty())
            client3->setObjectName("client3");
        client3->resize(1012, 706);
        emailEdit = new QLineEdit(client3);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setGeometry(QRect(460, 60, 411, 61));
        QFont font;
        font.setPointSize(18);
        emailEdit->setFont(font);
        emailEdit->setLayoutDirection(Qt::LeftToRight);
        nameEdit = new QLineEdit(client3);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(460, 140, 411, 61));
        nameEdit->setFont(font);
        nameEdit->setLayoutDirection(Qt::LeftToRight);
        passEdit = new QLineEdit(client3);
        passEdit->setObjectName("passEdit");
        passEdit->setGeometry(QRect(460, 230, 411, 61));
        passEdit->setFont(font);
        passEdit->setLayoutDirection(Qt::LeftToRight);
        ted = new QTextEdit(client3);
        ted->setObjectName("ted");
        ted->setGeometry(QRect(-330, 690, 341, 201));
        passRepeat = new QLineEdit(client3);
        passRepeat->setObjectName("passRepeat");
        passRepeat->setGeometry(QRect(460, 310, 411, 61));
        passRepeat->setFont(font);
        passRepeat->setLayoutDirection(Qt::LeftToRight);
        pushButton_2 = new QPushButton(client3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 430, 141, 71));
        QFont font1;
        font1.setPointSize(16);
        pushButton_2->setFont(font1);
        memberExist = new QLabel(client3);
        memberExist->setObjectName("memberExist");
        memberExist->setGeometry(QRect(460, 110, 411, 31));
        QFont font2;
        font2.setPointSize(12);
        memberExist->setFont(font2);
        memberExist->setLayoutDirection(Qt::LeftToRight);
        widget = new QWidget(client3);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 50, 275, 331));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font3;
        font3.setPointSize(20);
        label_2->setFont(font3);
        label_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font3);
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font3);
        label_3->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);
        label_4->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        widget1 = new QWidget(client3);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(460, 420, 259, 95));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName("checkBox");
        checkBox->setFont(font2);

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setFont(font2);

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget1);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setFont(font2);

        verticalLayout->addWidget(checkBox_3);

        emailEdit->raise();
        label_4->raise();
        nameEdit->raise();
        label_3->raise();
        passEdit->raise();
        ted->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        checkBox->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        memberExist->raise();
        passRepeat->raise();

        retranslateUi(client3);

        QMetaObject::connectSlotsByName(client3);
    } // setupUi

    void retranslateUi(QDialog *client3)
    {
        client3->setWindowTitle(QCoreApplication::translate("client3", "Dialog", nullptr));
        emailEdit->setText(QString());
        nameEdit->setText(QString());
        passEdit->setText(QString());
        passRepeat->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("client3", "Join", nullptr));
        memberExist->setText(QString());
        label_2->setText(QCoreApplication::translate("client3", "Enter Your Email :", nullptr));
        label->setText(QCoreApplication::translate("client3", "Enter Your Name :", nullptr));
        label_3->setText(QCoreApplication::translate("client3", "Enter Your Password :", nullptr));
        label_4->setText(QCoreApplication::translate("client3", "Repeat Your Password :", nullptr));
        checkBox->setText(QCoreApplication::translate("client3", "SignUp as CEO", nullptr));
        checkBox_2->setText(QCoreApplication::translate("client3", "SignUp as Manager", nullptr));
        checkBox_3->setText(QCoreApplication::translate("client3", "Agree with terms and conditions?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class client3: public Ui_client3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT3_H
