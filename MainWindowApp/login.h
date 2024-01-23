#ifndef LOGIN_H
#define LOGIN_H

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
    explicit Login(QWidget *parent = nullptr);
    void ReadFile(QString path);
    ~Login();
public slots:

    void connectingToServer();
    void connectedToServer();
    void readingData();
    void writingData();

    void disconnectedFromServer();


private slots:



    void on_emailEdit_textChanged(const QString &arg1);

    void on_passEdit_textChanged(const QString &arg1);


private:
    Ui::Login *ui;
    QTcpSocket *clientsocket;
};
extern QByteArray bytes1;
extern QJsonObject JObj1;
extern QString email;
extern QString passw;

#endif // LOGIN_H
