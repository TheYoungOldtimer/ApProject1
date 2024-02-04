#include "tasksetting.h"
#include "ui_tasksetting.h"
#include "QTimer"
#include "QListWidget"
#include "QListWidgetItem"
#include <QJsonArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <iostream>
#include <QTextStream>
tasksetting::tasksetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tasksetting)
{
    ui->setupUi(this);
    newtask = new task();
}

tasksetting::~tasksetting()
{
    delete ui;
}

void tasksetting::add_to_file(QJsonObject obj, QJsonDocument doc, QString path){
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
void tasksetting::lockBotton(){

}
void tasksetting::on_lineEdit_textEdited(const QString &arg1)
{
    newtask->title = arg1;
}

void tasksetting::on_pushButton_clicked()
{
    QJsonObject obj;
    obj.insert("CEO",newtask->CEO);
    obj.insert("title", newtask->title);
    obj.insert("Manager",newtask->manager);
    obj.insert("tomember",newtask->tomember);
    obj.insert("toteam",newtask->toteam);
    obj.insert("toproject",newtask->toproject);
    obj.insert("toorgan",newtask->toorgan);
    obj.insert("MemberEmail",newtask->MamberEmail);
    obj.insert("TeamName",newtask->TeamName);
    obj.insert("ProjectName",newtask->ProjectName);
    obj.insert("OrganName",newtask->OrganName);
    QJsonDocument Doc;
    add_to_file(obj,Doc,"tasks.json");

    ui->pushButton->setDisabled(true);
    ui->label_2->setText("New task was added!");
    QTimer *time5sec;
    time5sec = new QTimer(this);
    connect(time5sec, SIGNAL(timeout()), this, SLOT(close()));
    time5sec->start(5000);
    this->close();
}
