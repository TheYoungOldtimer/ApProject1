#ifndef SERVER1_H
#define SERVER1_H

#include <QWidget>
#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDialog>

namespace Ui {
class Server1;
}

class Server1 : public QDialog
{
    Q_OBJECT

public:
    explicit Server1(QWidget *parent,quint16 port);
    ~Server1();

    QByteArray ReadFile(QJsonObject obj, QJsonDocument doc,QString path);
    void WriteInFile(QByteArray &bytes,QString path);



private:
    Ui::Server1 *ui;
    QTcpSocket *mySocket;
    QTcpServer *myServer;
public slots:
    //void connectingToServer();

    void readingData();
    void writingData();
    void connectedToServer();
    void disconnectedFromServer();
    void newConnectionSlot();
    // void serverclose(Server1);


private slots:

};
extern QByteArray bytes;

#endif // SERVER1_H
