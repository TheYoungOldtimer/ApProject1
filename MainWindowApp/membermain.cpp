
#include "membermain.h"
#include "ui_membermain.h"
#include <QJsonArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <iostream>
#include <QTextStream>
#include <QTimer>
#include <QListWidget>
#include <QListWidgetItem>
#include "projectedit.h"
#include "addmemtoteamwin.h"

/*memberMain::memberMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberMain)
{
    ui->setupUi(this);
}*/
memberMain::memberMain(QWidget *parent,Member mem) :
    QDialog(parent),
    ui(new Ui::memberMain)
{
    ui->setupUi(this);
    thisMember = mem;
    updatelisttasks("tasks.json");
    updatelistOrgans("organs.json");
    updatelistteams("teams.json");
    updatelistprojects("projects.json");
    updatetaskMemberlist();
    updatetaskTeamlist();
    updatetaskprojectlist();
    //thisMember = new Member(mem);
    tset = new tasksetting(this);
    gridOrg_disable();
    gridProject_disable();
    gridTeam_disable();
    gridTask_disable();

    if(thisMember.getOrgManager() == true){
        gridOrg_enable();
        gridProject_enable();
        gridTeam_enable();
        gridTask_enable();
    }
    else if(thisMember.getTeamManager() == true){
        gridProject_enable();
        gridTeam_enable();
        gridTask_enable();
    }


}
memberMain::~memberMain()
{
    delete ui;
}
void memberMain::updatetaskMemberlist(){
    QString path = "member.json";
    QJsonDocument doc;
    QJsonObject obj;
    bool flag=false;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
        flag=false;
          const auto obj2 = entry.toObject();
          for(auto it=projectsinlist.begin();it!=projectsinlist.end();it++){
            if(*it == obj2["Email"].toString()){
                flag = true;
                break;
            }
            else
                flag=false;


          }
          if(flag==true){
              continue;
          }
          else{
              if(obj2["Is a CEO?"].toBool()!= true){
              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["Email"].toString());
              item->setSelected(false);
              ui->listWidget_8->addItem(item);
              projectsinlist.push_back(obj2["Email"].toString());}}
        }
}
void memberMain::updatetaskTeamlist(){
    QString path = "teams.json";
    QJsonDocument doc;
    QJsonObject obj;
    bool flag=false;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
        flag=false;
          const auto obj2 = entry.toObject();
          for(auto it=projectsinlist.begin();it!=projectsinlist.end();it++){
            if(*it == obj2["name"].toString()){
                flag = true;
                break;
            }
            else
                flag=false;


          }
          if(flag==true){
              continue;
          }
          else{

              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["name"].toString());
              item->setSelected(false);
              ui->listWidget_8->addItem(item);
              projectsinlist.push_back(obj2["name"].toString());}
        }
}
void memberMain::updatetaskprojectlist(){
    QString path1 = "projects.json";
    QJsonDocument doc;
    QJsonObject obj;
    bool flag=false;
    QJsonDocument jsonOrg;
    QFile file(path1); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
        flag=false;
          const auto obj2 = entry.toObject();
          for(auto it=projectsinlist.begin();it!=projectsinlist.end();it++){
            if(*it == obj2["name"].toString()){
                flag = true;
                break;
            }
            else
                flag=false;


          }
          if(flag==true){
              continue;
          }
          else{
              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["name"].toString());
              item->setSelected(false);
              ui->listWidget_8->addItem(item);
              projectsinlist.push_back(obj2["name"].toString());}
        }
}
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
    ui->newteam->setDisabled(true);
    ui->delteam->setDisabled(true);
    ui->editteam->setDisabled(true);
    ui->listWidget_5->setDisabled(true);
    ui->listWidget_2->setDisabled(true);
}
void memberMain::gridTeam_enable(){
    ui->addmemteam->setEnabled(true);
    ui->delmemteam->setEnabled(true);
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
void memberMain::updatelisttasks(QString path){
    QJsonDocument doc;
    QJsonObject obj;
    bool flag=false;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
        flag=false;
          const auto obj2 = entry.toObject();
          for(auto it=tasksinlist.begin();it!=tasksinlist.end();it++){
            if(*it == obj2["title"].toString()){
                flag = true;
                break;
            }
            else
                flag=false;


          }
          if(flag==true){
              continue;
          }
          else{
              if(obj2["isArchived"].toBool() == false){
              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["title"].toString());
              item->setSelected(false);
              ui->listWidget_3->addItem(item);
              tasksinlist.push_back(obj2["title"].toString());}
          }

        }
}
void memberMain::findlisttasks(QString s, QString path){

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["title"] == s) {
              taskobj.insert("title",s);
              taskobj.insert("CEO",obj2["CEO"].toString());
              taskobj.insert("Manager",obj2["Manager"].toString());
              taskobj.insert("MemberEmail",obj2["MemberEmail"].toString());
              taskobj.insert("OrganName",obj2["OrganName"].toString());
              taskobj.insert("ProjectName",obj2["ProjectName"].toString());
              taskobj.insert("TeamName",obj2["TeamName"].toString());

              taskobj.insert("tomember",obj2["tomember"].toBool());
              taskobj.insert("toorgan",obj2["toorgan"].toBool());
              taskobj.insert("toproject",obj2["toproject"].toBool());
              taskobj.insert("toteam",obj2["toteam"].toBool());
              taskobj.insert("isArchived",obj2["isArchived"].toBool());
              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }

}
void memberMain::deleteFromlisttasks(QString s, QString path){
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["title"] != s) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(taskobj["title"].toString()+"1");
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path){
        int flag=0;
        QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                std::cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();
        QJsonArray arrLog = jsonOrg.array();
        for (const auto entry: arrLog) {
              const auto obj2 = entry.toObject();
              if (obj2["title"] == obj["title"]) {
                  flag=1;
                  break;
              }
            }
     if(flag==0){
       arrLog.push_back( obj );
       doc.setArray( arrLog );

       //doc.setObject(obj);
       QByteArray bytes = doc.toJson( QJsonDocument::Indented );

       if( file.open( QIODevice::WriteOnly ))
       {
            QTextStream iStream( &file );
            iStream.setCodec( "utf-8" );
            iStream << bytes;
            file.close();
       }
       else
       {
            std::cout << "file open failed: " << path.toStdString() ;
       }
     }
}
void memberMain::on_newtask_clicked()
{
    tasksetting *newtaskset = new tasksetting(this);
    newtaskset->show();
}
void memberMain::on_edittask_clicked()
{
    findlisttasks(currenttask,"tasks.json");
    deleteFromlisttasks(currenttask,"tasks.json");
    tasksettingedit *tasked = new tasksettingedit(this,taskobj);
    tasked->show();
}
void memberMain::on_listWidget_3_itemClicked(QListWidgetItem *item)
{

    ui->edittask->setEnabled(true);
    currenttask = item->text();
    ui->what->setText(currenttask);



}
void memberMain::on_updatelists_clicked()
{
    updatelisttasks("tasks.json");
}
void memberMain::on_archivetask_clicked()
{
    findlisttasks(currenttask,"tasks.json");
    if(taskobj["isArchived"].toBool() == false)
        taskobj.insert("isArchived",true);
    deleteFromlisttasks(currenttask,"tasks.json");
    QJsonDocument doc;
    append_toa_jfile(taskobj,doc,"tasks.json");

}
void memberMain::on_newteam_clicked()
{
    team *newteam = new team();
    if(this->thisMember.getOrgManager() == true)
        newteam->CEO = this->thisMember.getUsername();
    if(this->thisMember.getTeamManager() == true)
        newteam->Manager = this->thisMember.getUsername();

    newteamwindow *teamwindow = new newteamwindow(this,*newteam);
    teamwindow->show();
}
void memberMain::on_newproject_clicked()
{
    project *pj2 = new project();
    if(this->thisMember.getOrgManager() == true)
        pj2->CEO = this->thisMember.getUsername();
    if(this->thisMember.getTeamManager() == true)
        pj2->Manager = this->thisMember.getUsername();

    newprojectwin *pwin = new newprojectwin(this,*pj2);
    pwin->show();
}
void memberMain::updatelistprojects(QString path){
    QJsonDocument doc;
    QJsonObject obj;
    bool flag=false;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
        flag=false;
          const auto obj2 = entry.toObject();
          for(auto it=projectsinlist.begin();it!=projectsinlist.end();it++){
            if(*it == obj2["name"].toString()){
                flag = true;
                break;
            }
            else
                flag=false;


          }
          if(flag==true){
              continue;
          }
          else{
              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["name"].toString());
              item->setSelected(false);
              ui->listWidget_4->addItem(item);
              projectsinlist.push_back(obj2["name"].toString());}
        }
}
void memberMain::on_updatelists_2_clicked()
{
    updatelistprojects("projects.json");
}
void memberMain::findlistproject(QString s, QString path){

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] == s) {
              projectobj.insert("name",obj2["name"].toString());
              projectobj.insert("CEO",obj2["CEO"].toString());
              projectobj.insert("Manager",obj2["Manager"].toString());
              projectobj.insert("projecttask",obj2["projecttask"].toString());




              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }

}
void memberMain::deleteFromProjectlist(QString s, QString path){
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] != s) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(taskobj["name"].toString()+"1");
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::on_editptoject_clicked()
{
    findlistproject(currentproject,"projects.json");

    deleteFromProjectlist(currentproject,"projects.json");

    projectedit * newporject = new projectedit(this,projectobj);

    newporject->show();
}
void memberMain::on_listWidget_4_itemClicked(QListWidgetItem *item)
{
    currentproject = item->text();
    ui->editptoject->setEnabled(true);
    ui->delproject->setEnabled(true);
    membersOfthisproject(currentproject);

}
void memberMain::on_delproject_clicked()
{
    deleteFromProjectlist(currentproject,"projects.json");
}
void memberMain::updatelistteams(QString path){
    QJsonDocument doc;
    QJsonObject obj;
    bool flag=false;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
        flag=false;
          const auto obj2 = entry.toObject();
          for(auto it=teamlist.begin();it!=teamlist.end();it++){
            if(*it == obj2["name"].toString()){
                flag = true;
                break;
            }
            else
                flag=false;


          }
          if(flag==true){
              continue;
          }
          else{

              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["name"].toString());
              item->setSelected(false);
              ui->listWidget_2->addItem(item);
              teamlist.push_back(obj2["name"].toString());}


        }
}
void memberMain::on_updatelists_3_clicked()
{
    updatelistteams("teams.json");
}
void memberMain::findlistteam(QString s, QString path){

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] == s) {
              teamobj.insert("name",obj2["name"].toString());
              teamobj.insert("CEO",obj2["CEO"].toString());
              teamobj.insert("Manager",obj2["Manager"].toString());
              teamobj.insert("projecttask",obj2["projecttask"].toString());
              teamobj.insert("taskname",obj2["taskname"].toString());





              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }

}


