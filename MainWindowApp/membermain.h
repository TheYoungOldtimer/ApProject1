#ifndef MEMBERMAIN_H
#define MEMBERMAIN_H

#include <QDialog>
#include "member.h"
namespace Ui {
class memberMain;
}

class memberMain : public QDialog
{
    Q_OBJECT
private:
    Member *thisMember;
public:

    //explicit memberMain(QWidget *parent = nullptr);
    memberMain(QWidget *parent,Member mem);
    ~memberMain();
public slots:
    void gridOrg_disable();

    void gridOrg_enable();

    void gridProject_disable();

    void gridProject_enable();

    void gridTeam_disable();

    void gridTeam_enable();

    void gridTask_enable();

    void gridTask_disable();

    void orgman_enable();
    void orgman_disable();
    void teamman_enable();
    void teamman_disable();
    void project_enable();
    void project_disable();
    void task_enable();
    void task_disable();

private:
    Ui::memberMain *ui;
};

#endif // MEMBERMAIN_H
