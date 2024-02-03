#ifndef LOGIN_H
#define LOGIN_H
#include "membermain.h"
#include <QDialog>
#include <QTcpSocket>
using namespace std;

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent , quint16 port);
    void ReadFile(QString path);
    ~Login();
public slots:

    void connectingToServer();
    void connectedToServer();
    void readingData();
    void writingData();

    void disconnectedFromServer();
    void lockBotton();


private slots:



    void on_emailEdit_textChanged(const QString &arg1);

    void on_passEdit_textChanged(const QString &arg1);


    void on_pushButton_clicked();


private:
    Ui::Login *ui;
    QTcpSocket *clientsocket;
    memberMain *newloginmem;
    Member *temp;
    quint16 port16;

};
extern QByteArray bytes1;
extern QJsonObject JObj1;
extern QString email;
extern QString passw;

#endif // LOGIN_H
