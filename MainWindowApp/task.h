#ifndef TASK_H
#define TASK_H

#include <QObject>

class task
{
public:
    QString title="";
    QString CEO ="";
    QString manager="";
    bool tomember = true;
    bool toteam = false;
    bool toproject = false;
    bool toorgan = false;
    QString MamberEmail="";
    QString TeamName="";
    QString ProjectName="";
    QString OrganName="";
    bool isArchived = false;
    task();

public slots:

};

#endif // TASK_H
