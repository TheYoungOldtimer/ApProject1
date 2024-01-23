#include "server.h"
#include "ui_server.h"

#include <QHostAddress>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>
#include <array>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>

Server::Server(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Server)

{
    ui->setupUi(this);
    myServer = new QTcpServer();
    myServer->listen(QHostAddress::Any, 2039);
    if(!myServer->isListening()){
        ui->textEdit->append("Error : Not listening!");

    }
    else{
        ui->textEdit->append("Listetning...");
            connect(myServer, SIGNAL(newConnection()),this, SLOT(newConnectionSlot()));
    }
}

Server::~Server()
{

}
void Server::newConnectionSlot(){
    mySocket = myServer->nextPendingConnection();
    //با این دستور میاد سوکت بعدی ای که تو راهه روی اون پرت رو دریافت میکنه
    //که درواقع سوکتیه که توی کلاینت ارسال کردیم

    ui->textEdit->append("new connection: ");


    connect(mySocket, &QTcpSocket::readyRead,this, &Server::readingData);
    connect(mySocket, &QTcpSocket::bytesWritten,this,&Server::writingData);

    connect(mySocket, &QTcpSocket::disconnected,this, &Server::disconnectedFromServer);

}
QByteArray Server::ReadFile(QJsonObject obj, QJsonDocument doc,QString path){

    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            ui->textEdit->append("File not open");
        }
        else{
            ui->textEdit->append("File is Open");
            jsonOrg = QJsonDocument::fromJson( file.readAll() );}
        file.close();
        QJsonArray arrLog = jsonOrg.array();
        int flag=0;
        for (const auto entry: arrLog) {
            const auto obj2 = entry.toObject();
                if (obj2["name"] == obj["name"]) {
                      flag=1;
                      break;
                      }
                    }
             if(flag==0){
               arrLog.push_back( obj );
               doc.setArray( arrLog );}
        QByteArray bytes = doc.toJson( QJsonDocument::Indented );

    return bytes;
}
void Server::WriteInFile(QByteArray &bytes,QString path){
    QFile file(path);
    if( file.open( QIODevice::WriteOnly ))
           {
                QTextStream iStream( &file );
                iStream.setCodec( "utf-8" );
                iStream << bytes;
                file.close();
           }
           else
           {
                ui->textEdit->append("file open failed\n");
           }
}
QByteArray bytes;
void Server::readingData(){

    ui->textEdit->append("data recieved!");
    bytes = mySocket->readAll();
    ui->textEdit->append(bytes.toStdString().c_str());

    QJsonDocument doc = QJsonDocument::fromJson(bytes);


    mySocket->write("file is updated");

}
void Server::writingData(){
    ui->textEdit->append("written successfully!\n");
}
void Server::connectedToServer(){
    ui->textEdit->append("connected successfully!\n");
    //mySocket->write("Hello!\n");

}
void Server::disconnectedFromServer(){
    ui->textEdit->append("connection lost!\n");
}



void Server::on_pushButton_clicked()
{
    WriteInFile(bytes,"C:/Users/armin.DESKTOP-R1F9757/OneDrive/Documents/AP/Source/Socket_JSON/book.json");
}
