#include "newteamwindow.h"
#include "ui_newteamwindow.h"

newteamwindow::newteamwindow(QWidget *parent, team currentteam) :
    QDialog(parent),
    ui(new Ui::newteamwindow)
{
    ui->setupUi(this);
    newteam = new team();
    *newteam = currentteam;
}

newteamwindow::~newteamwindow()
{
    delete ui;
}
void newteamwindow::append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path){
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

void newteamwindow::on_teamname_textEdited(const QString &arg1)
{
    name=arg1;
    //search if team exist
}



void newteamwindow::on_pushButton_clicked()
{

    newteam->name = name;

    QJsonObject obj;
    obj.insert("name",newteam->name);
    obj.insert("CEO",newteam->CEO);
    obj.insert("Manager",newteam->Manager);
    obj.insert("taskname",newteam->taskname);
    obj.insert("projectname",newteam->projectname);
    QJsonDocument doc;
    append_toa_jfile(obj, doc, "teams.json");
    this->close();

}
