#include "client2.h"
#include "ui_client.h"

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
Client::Client(QWidget *parent) : QDialog(parent),
                                  ui(new Ui::Client)
{
    ui->setupUi(this);
}

Client::~Client()
{
    delete ui;
}
QJsonObject book1;
void Client::connectingToServer()
{
    book obj1(bookname, bookAuthor, bookPrice);

    book1.insert("name", obj1.get_name().c_str());
    book1.insert("price", obj1.get_price());
    book1.insert("writer", obj1.get_writer().c_str());
    QJsonDocument Doc;

    clientsocket = new QTcpSocket();
    clientsocket->connectToHost("127.0.0.1", 2039);
    ui->ted->setText("Connecting...\n");

    connect(clientsocket, &QTcpSocket::connected, this, &Client::connectedToServer);
    connect(clientsocket, &QTcpSocket::bytesWritten, this, &Client::writingData);
    connect(clientsocket, &QTcpSocket::readyRead, this, &Client::readingData);
    connect(clientsocket, &QTcpSocket::disconnected, this, &Client::disconnectedFromServer);
}
QByteArray bytes;
void Client::connectedToServer()
{

    QJsonDocument jsonOrg;
    bytes = ReadFile(book1, jsonOrg, "C:/Users/armin.DESKTOP-R1F9757/OneDrive/Documents/AP/Source/Socket_JSON/book.json");

    ui->ted->append("connected successfully!\n");

    // QJsonDocument
    // clientsocket->write("Hello!\n");
}
void Client::writingData()
{
    ui->ted->append("Sending data!\n");
    // clientsocket->write(bytes);
    ui->ted->append("written successfully!\n");
}
void Client::readingData()
{
    ui->ted->append("Reading data!\n");
    QByteArray data = clientsocket->readAll();
    ui->ted->append(data);
}
void Client::disconnectedFromServer()
{
    ui->ted->append("connection lost!\n");
}

string bookname;
string bookAuthor;
int bookPrice;

void Client::on_bookName_textEdited(const QString &arg1)
{
    bookname = arg1.toStdString();
}
void Client::on_bookPrice_textEdited(const QString &arg1)
{
    bookPrice = arg1.toInt();
}
void Client::on_book_author_textEdited(const QString &arg1)
{
    bookAuthor = arg1.toStdString();
}
QByteArray Client::ReadFile(QJsonObject obj, QJsonDocument doc, QString path)
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
        if (obj2["name"] == obj["name"])
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
void Client::WriteInFile(QByteArray bytes, QString path)
{
    QFile file(path);
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream iStream(&file);
        iStream.setCodec("utf-8");
        iStream << bytes;
        file.close();
    }
    else
    {

        ui->ted->append("file open failed\n");
    }
}

void Client::on_pushButton_2_clicked()
{
    clientsocket->write(bytes);
    // clientsocket->write("hey\n");
}
