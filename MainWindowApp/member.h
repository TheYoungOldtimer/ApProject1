#ifndef MEMBER_H
#define MEMBER_H

#include <QObject>

class Member
{
private:
    QString username;
    QString email;
    QString password;
    QString role = "Member";
    bool OrgManager = false;
    bool TeamManager = false;

public:
    void setUsername(QString);
    void setEmail(QString);
    void setPass(QString);
    void setRole(QString);
    void setOrgManager(bool);
    void setTeamManager(bool);
    QString getUsername();
    QString getEmail();
    QString getPass();
    QString getRole();
    bool getOrgManager();
    bool getTeamManager();


    Member();
    Member(Member &mem);
    Member(QString Name, QString Email, QString Password, QString Role);
};
extern Member newMem;

#endif // MEMBER_H
