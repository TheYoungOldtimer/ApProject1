#ifndef MEMBERROLEWINDOW_H
#define MEMBERROLEWINDOW_H

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
class memberrolewindow;
}

class memberrolewindow : public QDialog
{
    Q_OBJECT

public:
    explicit memberrolewindow(QWidget *parent ,QString mem);
    ~memberrolewindow();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    bool findmember(QString email);
    void readdmember(QJsonObject obj);
    void deletemember(QString email);

    void on_pushButton_clicked();

private:
    Ui::memberrolewindow *ui;
    QString memberemail;
    QString newrole;
    QJsonObject memedited;
};

#endif // MEMBERROLEWINDOW_H
