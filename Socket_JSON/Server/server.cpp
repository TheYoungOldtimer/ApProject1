#include "server.h"
#include <QHostAddress>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>

Server::Server(QWidget *parent)
    : QWidget(parent)

{
    myServer = new QTcpServer();
    myServer->listen(QHostAddress::Any, 2039);
    if(!myServer->isListening()){
        qDebug()<<"Error : Not listening!";
    }
    else{
        qDebug()<<"Listetning...";
            connect(myServer, SIGNAL(newConnection()),this, SLOT(connectedToServer()));
    }
}

Server::~Server()
{

}
void Server::newConnectionSlot(){
    mySocket = myServer->nextPendingConnection();
    //با این دستور میاد سوکت بعدی ای که تو راهه روی اون پرت رو دریافت میکنه
    //که درواقع سوکتیه که توی کلاینت ارسال کردیم

    qDebug()<<"new connection: "<<mySocket->socketDescriptor();
    connect(mySocket, &QTcpSocket::connected,this, &Server::connectedToServer);
    connect(mySocket, &QTcpSocket::bytesWritten,this,&Server::writingData);
    connect(mySocket, &QTcpSocket::readyRead,this, &Server::readingData);
    connect(mySocket, &QTcpSocket::disconnected,this, &Server::disconnectedFromServer);

}

void Server::readingData(){
    qDebug()<<"data recieved!"<< mySocket->readAll();
    mySocket->write("Hello, Welcome user!\n");

}
void Server::writingData(){
    qDebug()<<"written successfully!\n";

}
void Server::connectedToServer(){
    qDebug()<<"connected successfully!\n";
    mySocket->write("Hello!\n");

}
void Server::disconnectedFromServer(){
    qDebug()<<"connection lost!\n";
}


