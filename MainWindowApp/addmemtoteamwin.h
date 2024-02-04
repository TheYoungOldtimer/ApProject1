#ifndef ADDMEMTOTEAMWIN_H
#define ADDMEMTOTEAMWIN_H

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
class addmemToteamwin;
}

class addmemToteamwin : public QDialog
{
    Q_OBJECT

public:
    explicit addmemToteamwin(QWidget *parent ,QString teamname);
    ~addmemToteamwin();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    bool findmember(QString email);
    void readdmember(QJsonObject obj);
    void deletemember(QString email);
    void on_pushButton_clicked();



private:
    Ui::addmemToteamwin *ui;
    QString mememail;
    QJsonObject memedited;
    QString team;
};

#endif // ADDMEMTOTEAMWIN_H
