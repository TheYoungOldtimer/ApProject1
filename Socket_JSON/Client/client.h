#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>

#include "file.h"
#include <QMainWindow>
#include <QTcpSocket>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>

//QT_BEGIN_NAMESPACE
//namespace Ui { class Client; }
//QT_END_NAMESPACE

class Client : public QWidget
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    ~Client();
public slots:
    void connectingToServer();
    void readingData();
    void writingData();
    void connectedToServer();
    void disconnectedFromServer();


private:
    QTcpSocket *clientsocket;
    QTextEdit *ted;
    QVBoxLayout *mainlayout;
    QPushButton *pbnConnect;


};
#endif // CLIENT_H
