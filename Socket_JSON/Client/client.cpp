#include "client.h"


#include "file.h"
#include <QPushButton>
#include <QtWidgets/QWidget>
#include <QAbstractSocket>
#include <QTcpSocket>
#include <QHostAddress>
#include <QVBoxLayout>
#include <QTextEdit>

Client::Client(QWidget *parent)
    : QWidget(parent)
{

    mainlayout = new QVBoxLayout();
    pbnConnect = new QPushButton("connect");
    ted  = new QTextEdit("Press button to connect");
    mainlayout->addWidget(pbnConnect);
    mainlayout->addWidget(ted);
    setLayout(mainlayout);

    connect(pbnConnect,SIGNAL(clicked()),this,SLOT(connectingToServer()));
}
void Client::connectingToServer(){
    clientsocket = new QTcpSocket();
    clientsocket->connectToHost("127.0.0.1", 2039);
    ted->setText("Connecting...\n");

    connect(clientsocket, &QTcpSocket::connected,this, &Client::connectedToServer);
    connect(clientsocket, &QTcpSocket::bytesWritten,this,&Client::writingData);
    connect(clientsocket, &QTcpSocket::readyRead,this, &Client::readingData);
    connect(clientsocket, &QTcpSocket::disconnected,this, &Client::disconnectedFromServer);

}
void Client::connectedToServer(){
    ted->append("connected successfully!\n");
    clientsocket->write("Hello!\n");


}
void Client::writingData(){
    ted->append("written successfully!\n");

}
void Client::readingData(){
    QByteArray data = clientsocket->readAll();
    ted->append(data);
}
void Client::disconnectedFromServer(){
    ted->append("connection lost!\n");
}

Client::~Client()
{

}

