#include "newprojectwin.h"
#include "ui_newprojectwin.h"

newprojectwin::newprojectwin(QWidget *parent, project proj) :
    QDialog(parent),
    ui(new Ui::newprojectwin)
{
    ui->setupUi(this);
    *newproject = proj;
}

newprojectwin::~newprojectwin()
{
    delete ui;
}
void newprojectwin::append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path){
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
                  ui->pushButton->setDisabled(true);
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
            this->close();
            file.close();
       }
       else
       {
            std::cout << "file open failed: " << path.toStdString() ;
       }
     }
}

void newprojectwin::on_newprojectname_textEdited(const QString &arg1)
{
    newproject->name =arg1;
}

void newprojectwin::on_pushButton_clicked()
{
    vector <QString> members;
    QJsonObject obj;
    QString temp;
    obj.insert("name",newproject->name);
    obj.insert("CEO",newproject->CEO);
    obj.insert("Manager",newproject->Manager);
    obj.insert("projecttask",newproject->projecttask);

    QJsonDocument doc;
    append_toa_jfile(obj,doc,"projects.json");

}
