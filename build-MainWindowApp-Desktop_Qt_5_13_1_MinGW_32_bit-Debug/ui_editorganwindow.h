/********************************************************************************
** Form generated from reading UI file 'editorganwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORGANWINDOW_H
#define UI_EDITORGANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editorganwindow
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *editorganwindow)
    {
        if (editorganwindow->objectName().isEmpty())
            editorganwindow->setObjectName(QString::fromUtf8("editorganwindow"));
        editorganwindow->resize(512, 302);
        lineEdit = new QLineEdit(editorganwindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(250, 70, 221, 51));
        QFont font;
        font.setPointSize(14);
        lineEdit->setFont(font);
        label = new QLabel(editorganwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 70, 191, 51));
        label->setFont(font);
        pushButton = new QPushButton(editorganwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 180, 151, 61));
        pushButton->setFont(font);

        retranslateUi(editorganwindow);

        QMetaObject::connectSlotsByName(editorganwindow);
    } // setupUi

    void retranslateUi(QDialog *editorganwindow)
    {
        editorganwindow->setWindowTitle(QCoreApplication::translate("editorganwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("editorganwindow", "New name for organ :", nullptr));
        pushButton->setText(QCoreApplication::translate("editorganwindow", "Done!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editorganwindow: public Ui_editorganwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORGANWINDOW_H
