#include "memberrolewindow.h"
#include "ui_memberrolewindow.h"

memberrolewindow::memberrolewindow(QWidget *parent, QString mem) :
    QDialog(parent),
    ui(new Ui::memberrolewindow)
{
    ui->setupUi(this);
    memberemail = mem;
}

memberrolewindow::~memberrolewindow()
{
    delete ui;
}
bool memberrolewindow::findmember(QString email){

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
              memedited.insert("mytask",obj2["mytask"].toString());
              memedited.insert("myorgan",obj2["myorgan"].toString());
              memedited.insert("myproject",obj2["myproject"].toString());
              memedited.insert("myteam",obj2["myteam"].toString());

              memedited.insert("Is a CEO?",obj2["Is a CEO?"].toBool());
              memedited.insert("Is a Manager",obj2["Is a Manager"].toBool());



              //ui->what->setText(taskobj["title"].toString()+"1");
              flag=1;
              return true;

          }
        }
    return false;

}
void memberrolewindow::deletemember(QString email){
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

        file.close();
    }
    else
    {
         std::cout << "file open failed: " << path.toStdString() ;
    }
}
void memberrolewindow::readdmember(QJsonObject obj){


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
        file.close();
   }
   else
   {

        std::cout << "file open failed: " << path.toStdString() ;
   }
 }
}


void memberrolewindow::on_lineEdit_textEdited(const QString &arg1)
{
    newrole = arg1;
    bool exist = findmember(memberemail);
    if(exist == false){
        ui->pushButton->setDisabled(true);
        ui->error->setText("member not found!");
    }
    else{
        ui->pushButton->setEnabled(true);
        ui->error->setText("");
        if(newrole == "Manager" || newrole == "member" || newrole == "CEO" || newrole == ""){
            ui->pushButton->setEnabled(true);
            ui->error->setText("");
        }
        else{
            ui->pushButton->setDisabled(true);
            ui->error->setText("this role doesn't exist!");
        }
    }
}

void memberrolewindow::on_pushButton_clicked()
{
    deletemember(memberemail);
    memedited.insert("Role",newrole);
    readdmember(memedited);
    this->close();
}
