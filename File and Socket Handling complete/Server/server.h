#ifndef SERVER_H
#define SERVER_H

#include <QWidget>
#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>


QT_BEGIN_NAMESPACE
namespace Ui { class Server; }
QT_END_NAMESPACE

class Server : public QMainWindow
{
    Q_OBJECT

public:
    Server(QWidget *parent = nullptr);
    ~Server();
    QByteArray ReadFile(QJsonObject obj, QJsonDocument doc,QString path);
    void WriteInFile(QByteArray &bytes,QString path);


private:
    Ui::Server *ui;
    QTcpSocket *mySocket;
    QTcpServer *myServer;
public slots:
    //void connectingToServer();

    void readingData();
    void writingData();
    void connectedToServer();
    void disconnectedFromServer();
    void newConnectionSlot();

private slots:
    void on_pushButton_clicked();
};
extern QByteArray bytes;
#endif // SERVER_H
