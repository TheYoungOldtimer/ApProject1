#include "client.h"


#include <QtWidgets/QWidget>
#include <QAbstractSocket>
#include <QTcpSocket>
#include <QHostAddress>
using namespace std;
//Client::Client()//:
    //QObject(parent)
//{

//}
void Client::connectingToServer(){
    clientsocket = new QTcpSocket();
    clientsocket->connectToHost("127.0.0.1", 8080);
    qDebug() <<"Connecting...\n";

    connect(clientsocket, &QTcpSocket::connected,this, &Client::connectedToServer);
    connect(clientsocket, &QTcpSocket::bytesWritten,this,&Client::writingData);
    connect(clientsocket, &QTcpSocket::readyRead,this, &Client::readingData);
    connect(clientsocket, &QTcpSocket::disconnected,this, &Client::disconnectedFromServer);

}
void Client::connectedToServer(){
    qDebug() <<"connected successfully!\n";
    clientsocket->write("Hello!\n");


}
void Client::writingData(){
    qDebug() <<"written successfully!\n";

}
void Client::readingData(){
    QByteArray data = clientsocket->readAll();
    qDebug() << data <<"\n";
}
void Client::disconnectedFromServer(){
    qDebug() << "connection lost!\n";
}
