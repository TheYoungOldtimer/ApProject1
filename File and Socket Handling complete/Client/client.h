#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>

#include "file.h"

#include <QTcpSocket>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE


class Client : public QMainWindow
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
    //QTextEdit *ted;
    //QVBoxLayout *mainlayout;
    //QPushButton *pbnConnect;


};
extern QJsonObject book1;
extern string bookname;
extern string bookAuthor;
extern int bookPrice;
extern QByteArray bytes;
#endif // CLIENT_H