void memberMain::membersOfthisteam(QString teamname){
    QString path = "member.json";

    QJsonDocument doc;

    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["myteam"].toString() == teamname) {
              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["Email"].toString());
              item->setSelected(false);
              ui->listWidget_5->addItem(item);
              //teamlist.push_back(obj2["name"].toString());



              //ui->what->setText(taskobj["title"].toString()+"1");


          }
        }
}



void memberMain::on_listWidget_2_itemClicked(QListWidgetItem *item)
{
    ui->listWidget_5->clear();
    ui->editteam->setEnabled(true);
    currentteam = item->text();
    membersOfthisteam(currentteam);
    ui->what->setText(currentteam);
}
void memberMain::deleteFromTeamtlist(QString s, QString path){
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] != s) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(taskobj["name"].toString()+"1");
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::on_editteam_clicked()
{
    findlistteam(currentteam,"teams.json");

    deleteFromTeamtlist(currentteam,"teams.json");

    teamedit *edteam =new teamedit(this,teamobj);

    edteam->show();

}
void memberMain::on_delteam_clicked()
{
    deleteFromTeamtlist(currentteam,"teams.json");
}
void memberMain::on_neworg_clicked()
{
    organ* neworg = new organ();
    if(this->thisMember.getOrgManager() == true)
        neworg->CEO = this->thisMember.getUsername();
    neworganwindow *neworgwin = new neworganwindow(this,*neworg);
    neworgwin->show();

}
void memberMain::updatelistOrgans(QString path){
    QJsonDocument doc;
    QJsonObject obj;
    bool flag=false;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
        flag=false;
          const auto obj2 = entry.toObject();
          for(auto it=teamlist.begin();it!=teamlist.end();it++){
            if(*it == obj2["name"].toString()){
                flag = true;
                break;
            }
            else
                flag=false;


          }
          if(flag==true){
              continue;
          }
          else{

              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["name"].toString());
              item->setSelected(false);
              ui->listWidget->addItem(item);
              teamlist.push_back(obj2["name"].toString());}


        }
}
void memberMain::on_updatelists_4_clicked()
{
    updatelistOrgans("organs.json");
}
void memberMain::findlistOrgan(QString s, QString path){

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] == s) {
              orgobj.insert("name",obj2["name"].toString());
              orgobj.insert("CEO",obj2["CEO"].toString());
              orgobj.insert("organtask",obj2["organtask"].toString());

              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }

}
void memberMain::deleteFromorganlist(QString s, QString path){
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] != s) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(taskobj["name"].toString()+"1");
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::on_listWidget_itemClicked(QListWidgetItem *item)
{
    currentorg = item->text();//================================================================
    ui->editorg->setEnabled(true);
    ui->deleteorg->setEnabled(true);
    membersOfthisOrgan(currentorg);
}
void memberMain::on_editorg_clicked()
{
    findlistOrgan(currentorg , "organs.json");

    deleteFromorganlist(currentorg , "organs.json");

    editorganwindow *neworgwin = new editorganwindow(this,orgobj);

    neworgwin->show();
}
void memberMain::on_deleteorg_clicked()
{
    deleteFromorganlist(currentorg, "organs.json");
}
void memberMain::findmember(QString email, QString task){
    QString path = "member.json";

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] == email) {
              memedited.insert("Email",obj2["Email"].toString());
              memedited.insert("Username",obj2["Username"].toString());
              memedited.insert("Password",obj2["Password"].toString());
              memedited.insert("Role",obj2["Role"].toString());
              memedited.insert("mytask",task);
              memedited.insert("myorgan",obj2["myorgan"].toString());
              memedited.insert("myproject",obj2["myproject"].toString());
              memedited.insert("myteam",obj2["myteam"].toString());

              memedited.insert("Is a CEO?",obj2["Is a CEO?"].toBool());
              memedited.insert("Is a Manager",obj2["Is a Manager"].toBool());



              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }

}
void memberMain::deletemember(QString email){
    QString path = "member.json";
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] != email) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(taskobj["Email"].toString());
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::readdmember(QJsonObject obj){


    QJsonDocument doc;
    QString path = "member.json";
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] == obj["Email"]) {
              //ui->pushButton->setDisabled(true);
              flag=1;
              break;
          }
        }
 if(flag==0){
   arrLog.push_back( obj );
   doc.setArray( arrLog );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText("Done!");
        file.close();
   }
   else
   {
       ui->what->setText("Problem was accured!");
        std::cout << "file open failed: " << path.toStdString() ;
   }
 }
}
void memberMain::findproject(QString name, QString task){
    QString path = "projects.json";

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] == name) {
              projedited.insert("name",obj2["name"].toString());
              projedited.insert("CEO",obj2["CEO"].toString());
              projedited.insert("Manager",obj2["Manager"].toString());
              projedited.insert("projecttask",task);



              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }
}
void memberMain::deleteproject(QString name){
    QString path = "projects.json";
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] != name) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(taskobj["name"].toString());
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::readdproject(QJsonObject obj){
    QJsonDocument doc;
    QString path = "projects.json";
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] == obj["name"]) {
              //ui->pushButton->setDisabled(true);
              flag=1;
              break;
          }
        }
 if(flag==0){
   arrLog.push_back( obj );
   doc.setArray( arrLog );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText("Done!");
        file.close();
   }
   else
   {
       ui->what->setText("Problem was accured!");
        std::cout << "file open failed: " << path.toStdString() ;
   }
 }
}
void memberMain::findteam(QString name, QString task){
    QString path = "teams.json";

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] == name) {
              teamedited.insert("name",obj2["name"].toString());
              teamedited.insert("CEO",obj2["CEO"].toString());
              teamedited.insert("Manager",obj2["Manager"].toString());
              teamedited.insert("projectname",obj2["projectname"].toString());
              teamedited.insert("taskname",task);

              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }
}
void memberMain::deleteteam(QString name){
    QString path = "teams.json";
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] != name) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(teamobj["name"].toString());
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::readdteam(QJsonObject obj){
    QJsonDocument doc;
    QString path = "teams.json";
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["name"] == obj["name"]) {
              //ui->pushButton->setDisabled(true);
              flag=1;
              break;
          }
        }
 if(flag==0){
   arrLog.push_back( obj );
   doc.setArray( arrLog );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText("Done!");
        file.close();
   }
   else
   {
       ui->what->setText("Problem was accured!");
        std::cout << "file open failed: " << path.toStdString() ;
   }
 }
}
void memberMain::findtaskformember(QString title, QString email){
    QString path = "tasks.json";

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["title"] == title) {
              taskedited.insert("CEO",obj2["CEO"].toString());
              taskedited.insert("Manager",obj2["Manager"].toString());
              taskedited.insert("MemberEmail",email);
              taskedited.insert("OrganName",obj2["OrganName"].toString());
              taskedited.insert("ProjectName",obj2["ProjectName"].toString());
              taskedited.insert("TeamName",obj2["TeamName"].toString());
              taskedited.insert("title",obj2["title"].toString());

              taskedited.insert("tomember",obj2["tomember"].toBool());
              taskedited.insert("toorgan",obj2["toorgan"].toBool());
              taskedited.insert("toproject",obj2["toproject"].toBool());
              taskedited.insert("toteam",obj2["toteam"].toBool());
              taskedited.insert("isArchived",obj2["isArchived"].toBool());



              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }

}
void memberMain::findtaskforproject(QString title, QString projectname){
    QString path = "tasks.json";

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["title"] == title) {
              taskedited.insert("CEO",obj2["CEO"].toString());
              taskedited.insert("Manager",obj2["Manager"].toString());
              taskedited.insert("MemberEmail",obj2["MemberEmail"].toString());
              taskedited.insert("OrganName",obj2["OrganName"].toString());
              taskedited.insert("ProjectName",projectname);
              taskedited.insert("TeamName",obj2["TeamName"].toString());
              taskedited.insert("title",obj2["title"].toString());

              taskedited.insert("tomember",obj2["tomember"].toBool());
              taskedited.insert("toorgan",obj2["toorgan"].toBool());
              taskedited.insert("toproject",obj2["toproject"].toBool());
              taskedited.insert("toteam",obj2["toteam"].toBool());
              taskedited.insert("isArchived",obj2["isArchived"].toBool());



              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }

}
void memberMain::findtaskforteam(QString title, QString teamname){
    QString path = "tasks.json";

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["title"] == title) {
              taskedited.insert("CEO",obj2["CEO"].toString());
              taskedited.insert("Manager",obj2["Manager"].toString());
              taskedited.insert("MemberEmail",obj2["MemberEmail"].toString());
              taskedited.insert("OrganName",obj2["OrganName"].toString());
              taskedited.insert("ProjectName",obj2["ProjectName"].toString());
              taskedited.insert("TeamName",teamname);
              taskedited.insert("title",obj2["title"].toString());

              taskedited.insert("tomember",obj2["tomember"].toBool());
              taskedited.insert("toorgan",obj2["toorgan"].toBool());
              taskedited.insert("toproject",obj2["toproject"].toBool());
              taskedited.insert("toteam",obj2["toteam"].toBool());
              taskedited.insert("isArchived",obj2["isArchived"].toBool());



              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }
}
void memberMain::deletetaskformember(QString title){
    QString path = "tasks.json";
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["title"] != title) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(teamobj["title"].toString());
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::readdtaskformember(QJsonObject obj){
    QJsonDocument doc;
    QString path = "tasks.json";
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["title"] == obj["title"]) {
              //ui->pushButton->setDisabled(true);
              flag=1;
              break;
          }
        }
 if(flag==0){
   arrLog.push_back( obj );
   doc.setArray( arrLog );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText("Done!");
        file.close();
   }
   else
   {
       ui->what->setText("Problem was accured!");
        std::cout << "file open failed: " << path.toStdString() ;
   }
 }
}
void memberMain::on_listWidget_8_itemClicked(QListWidgetItem *item)
{
    toAssign = item->text();
}
void memberMain::on_asstoproj_clicked()
{
    findproject(toAssign, currenttask);
    deleteproject(toAssign);
    readdproject(projedited);

    findtaskforproject(currenttask, toAssign);
    deletetaskformember(currenttask);
    readdtaskformember(taskedited);


    ui->what->setText("project changed!");

}
void memberMain::on_asstoteam_clicked()
{
    findteam(toAssign, currenttask);
    deleteteam(toAssign);
    readdteam(teamedited);

    findtaskforteam(currenttask, toAssign);
    deletetaskformember(currenttask);
    readdtaskformember(taskedited);


    ui->what->setText("team changed!");
}
void memberMain::on_asstomem_clicked()
{
    findmember(toAssign, currenttask);
    deletemember(toAssign);
    readdmember(memedited);

    findtaskformember(currenttask, toAssign);
    deletetaskformember(currenttask);
    readdtaskformember(taskedited);
    ui->what->setText("member changed!");
}

