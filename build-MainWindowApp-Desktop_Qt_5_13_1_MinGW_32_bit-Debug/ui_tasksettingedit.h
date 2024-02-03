/********************************************************************************
** Form generated from reading UI file 'tasksettingedit.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSETTINGEDIT_H
#define UI_TASKSETTINGEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tasksettingedit
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *tasksettingedit)
    {
        if (tasksettingedit->objectName().isEmpty())
            tasksettingedit->setObjectName(QString::fromUtf8("tasksettingedit"));
        tasksettingedit->resize(464, 227);
        pushButton = new QPushButton(tasksettingedit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 150, 111, 31));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        lineEdit = new QLineEdit(tasksettingedit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 50, 231, 41));
        lineEdit->setFont(font);
        label_2 = new QLabel(tasksettingedit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(136, 100, 231, 20));
        label_2->setFont(font);
        label = new QLabel(tasksettingedit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 81, 41));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        retranslateUi(tasksettingedit);

        QMetaObject::connectSlotsByName(tasksettingedit);
    } // setupUi

    void retranslateUi(QDialog *tasksettingedit)
    {
        tasksettingedit->setWindowTitle(QCoreApplication::translate("tasksettingedit", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("tasksettingedit", "Done!", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("tasksettingedit", "Ttile :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tasksettingedit: public Ui_tasksettingedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKSETTINGEDIT_H
