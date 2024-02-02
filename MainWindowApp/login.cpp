#include "login.h"
#include "ui_login.h"


#include "member.h"
#include <QPushButton>
#include <QtWidgets/QWidget>
#include <QAbstractSocket>
#include <QTcpSocket>
#include <QHostAddress>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <array>
#include <QFile>

QByteArray bytes1;
QJsonObject JObj1;
QString email;
QString passw;

Login::Login(QWidget *parent, quint16 port) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    port16 = port;
    ui->membernotFound->setText("");
}

Login::~Login()
{
    delete ui;
}
void Login::connectingToServer(){
    //checksum=check1+check2+check3+check4+check5;
    //if(checksum!=5)
    //    ui->pushButton_2->setDisabled(true);
    //else
    //    ui->pushButton_2->setEnabled(true);
    //book obj1(bookname,bookAuthor, bookPrice);

    //    JObj.insert("name", obj1.get_name().c_str());
    //    JObj.insert("price", obj1.get_price());
    //   JObj.insert("writer", obj1.get_writer().c_str());
    //JObj.insert("Username",newMem.getUsername());
    //JObj.insert("Email",newMem.getEmail());
    //JObj.insert("Password",newMem.getPass());
    //JObj.insert("Role",newMem.getRole());
    //JObj.insert("Is a CEO?",newMem.getOrgManager());
    //JObj.insert("Is a Manager",newMem.getTeamManager());

        QJsonDocument Doc;



    clientsocket = new QTcpSocket();
    clientsocket->connectToHost("127.0.0.1", port16);
    ui->ted->setText("Connecting...\n");

    connect(clientsocket, &QTcpSocket::connected,this, &Login::connectedToServer);
    connect(clientsocket, &QTcpSocket::bytesWritten,this,&Login::writingData);
    connect(clientsocket, &QTcpSocket::readyRead,this, &Login::readingData);
    connect(clientsocket, &QTcpSocket::disconnected,this, &Login::disconnectedFromServer);

}
void Login::connectedToServer(){


    ReadFile("member.json");

    ui->ted->append("connected successfully!\n");

    //QJsonDocument
    //clientsocket->write("Hello!\n");


}
void Login::writingData(){
    ui->ted->append("Sending data!\n");
    //clientsocket->write(bytes);
    ui->ted->append("written successfully!\n");

}
void Login::readingData(){
    ui->ted->append("Reading data!\n");
    QByteArray data = clientsocket->readAll();
    ui->ted->append(data);
}
void Login::disconnectedFromServer(){
    ui->ted->append("connection lost!\n");
}
void Login::ReadFile(QString path){

    QJsonDocument jsonOrg;
    QFile file(path); // json file
        if( !file.open( QIODevice::ReadOnly ) ) //read json content
        {
            //open file error ...
            ui->ted->append("File not open");
        }
        else{
            ui->ted->append("File is Open");
            jsonOrg = QJsonDocument::fromJson( file.readAll() );}
        file.close();
        QJsonArray arrLog = jsonOrg.array();
        bool flag=false;
        for (const auto entry: arrLog) {
            const auto obj2 = entry.toObject();
                if (obj2["Email"].toString() == email) {
                      JObj1=obj2;
                      flag=true;
                      break;
                      }
                    }
        if(flag==false){
            ui->membernotFound->setText("No member with this Email address was found!");
            ui->pushButton->setDisabled(true);
        }
        else{
            //ui->pushButton->setEnabled(true);
            ui->membernotFound->setText("");
        }

}
void Login::lockBotton(){
    ui->pushButton->setDisabled(true);
    ui->timeout->setText("Connection Failed!\nPlease try again.");
}





void Login::on_emailEdit_textChanged(const QString &arg1)
{
    email=arg1;
    connectingToServer();
    //ReadFile("member.json");
}

void Login::on_passEdit_textChanged(const QString &arg1)
{
    passw=arg1;
    if(passw == JObj1["Password"].toString()){
        ui->wrongpass->setText("");
        ui->pushButton->setEnabled(true);
    }
    else{
        ui->wrongpass->setText("Worng password!");
        ui->pushButton->setDisabled(true);
    }
}

void Login::on_pushButton_clicked()
{
    this->close();
    temp = new Member();
    temp->setPass(JObj1["password"].toString());
    temp->setEmail(JObj1["email"].toString());
    temp->setRole(JObj1["role"].toString());
    temp->setUsername(JObj1["username"].toString());
    temp->setOrgManager(JObj1["Is a CEO?"].toBool());
    temp->setTeamManager(JObj1["Is a Manager"].toBool());

    newloginmem = new memberMain(this,*temp);


    newloginmem->show();

}
