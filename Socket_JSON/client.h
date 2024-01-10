#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
class Client :public QObject
{
    Q_OBJECT
public:

    Client();
    ~Client();
public slots:
    void connectingToServer();
    void readingData();
    void writingData();
    void connectedToServer();
    void disconnectedFromServer();


private:
    QTcpSocket *clientsocket;
    //QTextEdit *ted;
    //QVBoxLayout *mainlayout;
    //QPushButton *pbnConnect;
};

#endif // CLIENT_H
