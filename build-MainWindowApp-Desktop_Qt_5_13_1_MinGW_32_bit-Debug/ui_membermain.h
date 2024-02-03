/********************************************************************************
** Form generated from reading UI file 'membermain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERMAIN_H
#define UI_MEMBERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberMain
{
public:
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *updatelists_3;
    QListWidget *listWidget_5;
    QLabel *label_5;
    QPushButton *addmemteam;
    QPushButton *delmemteam;
    QLabel *label_2;
    QListWidget *listWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *newteam;
    QPushButton *editteam;
    QPushButton *delteam;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_6;
    QPushButton *newproject;
    QPushButton *editptoject;
    QPushButton *delproject;
    QPushButton *changestatus;
    QLabel *label_3;
    QGridLayout *gridLayout_7;
    QPushButton *delmemproject;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QPushButton *updatelists_2;
    QPushButton *addmemproject;
    QListWidget *listWidget_7;
    QListWidget *listWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QGridLayout *gridLayout_5;
    QPushButton *addmemberorg;
    QVBoxLayout *verticalLayout;
    QPushButton *deletememorg;
    QPushButton *editrole;
    QListWidget *listWidget_6;
    QLabel *label_6;
    QPushButton *updatelists_4;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *neworg;
    QPushButton *editorg;
    QPushButton *deleteorg;
    QGridLayout *gridLayout_9;
    QListWidget *listWidget_3;
    QGridLayout *gridLayout_10;
    QListWidget *listWidget_8;
    QVBoxLayout *verticalLayout_4;
    QPushButton *asstoproj;
    QPushButton *asstoteam;
    QPushButton *asstomem;
    QPushButton *updatelists;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_7;
    QPushButton *newtask;
    QPushButton *edittask;
    QPushButton *archivetask;
    QLabel *label_8;
    QLabel *what;

    void setupUi(QDialog *memberMain)
    {
        if (memberMain->objectName().isEmpty())
            memberMain->setObjectName(QString::fromUtf8("memberMain"));
        memberMain->resize(1412, 783);
        gridLayoutWidget_7 = new QWidget(memberMain);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(50, 30, 1200, 671));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        updatelists_3 = new QPushButton(gridLayoutWidget_7);
        updatelists_3->setObjectName(QString::fromUtf8("updatelists_3"));

        gridLayout->addWidget(updatelists_3, 4, 0, 1, 1);

        listWidget_5 = new QListWidget(gridLayoutWidget_7);
        listWidget_5->setObjectName(QString::fromUtf8("listWidget_5"));

        gridLayout->addWidget(listWidget_5, 2, 1, 3, 1);

        label_5 = new QLabel(gridLayoutWidget_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        addmemteam = new QPushButton(gridLayoutWidget_7);
        addmemteam->setObjectName(QString::fromUtf8("addmemteam"));
        QFont font1;
        font1.setPointSize(12);
        addmemteam->setFont(font1);

        gridLayout->addWidget(addmemteam, 1, 0, 1, 1);

        delmemteam = new QPushButton(gridLayoutWidget_7);
        delmemteam->setObjectName(QString::fromUtf8("delmemteam"));
        delmemteam->setFont(font1);

        gridLayout->addWidget(delmemteam, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        listWidget_2 = new QListWidget(gridLayoutWidget_7);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setFont(font1);

        gridLayout_2->addWidget(listWidget_2, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        newteam = new QPushButton(gridLayoutWidget_7);
        newteam->setObjectName(QString::fromUtf8("newteam"));
        newteam->setFont(font1);

        verticalLayout_2->addWidget(newteam);

        editteam = new QPushButton(gridLayoutWidget_7);
        editteam->setObjectName(QString::fromUtf8("editteam"));
        editteam->setFont(font1);

        verticalLayout_2->addWidget(editteam);

        delteam = new QPushButton(gridLayoutWidget_7);
        delteam->setObjectName(QString::fromUtf8("delteam"));
        delteam->setFont(font1);

        verticalLayout_2->addWidget(delteam);


        gridLayout_2->addLayout(verticalLayout_2, 1, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 1, 1, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        newproject = new QPushButton(gridLayoutWidget_7);
        newproject->setObjectName(QString::fromUtf8("newproject"));
        newproject->setFont(font1);

        verticalLayout_6->addWidget(newproject);

        editptoject = new QPushButton(gridLayoutWidget_7);
        editptoject->setObjectName(QString::fromUtf8("editptoject"));
        editptoject->setFont(font1);

        verticalLayout_6->addWidget(editptoject);

        delproject = new QPushButton(gridLayoutWidget_7);
        delproject->setObjectName(QString::fromUtf8("delproject"));
        delproject->setFont(font1);

        verticalLayout_6->addWidget(delproject);

        changestatus = new QPushButton(gridLayoutWidget_7);
        changestatus->setObjectName(QString::fromUtf8("changestatus"));
        changestatus->setFont(font1);

        verticalLayout_6->addWidget(changestatus);


        gridLayout_6->addLayout(verticalLayout_6, 1, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_6->addWidget(label_3, 0, 2, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        delmemproject = new QPushButton(gridLayoutWidget_7);
        delmemproject->setObjectName(QString::fromUtf8("delmemproject"));
        delmemproject->setFont(font1);

        gridLayout_7->addWidget(delmemproject, 3, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        gridLayout_7->addLayout(verticalLayout_3, 0, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_7->addWidget(label_7, 0, 3, 1, 1);

        updatelists_2 = new QPushButton(gridLayoutWidget_7);
        updatelists_2->setObjectName(QString::fromUtf8("updatelists_2"));

        gridLayout_7->addWidget(updatelists_2, 7, 2, 1, 1);

        addmemproject = new QPushButton(gridLayoutWidget_7);
        addmemproject->setObjectName(QString::fromUtf8("addmemproject"));
        addmemproject->setFont(font1);

        gridLayout_7->addWidget(addmemproject, 2, 2, 1, 1);

        listWidget_7 = new QListWidget(gridLayoutWidget_7);
        listWidget_7->setObjectName(QString::fromUtf8("listWidget_7"));

        gridLayout_7->addWidget(listWidget_7, 2, 3, 6, 1);


        gridLayout_6->addLayout(gridLayout_7, 1, 1, 1, 1);

        listWidget_4 = new QListWidget(gridLayoutWidget_7);
        listWidget_4->setObjectName(QString::fromUtf8("listWidget_4"));

        gridLayout_6->addWidget(listWidget_4, 1, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 0, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(gridLayoutWidget_7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        addmemberorg = new QPushButton(gridLayoutWidget_7);
        addmemberorg->setObjectName(QString::fromUtf8("addmemberorg"));
        addmemberorg->setFont(font1);

        gridLayout_5->addWidget(addmemberorg, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        deletememorg = new QPushButton(gridLayoutWidget_7);
        deletememorg->setObjectName(QString::fromUtf8("deletememorg"));
        deletememorg->setFont(font1);

        verticalLayout->addWidget(deletememorg);

        editrole = new QPushButton(gridLayoutWidget_7);
        editrole->setObjectName(QString::fromUtf8("editrole"));
        editrole->setFont(font1);

        verticalLayout->addWidget(editrole);


        gridLayout_5->addLayout(verticalLayout, 1, 0, 1, 1);

        listWidget_6 = new QListWidget(gridLayoutWidget_7);
        listWidget_6->setObjectName(QString::fromUtf8("listWidget_6"));

        gridLayout_5->addWidget(listWidget_6, 1, 1, 3, 1);

        label_6 = new QLabel(gridLayoutWidget_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_5->addWidget(label_6, 0, 1, 1, 1);

        updatelists_4 = new QPushButton(gridLayoutWidget_7);
        updatelists_4->setObjectName(QString::fromUtf8("updatelists_4"));

        gridLayout_5->addWidget(updatelists_4, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 1, 0, 1, 1);

        listWidget = new QListWidget(gridLayoutWidget_7);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_4->addWidget(listWidget, 1, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        neworg = new QPushButton(gridLayoutWidget_7);
        neworg->setObjectName(QString::fromUtf8("neworg"));
        neworg->setFont(font1);

        verticalLayout_5->addWidget(neworg);

        editorg = new QPushButton(gridLayoutWidget_7);
        editorg->setObjectName(QString::fromUtf8("editorg"));
        editorg->setFont(font1);

        verticalLayout_5->addWidget(editorg);

        deleteorg = new QPushButton(gridLayoutWidget_7);
        deleteorg->setObjectName(QString::fromUtf8("deleteorg"));
        deleteorg->setFont(font1);

        verticalLayout_5->addWidget(deleteorg);


        gridLayout_4->addLayout(verticalLayout_5, 1, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        listWidget_3 = new QListWidget(gridLayoutWidget_7);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));

        gridLayout_9->addWidget(listWidget_3, 1, 1, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        listWidget_8 = new QListWidget(gridLayoutWidget_7);
        listWidget_8->setObjectName(QString::fromUtf8("listWidget_8"));

        gridLayout_10->addWidget(listWidget_8, 1, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        asstoproj = new QPushButton(gridLayoutWidget_7);
        asstoproj->setObjectName(QString::fromUtf8("asstoproj"));
        asstoproj->setFont(font1);

        verticalLayout_4->addWidget(asstoproj);

        asstoteam = new QPushButton(gridLayoutWidget_7);
        asstoteam->setObjectName(QString::fromUtf8("asstoteam"));
        asstoteam->setFont(font1);

        verticalLayout_4->addWidget(asstoteam);

        asstomem = new QPushButton(gridLayoutWidget_7);
        asstomem->setObjectName(QString::fromUtf8("asstomem"));
        asstomem->setFont(font1);

        verticalLayout_4->addWidget(asstomem);

        updatelists = new QPushButton(gridLayoutWidget_7);
        updatelists->setObjectName(QString::fromUtf8("updatelists"));

        verticalLayout_4->addWidget(updatelists);


        gridLayout_10->addLayout(verticalLayout_4, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_10, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_9->addWidget(label_4, 0, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        newtask = new QPushButton(gridLayoutWidget_7);
        newtask->setObjectName(QString::fromUtf8("newtask"));
        newtask->setFont(font1);

        verticalLayout_7->addWidget(newtask);

        edittask = new QPushButton(gridLayoutWidget_7);
        edittask->setObjectName(QString::fromUtf8("edittask"));
        edittask->setFont(font1);

        verticalLayout_7->addWidget(edittask);

        archivetask = new QPushButton(gridLayoutWidget_7);
        archivetask->setObjectName(QString::fromUtf8("archivetask"));
        archivetask->setFont(font1);

        verticalLayout_7->addWidget(archivetask);


        gridLayout_9->addLayout(verticalLayout_7, 1, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_9->addWidget(label_8, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_9, 1, 0, 1, 1);

        what = new QLabel(memberMain);
        what->setObjectName(QString::fromUtf8("what"));
        what->setGeometry(QRect(160, 730, 231, 41));

        retranslateUi(memberMain);

        QMetaObject::connectSlotsByName(memberMain);
    } // setupUi

    void retranslateUi(QDialog *memberMain)
    {
        memberMain->setWindowTitle(QCoreApplication::translate("memberMain", "Dialog", nullptr));
        updatelists_3->setText(QCoreApplication::translate("memberMain", "Update Lists", nullptr));
        label_5->setText(QCoreApplication::translate("memberMain", "Members:", nullptr));
        addmemteam->setText(QCoreApplication::translate("memberMain", "Add member ", nullptr));
        delmemteam->setText(QCoreApplication::translate("memberMain", "Delete member", nullptr));
        label_2->setText(QCoreApplication::translate("memberMain", "Team Management", nullptr));
        newteam->setText(QCoreApplication::translate("memberMain", "New team", nullptr));
        editteam->setText(QCoreApplication::translate("memberMain", "Edit Team", nullptr));
        delteam->setText(QCoreApplication::translate("memberMain", "Delete team", nullptr));
        newproject->setText(QCoreApplication::translate("memberMain", "New Project", nullptr));
        editptoject->setText(QCoreApplication::translate("memberMain", "Edit Project", nullptr));
        delproject->setText(QCoreApplication::translate("memberMain", "Delete Project", nullptr));
        changestatus->setText(QCoreApplication::translate("memberMain", "Change status", nullptr));
        label_3->setText(QCoreApplication::translate("memberMain", "Project Management :", nullptr));
        delmemproject->setText(QCoreApplication::translate("memberMain", "Delete member", nullptr));
        label_7->setText(QCoreApplication::translate("memberMain", "Members:", nullptr));
        updatelists_2->setText(QCoreApplication::translate("memberMain", "Update Lists", nullptr));
        addmemproject->setText(QCoreApplication::translate("memberMain", "Add member ", nullptr));
        label->setText(QCoreApplication::translate("memberMain", "Organization Management :", nullptr));
        addmemberorg->setText(QCoreApplication::translate("memberMain", "Add member ", nullptr));
        deletememorg->setText(QCoreApplication::translate("memberMain", "Delete member", nullptr));
        editrole->setText(QCoreApplication::translate("memberMain", "Edit member's role", nullptr));
        label_6->setText(QCoreApplication::translate("memberMain", "Members:", nullptr));
        updatelists_4->setText(QCoreApplication::translate("memberMain", "Update Lists", nullptr));
        neworg->setText(QCoreApplication::translate("memberMain", "New Organization", nullptr));
        editorg->setText(QCoreApplication::translate("memberMain", "Edit Organization", nullptr));
        deleteorg->setText(QCoreApplication::translate("memberMain", "Delete Organization", nullptr));
        asstoproj->setText(QCoreApplication::translate("memberMain", "Assign a task to a project", nullptr));
        asstoteam->setText(QCoreApplication::translate("memberMain", "Assign a task to a team", nullptr));
        asstomem->setText(QCoreApplication::translate("memberMain", "Assign a task to a member", nullptr));
        updatelists->setText(QCoreApplication::translate("memberMain", "Update Lists", nullptr));
        label_4->setText(QCoreApplication::translate("memberMain", "Task Management :", nullptr));
        newtask->setText(QCoreApplication::translate("memberMain", "New task", nullptr));
        edittask->setText(QCoreApplication::translate("memberMain", "Edit task", nullptr));
        archivetask->setText(QCoreApplication::translate("memberMain", "Archive task", nullptr));
        label_8->setText(QCoreApplication::translate("memberMain", "Members and Teams and Projects :", nullptr));
        what->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memberMain: public Ui_memberMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERMAIN_H