void memberMain::findmeminteams(QString memname){
    QString path = "member.json";

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] == memname) {
              tempmem.insert("Email",obj2["Email"].toString());
              tempmem.insert("Username",obj2["Username"].toString());
              tempmem.insert("Password",obj2["Password"].toString());
              tempmem.insert("Role",obj2["Role"].toString());
              tempmem.insert("mytask",obj2["mytask"].toString());
              tempmem.insert("myorgan",obj2["myorgan"].toString());
              tempmem.insert("myproject",obj2["myproject"].toString());
              tempmem.insert("myteam","");

              tempmem.insert("Is a CEO?",obj2["Is a CEO?"].toBool());
              tempmem.insert("Is a Manager",obj2["Is a Manager"].toBool());



              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }
}
void memberMain::delmeminteams(QString memname){
    QString path = "member.json";
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] != memname) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(taskobj["Email"].toString());
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::addmeminteams(QJsonObject newmember){
    QJsonDocument doc;
    QString path = "member.json";
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] == newmember["Email"]) {
              //ui->pushButton->setDisabled(true);
              flag=1;
              break;
          }
        }
 if(flag==0){
   arrLog.push_back( newmember );
   doc.setArray( arrLog );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText("Done!");
        file.close();
   }
   else
   {
       ui->what->setText("Problem was accured!");
        std::cout << "file open failed: " << path.toStdString() ;
   }
 }
}

