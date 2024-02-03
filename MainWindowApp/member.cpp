#include "member.h"

Member::Member(QString Name, QString Email, QString Password, QString Role)
{
    this->username=Name;
    this->email=Email;
    this->password=Password;
    this->role=Role;
}
Member::Member(){}
Member::Member(Member &mem){
    this->username =  mem.username;
    this->password = mem.password;
    this->email = mem.email;
    this->role = mem.role;
    this->OrgManager = mem.OrgManager  ;
    this->TeamManager = mem.TeamManager  ;
}
void Member::setUsername(QString Name){
    this->username=Name;
}
void Member::setEmail(QString Email){
    this->email=Email;
}
void Member::setPass(QString npass){
    this->password=npass;
}
void Member::setRole(QString nrole){
    this->role=nrole;
}
void Member::setOrgManager(bool nOM){
    this->OrgManager=nOM;
}
void Member::setTeamManager(bool nTM){
    this->TeamManager=nTM;
}
QString  Member::getUsername(){
    return this->username;
}
QString  Member::getEmail(){
    return this->email;
}
QString Member::getPass(){
    return this->password;
}
QString  Member::getRole(){
    return this->role;
}
bool  Member::getOrgManager(){
    return this->OrgManager;
}
bool Member::getTeamManager(){
    return this->TeamManager;
}



