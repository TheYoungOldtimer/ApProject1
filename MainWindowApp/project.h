#ifndef PROJECT_H
#define PROJECT_H

#include <QObject>
#include "member.h"
#include "task.h"
class project
{
public:
    QString CEO;
    QString Manager;
    Member *memberlist;
    int memberlistSize = 0;
    task *tasks;
    int taskSize = 0;
    project();
};

#endif // PROJECT_H
