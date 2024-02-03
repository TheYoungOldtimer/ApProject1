/********************************************************************************
** Form generated from reading UI file 'teamedit.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMEDIT_H
#define UI_TEAMEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_teamedit
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *teamedit)
    {
        if (teamedit->objectName().isEmpty())
            teamedit->setObjectName(QString::fromUtf8("teamedit"));
        teamedit->resize(517, 314);
        label = new QLabel(teamedit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 100, 161, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        lineEdit = new QLineEdit(teamedit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 90, 241, 51));
        lineEdit->setFont(font);
        pushButton = new QPushButton(teamedit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(254, 230, 131, 51));
        pushButton->setFont(font);

        retranslateUi(teamedit);

        QMetaObject::connectSlotsByName(teamedit);
    } // setupUi

    void retranslateUi(QDialog *teamedit)
    {
        teamedit->setWindowTitle(QCoreApplication::translate("teamedit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teamedit", "New team name :", nullptr));
        pushButton->setText(QCoreApplication::translate("teamedit", "Done!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teamedit: public Ui_teamedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMEDIT_H
