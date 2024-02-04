#ifndef PROJECT_H
#define PROJECT_H

#include <QObject>
#include "member.h"
#include "task.h"
<<<<<<< HEAD
#include <QVector>
using namespace std;
class project
{
public:
    QString name = "";
    QString CEO = "";
    QString Manager = "";
    QString projecttask = "";
=======
class project
{
public:
    QString CEO;
    QString Manager;
    Member *memberlist;
    int memberlistSize = 0;
    task *tasks;
    int taskSize = 0;
>>>>>>> c7d6aa8ca82e18d56916d17ec8d22f7de422ef7d
    project();
};

#endif // PROJECT_H
