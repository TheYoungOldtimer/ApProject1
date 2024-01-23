#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QTcpSocket>
using namespace std;
namespace Ui {
class Client;
}

class Client : public QDialog
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    QByteArray ReadFile(QJsonObject obj, QJsonDocument doc,QString path);
    void WriteInFile(QByteArray bytes,QString path);
    ~Client();
public slots:

    void connectingToServer();
    void connectedToServer();
    void readingData();
    void writingData();

    void disconnectedFromServer();


private slots:
    void on_bookName_textEdited(const QString &arg1);

    void on_bookPrice_textEdited(const QString &arg1);



    void on_book_author_textEdited(const QString &arg1);

    void on_pushButton_2_clicked();

private:
    Ui::Client *ui;
    QTcpSocket *clientsocket;
};
extern QJsonObject book1;
extern string bookname;
extern string bookAuthor;
extern int bookPrice;
extern QByteArray bytes;

#endif // CLIENT_H
