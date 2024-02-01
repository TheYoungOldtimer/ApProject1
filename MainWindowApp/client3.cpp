#include "client3.h"
#include "ui_client3.h"

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

int check1;
int check2;
int check3;
int check4;
int check5 = 1;
int checksum;

client3::client3(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::client3)
{
    ui->setupUi(this);
}

client3::~client3()
{
    delete ui;
}
QByteArray bytes;
QJsonObject JObj;
Member newMem("", "", "", "");
void client3::connectingToServer()
{
    checksum = check1 + check2 + check3 + check4 + check5;
    if (checksum != 5)
        ui->pushButton_2->setDisabled(true);
    else
        ui->pushButton_2->setEnabled(true);
    // book obj1(bookname,bookAuthor, bookPrice);

    //    JObj.insert("name", obj1.get_name().c_str());
    //    JObj.insert("price", obj1.get_price());
    //   JObj.insert("writer", obj1.get_writer().c_str());
    JObj.insert("Username", newMem.getUsername());
    JObj.insert("Email", newMem.getEmail());
    JObj.insert("Password", newMem.getPass());
    JObj.insert("Role", newMem.getRole());
    JObj.insert("Is a CEO?", newMem.getOrgManager());
    JObj.insert("Is a Manager", newMem.getTeamManager());

    QJsonDocument Doc;

    clientsocket = new QTcpSocket();
    clientsocket->connectToHost("127.0.0.1", 2039);
    ui->ted->setText("Connecting...\n");

    connect(clientsocket, &QTcpSocket::connected, this, &client3::connectedToServer);
    connect(clientsocket, &QTcpSocket::bytesWritten, this, &client3::writingData);
    connect(clientsocket, &QTcpSocket::readyRead, this, &client3::readingData);
    connect(clientsocket, &QTcpSocket::disconnected, this, &client3::disconnectedFromServer);
}

void client3::connectedToServer()
{

    QJsonDocument jsonOrg;
    bytes = ReadFile(JObj, jsonOrg, "C:/Users/armin.DESKTOP-R1F9757/OneDrive/Documents/AP/Source/Socket_JSON/member.json");

    ui->ted->append("connected successfully!\n");

    // QJsonDocument
    // clientsocket->write("Hello!\n");
}
void client3::writingData()
{
    ui->ted->append("Sending data!\n");
    // clientsocket->write(bytes);
    ui->ted->append("written successfully!\n");
}
void client3::readingData()
{
    ui->ted->append("Reading data!\n");
    QByteArray data = clientsocket->readAll();
    ui->ted->append(data);
}
void client3::disconnectedFromServer()
{
    ui->ted->append("connection lost!\n");
}

QByteArray client3::ReadFile(QJsonObject obj, QJsonDocument doc, QString path)
{

    QJsonDocument jsonOrg;
    QFile file(path);                    // json file
    if (!file.open(QIODevice::ReadOnly)) // read json content
    {
        // open file error ...
        ui->ted->append("File not open");
    }
    else
    {
        ui->ted->append("File is Open");
        jsonOrg = QJsonDocument::fromJson(file.readAll());
    }
    file.close();
    QJsonArray arrLog = jsonOrg.array();
    int flag = 0;
    for (const auto entry : arrLog)
    {
        const auto obj2 = entry.toObject();
        if (obj2["Email"] == obj["Email"])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        arrLog.push_back(obj);
        doc.setArray(arrLog);
    }
    QByteArray bytes = doc.toJson(QJsonDocument::Indented);

    return bytes;
}
void client3::WriteInFile(QByteArray bytes, QString path)
{
    QFile file(path);
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream iStream(&file);
        // iStream.setCodec("utf-8");
        iStream << bytes;
        file.close();
    }
    else
    {

        ui->ted->append("file open failed\n");
    }
}

void client3::on_pushButton_2_clicked()
{

    clientsocket->write(bytes);
    this->close();

    // clientsocket->write("hey\n");
}

void client3::on_nameEdit_textChanged(const QString &arg1)
{
    newMem.setUsername(arg1);
}

