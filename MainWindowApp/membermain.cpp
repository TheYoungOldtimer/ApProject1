#include "membermain.h"
#include "ui_membermain.h"

/*memberMain::memberMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberMain)
{
    ui->setupUi(this);
}*/

void memberMain::gridOrg_disable(){
    ui->addmemberorg->setDisabled(true);
    ui->deletememorg->setDisabled(true);
    ui->editrole->setDisabled(true);
    ui->neworg->setDisabled(true);
    ui->editorg->setDisabled(true);
    ui->deleteorg->setDisabled(true);
    ui->listWidget_6->setDisabled(true);
    ui->listWidget->setDisabled(true);
}
void memberMain::gridOrg_enable(){
    ui->addmemberorg->setEnabled(true);
    ui->deletememorg->setEnabled(true);
    ui->editrole->setEnabled(true);
    ui->neworg->setEnabled(true);
    ui->editorg->setEnabled(true);
    ui->deleteorg->setEnabled(true);
    ui->listWidget_6->setEnabled(true);
    ui->listWidget->setEnabled(true);
}
void memberMain::gridProject_disable(){
    ui->addmemproject->setDisabled(true);
    ui->delmemproject->setDisabled(true);
    ui->newproject->setDisabled(true);
    ui->editptoject->setDisabled(true);
    ui->delproject->setDisabled(true);
    ui->changestatus->setDisabled(true);
    ui->listWidget_7->setDisabled(true);
    ui->listWidget_4->setDisabled(true);
}
void memberMain::gridProject_enable(){
    ui->addmemproject->setEnabled(true);
    ui->delmemproject->setEnabled(true);
    ui->newproject->setEnabled(true);
    ui->editptoject->setEnabled(true);
    ui->delproject->setEnabled(true);
    ui->changestatus->setEnabled(true);
    ui->listWidget_7->setEnabled(true);
    ui->listWidget_4->setEnabled(true);
}
void memberMain::gridTeam_disable(){
    ui->addmemteam->setDisabled(true);
    ui->delmemteam->setDisabled(true);
    ui->editmemroleteam->setDisabled(true);
    ui->newteam->setDisabled(true);
    ui->delteam->setDisabled(true);
    ui->editteam->setDisabled(true);
    ui->listWidget_5->setDisabled(true);
    ui->listWidget_2->setDisabled(true);
}
void memberMain::gridTeam_enable(){
    ui->addmemteam->setEnabled(true);
    ui->delmemteam->setEnabled(true);
    ui->editmemroleteam->setEnabled(true);
    ui->newteam->setEnabled(true);
    ui->delteam->setEnabled(true);
    ui->editteam->setEnabled(true);
    ui->listWidget_5->setEnabled(true);
    ui->listWidget_2->setEnabled(true);
}
void memberMain::gridTask_disable(){
    ui->asstoproj->setDisabled(true);
    ui->asstoteam->setDisabled(true);
    ui->asstomem->setDisabled(true);
    ui->listWidget_8->setDisabled(true);
}
void memberMain::gridTask_enable(){
    ui->asstoproj->setEnabled(true);
    ui->asstoteam->setEnabled(true);
    ui->asstomem->setEnabled(true);
    ui->listWidget_8->setEnabled(true);
}
void memberMain::orgman_enable(){
    ui->listWidget_6->setEnabled(true);
    ui->neworg->setEnabled(true);
    ui->editorg->setEnabled(true);
    ui->deleteorg->setEnabled(true);
}
void memberMain::orgman_disable(){
    ui->listWidget_6->setDisabled(true);
    ui->neworg->setDisabled(true);
    ui->editorg->setDisabled(true);
    ui->deleteorg->setDisabled(true);
}
void memberMain::teamman_enable(){
    ui->listWidget_5->setEnabled(true);
    ui->newteam->setEnabled(true);
    ui->delteam->setEnabled(true);
    ui->editteam->setEnabled(true);
}
void memberMain::teamman_disable(){
    ui->listWidget_5->setDisabled(true);
    ui->newteam->setDisabled(true);
    ui->delteam->setDisabled(true);
    ui->editteam->setDisabled(true);
}
void memberMain::project_enable(){
    ui->listWidget_7->setEnabled(true);
    ui->newproject->setEnabled(true);
    ui->editptoject->setEnabled(true);
    ui->delproject->setEnabled(true);
    ui->changestatus->setEnabled(true);
}
void memberMain::project_disable(){
    ui->listWidget_7->setDisabled(true);
    ui->newproject->setDisabled(true);
    ui->editptoject->setDisabled(true);
    ui->delproject->setDisabled(true);
    ui->changestatus->setDisabled(true);
}
void memberMain::task_enable(){
    ui->edittask->setEnabled(true);
    ui->newtask->setEnabled(true);
    ui->archivetask->setEnabled(true);
}
void memberMain::task_disable(){
    ui->edittask->setDisabled(true);
    ui->newtask->setDisabled(true);
    ui->archivetask->setDisabled(true);
}

memberMain::memberMain(QWidget *parent,Member mem) :
    QDialog(parent),
    ui(new Ui::memberMain)
{
    ui->setupUi(this);
    thisMember = new Member(mem);
    gridOrg_disable();
    gridProject_disable();
    gridTeam_disable();
    gridTask_disable();

    if(thisMember->getOrgManager() == true){
        gridOrg_enable();
        gridProject_enable();
        gridTeam_enable();
        gridTask_enable();
    }
    else if(thisMember->getTeamManager() == true){
        gridProject_enable();
        gridTeam_enable();
        gridTask_enable();
    }

}
memberMain::~memberMain()
{
    delete ui;
}