void memberMain::on_listWidget_5_itemClicked(QListWidgetItem *item)
{
    currentmeminteam = item->text();
}

void memberMain::on_delmemteam_clicked()
{
    findmeminteams(currentmeminteam);
    delmeminteams(currentmeminteam);
    addmeminteams(tempmem);
    ui->listWidget_5->clear();


}

void memberMain::on_addmemteam_clicked()
{
    addmemToteamwin *newmemtoteam = new addmemToteamwin(this,currentteam);
    newmemtoteam->show();

}
void memberMain::membersOfthisproject(QString projectname){
    QString path = "member.json";

    QJsonDocument doc;

    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["myproject"].toString() == projectname) {
              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["Email"].toString());
              item->setSelected(false);
              ui->listWidget_7->addItem(item);
              //teamlist.push_back(obj2["name"].toString());



              //ui->what->setText(taskobj["title"].toString()+"1");


          }
        }
}

void memberMain::on_listWidget_7_itemClicked(QListWidgetItem *item)
{
    tempproject = item->text();
}


void memberMain::findmemwithproject(QString memname){
    QString path = "member.json";

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] == memname) {
              memtemp.insert("Email",obj2["Email"].toString());
              memtemp.insert("Username",obj2["Username"].toString());
              memtemp.insert("Password",obj2["Password"].toString());
              memtemp.insert("Role",obj2["Role"].toString());
              memtemp.insert("mytask",obj2["mytask"].toString());
              memtemp.insert("myorgan",obj2["myorgan"].toString());
              memtemp.insert("myproject","");
              memtemp.insert("myteam",obj2["myproject"].toString());

              memtemp.insert("Is a CEO?",obj2["Is a CEO?"].toBool());
              memtemp.insert("Is a Manager",obj2["Is a Manager"].toBool());



              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }
}
void memberMain::delmemwithproject(QString memname){
    QString path = "member.json";
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] != memname) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(taskobj["Email"].toString());
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::addmemwithproject(QJsonObject newmember){
    QJsonDocument doc;
    QString path = "member.json";
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] == newmember["Email"]) {
              //ui->pushButton->setDisabled(true);
              flag=1;
              break;
          }
        }
 if(flag==0){
   arrLog.push_back( newmember );
   doc.setArray( arrLog );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText("Done!");
        file.close();
   }
   else
   {
       ui->what->setText("Problem was accured!");
        std::cout << "file open failed: " << path.toStdString() ;
   }
 }
}

