#ifndef TEAM_H
#define TEAM_H

#include <QObject>
#include "member.h"
#include "task.h"
#include "project.h"
#include <QVector>
using namespace std;
class team
{
public:
    QString name = "";
    QString CEO = "";
    QString Manager = "";
    QString taskname = "";
    QString projectname = "";
    team();
};

#endif // TEAM_H
