#ifndef PROJECT_H
#define PROJECT_H

#include <QObject>
#include "member.h"
#include "task.h"
#include <QVector>
using namespace std;
class project
{
public:
    QString name = "";
    QString CEO = "";
    QString Manager = "";
    QString projecttask = "";
    project();
};

#endif // PROJECT_H
