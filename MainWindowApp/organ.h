#ifndef ORGAN_H
#define ORGAN_H

#include <QObject>
#include "member.h"
#include "task.h"
#include "project.h"
#include "team.h"
class organ
{
public:
    QString name;
    QString CEO;
    QString manager;
    Member *memberlist;
    int memberlistSize = 0;
    task *tasks;
    int tasksSize = 0;
    team *teams;
    int teamSize = 0;
    project *projects;
    int projectSize = 0;
    organ();
};

#endif // ORGAN_H
