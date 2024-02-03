#ifndef NEWMEMBERINORGAN_H
#define NEWMEMBERINORGAN_H

#include <QDialog>
#include "QListWidget"
#include "QListWidgetItem"
#include <QJsonArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <iostream>
#include <QTextStream>
namespace Ui {
class newmemberinOrgan;
}

class newmemberinOrgan : public QDialog
{
    Q_OBJECT

public:
    explicit newmemberinOrgan(QWidget *parent ,QString organname);
    ~newmemberinOrgan();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    bool findmember(QString email);
    void readdmember(QJsonObject obj);
    void deletemember(QString email);
    void on_pushButton_clicked();

private:
    Ui::newmemberinOrgan *ui;
    QString mememail;
    QString orgname;
    QJsonObject memedited;

};

#endif // NEWMEMBERINORGAN_H
