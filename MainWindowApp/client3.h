#ifndef CLIENT3_H
#define CLIENT3_H

#include <QDialog>
#include <QTcpSocket>
using namespace std;

namespace Ui
{
    class client3;
}

class client3 : public QDialog
{
    Q_OBJECT

public:
    explicit client3(QWidget *parent = nullptr);
    QByteArray ReadFile(QJsonObject obj, QJsonDocument doc, QString path);
    void WriteInFile(QByteArray bytes, QString path);
    ~client3();
public slots:

    void connectingToServer();
    void connectedToServer();
    void readingData();
    void writingData();

    void disconnectedFromServer();

private slots:

    void on_pushButton_2_clicked();

    void on_nameEdit_textChanged(const QString &arg1);

    void on_emailEdit_textChanged(const QString &arg1);

    void on_passEdit_textChanged(const QString &arg1);

    void on_passRepeat_textChanged(const QString &arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_nameEdit_editingFinished();

    void on_emailEdit_editingFinished();

    void on_passEdit_editingFinished();

    void on_passRepeat_editingFinished();

    // void on_passNotSame_linkActivated(const QString &link);

private:
    Ui::client3 *ui;
    QTcpSocket *clientsocket;
};
extern QJsonObject JObj;
extern QByteArray bytes;

extern int check1;
extern int check2;
extern int check3;
extern int check4;
extern int check5;
extern int checksum;
#endif // CLIENT3_H
