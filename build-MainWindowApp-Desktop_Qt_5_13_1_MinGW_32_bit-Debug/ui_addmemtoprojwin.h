/********************************************************************************
** Form generated from reading UI file 'addmemtoprojwin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMTOPROJWIN_H
#define UI_ADDMEMTOPROJWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addmemtoprojwin
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *error;

    void setupUi(QDialog *addmemtoprojwin)
    {
        if (addmemtoprojwin->objectName().isEmpty())
            addmemtoprojwin->setObjectName(QString::fromUtf8("addmemtoprojwin"));
        addmemtoprojwin->resize(526, 289);
        lineEdit = new QLineEdit(addmemtoprojwin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(230, 80, 221, 41));
        QFont font;
        font.setPointSize(12);
        lineEdit->setFont(font);
        label = new QLabel(addmemtoprojwin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 80, 191, 41));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        pushButton = new QPushButton(addmemtoprojwin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 180, 161, 51));
        pushButton->setFont(font1);
        error = new QLabel(addmemtoprojwin);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(230, 130, 241, 20));
        error->setFont(font);

        retranslateUi(addmemtoprojwin);

        QMetaObject::connectSlotsByName(addmemtoprojwin);
    } // setupUi

    void retranslateUi(QDialog *addmemtoprojwin)
    {
        addmemtoprojwin->setWindowTitle(QCoreApplication::translate("addmemtoprojwin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addmemtoprojwin", "Member's Email :", nullptr));
        pushButton->setText(QCoreApplication::translate("addmemtoprojwin", "Done!", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addmemtoprojwin: public Ui_addmemtoprojwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMTOPROJWIN_H
