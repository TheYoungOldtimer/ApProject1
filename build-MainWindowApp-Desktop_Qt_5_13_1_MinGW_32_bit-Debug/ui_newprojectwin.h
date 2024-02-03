/********************************************************************************
** Form generated from reading UI file 'newprojectwin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTWIN_H
#define UI_NEWPROJECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newprojectwin
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *newprojectname;

    void setupUi(QDialog *newprojectwin)
    {
        if (newprojectwin->objectName().isEmpty())
            newprojectwin->setObjectName(QString::fromUtf8("newprojectwin"));
        newprojectwin->resize(564, 321);
        label = new QLabel(newprojectwin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 141, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(newprojectwin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 200, 161, 71));
        pushButton->setFont(font);
        newprojectname = new QLineEdit(newprojectwin);
        newprojectname->setObjectName(QString::fromUtf8("newprojectname"));
        newprojectname->setGeometry(QRect(232, 50, 291, 61));

        retranslateUi(newprojectwin);

        QMetaObject::connectSlotsByName(newprojectwin);
    } // setupUi

    void retranslateUi(QDialog *newprojectwin)
    {
        newprojectwin->setWindowTitle(QCoreApplication::translate("newprojectwin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("newprojectwin", "Project name :", nullptr));
        pushButton->setText(QCoreApplication::translate("newprojectwin", "Done!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newprojectwin: public Ui_newprojectwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTWIN_H
