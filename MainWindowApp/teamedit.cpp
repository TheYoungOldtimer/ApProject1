#include "teamedit.h"
#include "ui_teamedit.h"

teamedit::teamedit(QWidget *parent,QJsonObject currentteam) :
    QDialog(parent),
    ui(new Ui::teamedit)
{
    ui->setupUi(this);

    newteam = currentteam;
}

teamedit::~teamedit()
{
    delete ui;
}
void teamedit::append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path){
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

void teamedit::on_lineEdit_textEdited(const QString &arg1)
{
    newname = arg1;
}

void teamedit::on_pushButton_clicked()
{
    newteam.insert("name",newname);
    QJsonDocument doc;
    append_toa_jfile(newteam, doc, "teams.json");
    this->close();
}
