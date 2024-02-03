/********************************************************************************
** Form generated from reading UI file 'projectedit.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTEDIT_H
#define UI_PROJECTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_projectedit
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *projectedit)
    {
        if (projectedit->objectName().isEmpty())
            projectedit->setObjectName(QString::fromUtf8("projectedit"));
        projectedit->resize(552, 421);
        lineEdit = new QLineEdit(projectedit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 110, 231, 51));
        QFont font;
        font.setPointSize(14);
        lineEdit->setFont(font);
        label = new QLabel(projectedit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(36, 102, 131, 51));
        label->setFont(font);
        pushButton = new QPushButton(projectedit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 290, 171, 71));
        pushButton->setFont(font);

        retranslateUi(projectedit);

        QMetaObject::connectSlotsByName(projectedit);
    } // setupUi

    void retranslateUi(QDialog *projectedit)
    {
        projectedit->setWindowTitle(QCoreApplication::translate("projectedit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("projectedit", "New name :", nullptr));
        pushButton->setText(QCoreApplication::translate("projectedit", "Done!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class projectedit: public Ui_projectedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTEDIT_H
