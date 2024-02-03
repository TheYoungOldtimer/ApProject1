#ifndef TASK_H
#define TASK_H

#include <QObject>

class task
{
public:
    QString CEO;
    QString manager;
    bool tomember = true;
    bool toteam = false;
    bool toproject = false;
    bool toorgan = false;
    QString MamberEmail;
    QString TeamName;
    QString ProjectName;
    QString OrganName;
    task();
};

#endif // TASK_H