void memberMain::on_delmemproject_clicked()
{
    findmemwithproject(tempproject);
    delmemwithproject(tempproject);
    addmemwithproject(memtemp);
    ui->listWidget_7->clear();
}

void memberMain::on_addmemproject_clicked()
{
    addmemtoprojwin *newwindow = new addmemtoprojwin(this,currentproject);
    newwindow->show();

}

void memberMain::on_listWidget_6_itemClicked(QListWidgetItem *item)
{
    meminorg = item->text();
}
void memberMain::findmemwithorgan(QString memname){
    QString path = "member.json";

    QJsonDocument doc;
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] == memname) {
              memtemp2.insert("Email",obj2["Email"].toString());
              memtemp2.insert("Username",obj2["Username"].toString());
              memtemp2.insert("Password",obj2["Password"].toString());
              memtemp2.insert("Role",obj2["Role"].toString());
              memtemp2.insert("mytask",obj2["mytask"].toString());
              memtemp2.insert("myorgan","");
              memtemp2.insert("myproject",obj2["myproject"].toString());
              memtemp2.insert("myteam",obj2["myproject"].toString());

              memtemp2.insert("Is a CEO?",obj2["Is a CEO?"].toBool());
              memtemp2.insert("Is a Manager",obj2["Is a Manager"].toBool());



              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              break;
          }
        }
}
void memberMain::delmemwithorgan(QString memname){
    QString path = "member.json";
    QJsonDocument doc;
    QJsonDocument jsonOrg;
        QFile file(path); // json file
            if( !file.open( QIODevice::ReadOnly ) ) //read json content
            {
                //open file error ...
                cout << "File not open";
            }
            else
                jsonOrg = QJsonDocument::fromJson( file.readAll() );
            file.close();

        QJsonArray arr=jsonOrg.array();

        QJsonArray newarr;
        //Searching in the list
        for (const auto entry: arr) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] != memname) {
              newarr.append(obj2);
          }
        }
        arr.empty();
        doc.setArray( arr );
        doc.setArray( newarr );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText(taskobj["Email"].toString());
        file.close();
    }
    else
    {
         cout << "file open failed: " << path.toStdString() << endl;
    }
}
void memberMain::addmemwithorgan(QJsonObject newmember){
    QJsonDocument doc;
    QString path = "member.json";
    int flag=0;
    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["Email"] == newmember["Email"]) {
              //ui->pushButton->setDisabled(true);
              flag=1;
              break;
          }
        }
 if(flag==0){
   arrLog.push_back( newmember );
   doc.setArray( arrLog );

   //doc.setObject(obj);
   QByteArray bytes = doc.toJson( QJsonDocument::Indented );

   if( file.open( QIODevice::WriteOnly ))
   {
        QTextStream iStream( &file );
        iStream.setCodec( "utf-8" );
        iStream << bytes;
        ui->what->setText("Done!");
        file.close();
   }
   else
   {
       ui->what->setText("Problem was accured!");
        std::cout << "file open failed: " << path.toStdString() ;
   }
 }
}
void memberMain::membersOfthisOrgan(QString organname){
    QString path = "member.json";

    QJsonDocument doc;

    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            std::cout << "File not open";
        }
        else
            jsonOrg = QJsonDocument::fromJson( file.readAll() );
        file.close();
    QJsonArray arrLog = jsonOrg.array();
    for (const auto entry: arrLog) {
          const auto obj2 = entry.toObject();
          if (obj2["myorgan"].toString() == organname) {
              QListWidgetItem *item = new QListWidgetItem();
              item->setText(obj2["Email"].toString());
              item->setSelected(false);
              ui->listWidget_6->addItem(item);
              //teamlist.push_back(obj2["name"].toString());



              //ui->what->setText(taskobj["title"].toString()+"1");


          }
        }
}

void memberMain::on_deletememorg_clicked()
{
    findmemwithorgan(meminorg);
    delmemwithorgan(meminorg);
    addmemwithorgan(memtemp2);
    ui->listWidget_6->clear();
}

void memberMain::on_editrole_clicked()
{
    memberrolewindow *temp = new memberrolewindow(this,meminorg);
    temp->show();
}

void memberMain::on_addmemberorg_clicked()
{
    newmemberinOrgan *temp = new newmemberinOrgan(this,currentorg);
    temp->show();
}
