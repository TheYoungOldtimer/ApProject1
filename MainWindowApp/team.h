#ifndef TEAM_H
#define TEAM_H

#include <QObject>
#include "member.h"
#include "task.h"
#include "project.h"
class team
{
public:
    QString CEO;
    QString Manager;
    Member *memberlist;
    int memberlistSize = 0;
    QString taskname;
    task tasks;
    QString projectname;
    project teamProject;
    team();
};

#endif // TEAM_H