void client3::on_emailEdit_textChanged(const QString &arg1)
{
    newMem.setEmail(arg1);
    QJsonObject obj;
    obj.insert("Username", newMem.getUsername());
    obj.insert("Email", newMem.getEmail());
    obj.insert("Password", newMem.getPass());
    obj.insert("Role", newMem.getRole());
    obj.insert("Is a CEO?", newMem.getOrgManager());
    obj.insert("Is a Manager", newMem.getTeamManager());
    QJsonDocument jsonOrg;

    QJsonDocument doc;
    QString path = "C:/Users/armin.DESKTOP-R1F9757/OneDrive/Documents/AP/Source/Socket_JSON/member.json";
    QFile file(path);                    // json file
    if (!file.open(QIODevice::ReadOnly)) // read json content
    {
        // open file error ...
        ui->ted->append("File not open");
    }
    else
    {
        ui->ted->append("File is Open");
        jsonOrg = QJsonDocument::fromJson(file.readAll());
    }
    file.close();
    QJsonArray arrLog = jsonOrg.array();
    int flag = 0;
    for (const auto entry : arrLog)
    {
        const auto obj2 = entry.toObject();
        if (obj2["Email"] == obj["Email"])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        ui->memberExist->setText("A has member already signed up with this email!");
    else
    {
        ui->memberExist->setText("");
    }
}

void client3::on_passEdit_textChanged(const QString &arg1)
{
    newMem.setPass(arg1);
}
void client3::on_checkBox_stateChanged(int arg1)
{
    newMem.setOrgManager(arg1);
    newMem.setRole("CEO");
    // ui->ted->append(arg1);
}

void client3::on_checkBox_2_stateChanged(int arg1)
{
    newMem.setTeamManager(arg1);
    if (newMem.getRole() != "CEO")
        newMem.setRole("Manager");
}

// void client3::on_passNotSame_linkActivated(const QString &link)
// {
//     if (newMem.getPass() != arg1)
//     {
//         ui->passNotSame->setText("Passwords are not thw same! please check.")
//     }
// }

void client3::on_passRepeat_textChanged(const QString &arg1)
{
    if (newMem.getPass() != arg1)
    {
        ui->passNotSame->setText("Passwords are not the same! Please check");
    }
    else
    {
        ui->passNotSame->setText("");
        check4 = 1;
    }
}

void client3::on_checkBox_3_stateChanged(int arg1)
{
    // QString s=QString::number(arg1);
    // ui->memberExist->setText(s);
    client3::connectingToServer();
    if (arg1 == 2)
    {
        JObj.insert("Username", newMem.getUsername());
        JObj.insert("Email", newMem.getEmail());
        JObj.insert("Password", newMem.getPass());
        JObj.insert("Role", newMem.getRole());
        JObj.insert("Is a CEO?", newMem.getOrgManager());
        JObj.insert("Is a Manager", newMem.getTeamManager());
        check5 = 1;
        checksum = check1 + check2 + check3 + check4 + check5;
        if (checksum != 5)
        {
            ui->pushButton_2->setDisabled(true);
        }
        else
            ui->pushButton_2->setEnabled(true);
    }
    else
    {
        check5 = 0;
        checksum = check1 + check2 + check3 + check4 + check5;
        if (checksum != 5)
        {
            ui->pushButton_2->setDisabled(true);
        }
        else
            ui->pushButton_2->setEnabled(true);
    }
}

void client3::on_nameEdit_editingFinished()
{
    check1 = 1;
    checksum = check1 + check2 + check3 + check4 + check5;
    if (checksum != 5)
    {
        ui->pushButton_2->setDisabled(true);
    }
    else
        ui->pushButton_2->setEnabled(true);
}

void client3::on_emailEdit_editingFinished()
{
    check2 = 1;
    checksum = check1 + check2 + check3 + check4 + check5;
    if (checksum != 5)
    {
        ui->pushButton_2->setDisabled(true);
    }
    else
        ui->pushButton_2->setEnabled(true);
}

void client3::on_passEdit_editingFinished()
{
    check3 = 1;
    checksum = check1 + check2 + check3 + check4 + check5;
    if (checksum != 5)
    {
        ui->pushButton_2->setDisabled(true);
    }
    else
        ui->pushButton_2->setEnabled(true);
}

void client3::on_passRepeat_editingFinished()
{

    // check4=1;
    checksum = check1 + check2 + check3 + check4 + check5;
    if (checksum != 5)
    {
        ui->pushButton_2->setDisabled(true);
    }
    else
        ui->pushButton_2->setEnabled(true);
}
