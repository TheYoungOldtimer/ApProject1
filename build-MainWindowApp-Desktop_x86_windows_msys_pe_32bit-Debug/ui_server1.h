/********************************************************************************
** Form generated from reading UI file 'server1.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER1_H
#define UI_SERVER1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Server1
{
public:
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *Server1)
    {
        if (Server1->objectName().isEmpty())
            Server1->setObjectName("Server1");
        Server1->resize(909, 642);
        textEdit = new QTextEdit(Server1);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(70, 80, 771, 491));
        label = new QLabel(Server1);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 61, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        retranslateUi(Server1);

        QMetaObject::connectSlotsByName(Server1);
    } // setupUi

    void retranslateUi(QDialog *Server1)
    {
        Server1->setWindowTitle(QCoreApplication::translate("Server1", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Server1", "Log :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server1: public Ui_Server1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER1_H
