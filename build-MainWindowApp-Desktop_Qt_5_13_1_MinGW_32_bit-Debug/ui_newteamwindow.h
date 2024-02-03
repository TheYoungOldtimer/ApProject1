/********************************************************************************
** Form generated from reading UI file 'newteamwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTEAMWINDOW_H
#define UI_NEWTEAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newteamwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *teamname;

    void setupUi(QDialog *newteamwindow)
    {
        if (newteamwindow->objectName().isEmpty())
            newteamwindow->setObjectName(QString::fromUtf8("newteamwindow"));
        newteamwindow->resize(555, 335);
        label = new QLabel(newteamwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 110, 141, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(newteamwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 210, 151, 61));
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        teamname = new QLineEdit(newteamwindow);
        teamname->setObjectName(QString::fromUtf8("teamname"));
        teamname->setGeometry(QRect(240, 110, 231, 41));
        teamname->setFont(font);

        retranslateUi(newteamwindow);

        QMetaObject::connectSlotsByName(newteamwindow);
    } // setupUi

    void retranslateUi(QDialog *newteamwindow)
    {
        newteamwindow->setWindowTitle(QCoreApplication::translate("newteamwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("newteamwindow", "Team name : ", nullptr));
        pushButton->setText(QCoreApplication::translate("newteamwindow", "Done!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newteamwindow: public Ui_newteamwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTEAMWINDOW_H
