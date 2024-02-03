/********************************************************************************
** Form generated from reading UI file 'mainwindowapp.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWAPP_H
#define UI_MAINWINDOWAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowApp
{
public:
    QWidget *centralwidget;
    QPushButton *signupmember;
    QPushButton *Loginmember;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowApp)
    {
        if (MainWindowApp->objectName().isEmpty())
            MainWindowApp->setObjectName(QString::fromUtf8("MainWindowApp"));
        MainWindowApp->resize(1264, 791);
        MainWindowApp->setDocumentMode(false);
        centralwidget = new QWidget(MainWindowApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        signupmember = new QPushButton(centralwidget);
        signupmember->setObjectName(QString::fromUtf8("signupmember"));
        signupmember->setGeometry(QRect(660, 440, 511, 191));
        QFont font;
        font.setPointSize(22);
        signupmember->setFont(font);
        Loginmember = new QPushButton(centralwidget);
        Loginmember->setObjectName(QString::fromUtf8("Loginmember"));
        Loginmember->setGeometry(QRect(110, 440, 511, 191));
        Loginmember->setFont(font);
        MainWindowApp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowApp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1264, 23));
        MainWindowApp->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowApp->setStatusBar(statusbar);

        retranslateUi(MainWindowApp);

        QMetaObject::connectSlotsByName(MainWindowApp);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowApp)
    {
        MainWindowApp->setWindowTitle(QCoreApplication::translate("MainWindowApp", "MainWindowApp", nullptr));
        signupmember->setText(QCoreApplication::translate("MainWindowApp", "Signup", nullptr));
        Loginmember->setText(QCoreApplication::translate("MainWindowApp", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowApp: public Ui_MainWindowApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWAPP_H
