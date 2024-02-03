/********************************************************************************
** Form generated from reading UI file 'tasksetting.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSETTING_H
#define UI_TASKSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tasksetting
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *tasksetting)
    {
        if (tasksetting->objectName().isEmpty())
            tasksetting->setObjectName(QString::fromUtf8("tasksetting"));
        tasksetting->resize(498, 222);
        lineEdit = new QLineEdit(tasksetting);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 50, 231, 41));
        QFont font;
        font.setPointSize(12);
        lineEdit->setFont(font);
        label = new QLabel(tasksetting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 81, 41));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        pushButton = new QPushButton(tasksetting);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 150, 111, 31));
        pushButton->setFont(font);
        label_2 = new QLabel(tasksetting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(156, 100, 231, 20));
        label_2->setFont(font);

        retranslateUi(tasksetting);

        QMetaObject::connectSlotsByName(tasksetting);
    } // setupUi

    void retranslateUi(QDialog *tasksetting)
    {
        tasksetting->setWindowTitle(QCoreApplication::translate("tasksetting", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tasksetting", "Ttile :", nullptr));
        pushButton->setText(QCoreApplication::translate("tasksetting", "Done!", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tasksetting: public Ui_tasksetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKSETTING_H
