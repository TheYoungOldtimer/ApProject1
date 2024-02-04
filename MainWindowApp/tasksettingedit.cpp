#include "tasksettingedit.h"
#include "ui_tasksettingedit.h"

tasksettingedit::tasksettingedit(QWidget *parent,QJsonObject newobj) :
    QDialog(parent),
    ui(new Ui::tasksettingedit)
{

    ui->setupUi(this);
    taskobj.insert("title",newobj["title"].toString());
    taskobj.insert("CEO",newobj["CEO"].toString());
    taskobj.insert("Manager",newobj["Manager"].toString());
    taskobj.insert("MemberEmail",newobj["MemberEmail"].toString());
    taskobj.insert("OrganName",newobj["OrganName"].toString());
    taskobj.insert("ProjectName",newobj["ProjectName"].toString());
    taskobj.insert("TeamName",newobj["TeamName"].toString());

    taskobj.insert("tomember",newobj["tomember"].toBool());
    taskobj.insert("toorgan",newobj["toorgan"].toBool());
    taskobj.insert("toproject",newobj["toproject"].toBool());
    taskobj.insert("toteam",newobj["toteam"].toBool());
    taskobj.insert("isArchived",newobj["isArchived"].toBool());
}

tasksettingedit::~tasksettingedit()
{
    delete ui;
}
void tasksettingedit::append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path){
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

void tasksettingedit::on_lineEdit_textEdited(const QString &arg1)
{
    newname = arg1;
    taskobj.insert("title",newname);
}

void tasksettingedit::on_pushButton_clicked()
{
    QJsonDocument doc;

    append_toa_jfile(taskobj,doc,"tasks.json");
    this->close();
}
