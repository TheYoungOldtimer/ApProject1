#include "neworganwindow.h"
#include "ui_neworganwindow.h"

neworganwindow::neworganwindow(QWidget *parent, organ currentorgan) :
    QDialog(parent),
    ui(new Ui::neworganwindow)
{
    ui->setupUi(this);

    neworgan = currentorgan;
}

neworganwindow::~neworganwindow()
{
    delete ui;
}
void neworganwindow::append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path){
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
void neworganwindow::on_lineEdit_textEdited(const QString &arg1)
{
    name = arg1;
}

void neworganwindow::on_pushButton_clicked()
{
    neworgan.name = name;

    QJsonObject obj;
    obj.insert("name",neworgan.name);
    obj.insert("CEO",neworgan.CEO);
    obj.insert("projectname",neworgan.organtask);
    QJsonDocument doc;
    append_toa_jfile(obj, doc, "organs.json");
    this->close();
}
