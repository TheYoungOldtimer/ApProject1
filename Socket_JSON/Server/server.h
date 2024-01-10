#ifndef SERVER_H
#define SERVER_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>




class Server : public QWidget
{
    Q_OBJECT

public:
    Server(QWidget *parent = nullptr);
    ~Server();

private:
    QTcpSocket *mySocket;
    QTcpServer *myServer;
public slots:
    //void connectingToServer();
    void readingData();
    void writingData();
    void connectedToServer();
    void disconnectedFromServer();
    void newConnectionSlot();

};
#endif // SERVER_H
