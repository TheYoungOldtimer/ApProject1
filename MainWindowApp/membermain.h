#ifndef MEMBERMAIN_H
#define MEMBERMAIN_H

#include <QDialog>
#include "member.h"
#include "tasksetting.h"
#include "tasksettingedit.h"
#include "QListWidget"
#include "QListWidgetItem"
#include <QVector>
#include <QJsonObject>
#include "team.h"
#include "newteamwindow.h"
#include "project.h"
#include "newprojectwin.h"
#include "teamedit.h"
#include "organ.h"
#include "neworganwindow.h"
#include "editorganwindow.h"
#include "addmemtoprojwin.h"
#include "memberrolewindow.h"
#include "newmemberinorgan.h"
using namespace std;
namespace Ui {
class memberMain;
}

class memberMain : public QDialog
{
    Q_OBJECT
private:
    Member thisMember;
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

    //void addItem(QListWidget &listwidget, QListWidgetItem &item);

    void updatelisttasks(QString path);
private slots:
    void on_newtask_clicked();

    void on_edittask_clicked();

    void on_listWidget_3_itemClicked(QListWidgetItem *item);

    void on_updatelists_clicked();

    void findlisttasks(QString,QString);

    void deleteFromlisttasks(QString s, QString path);

    void on_archivetask_clicked();

    void append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path);

    void on_newteam_clicked();

    void on_newproject_clicked();

    void on_updatelists_2_clicked();

    void updatelistprojects(QString path);

    void on_editptoject_clicked();

    void on_listWidget_4_itemClicked(QListWidgetItem *item);

    void findlistproject(QString s, QString path);

    void deleteFromProjectlist(QString s, QString path);

    void on_delproject_clicked();

    void on_updatelists_3_clicked();

    void updatelistteams(QString path);

    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    void on_editteam_clicked();

    void findlistteam(QString s, QString path);

    void deleteFromTeamtlist(QString s, QString path);

    void on_delteam_clicked();

    void on_neworg_clicked();

    void on_updatelists_4_clicked();

    void updatelistOrgans(QString path);

    void on_editorg_clicked();

    void findlistOrgan(QString s, QString path);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void deleteFromorganlist(QString s, QString path);

    void on_deleteorg_clicked();

    void updatetaskMemberlist();

    void updatetaskTeamlist();

    void updatetaskprojectlist();

    void on_listWidget_8_itemClicked(QListWidgetItem *item);

    void on_asstoproj_clicked();

    void findmember(QString email,QString task);
    void deletemember(QString email);
    void readdmember(QJsonObject obj);

    void findproject(QString name, QString task);
    void deleteproject(QString name);
    void readdproject(QJsonObject obj);

    void findteam(QString name, QString task);
    void deleteteam(QString name);
    void readdteam(QJsonObject obj);

    void findtaskformember(QString title, QString email);
    void deletetaskformember(QString title);
    void readdtaskformember(QJsonObject obj);


    void findtaskforproject(QString title, QString email);

    void findtaskforteam(QString title, QString projectname);

    void deletetaskforproject(QString title);
    void readdtaskforproject(QJsonObject obj);
    
    void membersOfthisteam(QString teamname);

    void on_asstoteam_clicked();

    void on_asstomem_clicked();

    void on_listWidget_5_itemClicked(QListWidgetItem *item);

    void on_delmemteam_clicked();

    void findmeminteams(QString memname);
    void delmeminteams(QString memname);
    void addmeminteams(QJsonObject newmember);

    void on_addmemteam_clicked();

    void on_listWidget_7_itemClicked(QListWidgetItem *item);

    void membersOfthisproject(QString teamname);

    void on_delmemproject_clicked();

    void findmemwithproject(QString memname);
    void delmemwithproject(QString memname);
    void addmemwithproject(QJsonObject newmember);

    void on_addmemproject_clicked();

    void on_listWidget_6_itemClicked(QListWidgetItem *item);

    void on_deletememorg_clicked();

    void findmemwithorgan(QString memname);
    void delmemwithorgan(QString memname);
    void addmemwithorgan(QJsonObject newmember);
    void membersOfthisOrgan(QString organname);

    void on_editrole_clicked();

    void on_addmemberorg_clicked();

private:
    Ui::memberMain *ui;
    tasksetting *tset;
    vector <QString> tasksinlist;
    vector <QString> projectsinlist;
    vector <QString> teamlist;
    QJsonObject taskobj;
    QString currenttask;
    QString currentproject;
    project *pj;
    QJsonObject projectobj;
    QString currentteam;
    QJsonObject teamobj;
    QJsonObject orgobj;
    QString currentorg;
    QString toAssign;
    QJsonObject memedited;
    QJsonObject projedited;
    QJsonObject teamedited;
    QJsonObject taskedited;
    QString currentmeminteam;
    QJsonObject tempmem;
    QString tempproject;
    QJsonObject memtemp;
    QString meminorg;
    QJsonObject memtemp2;
};

#endif // MEMBERMAIN_H
