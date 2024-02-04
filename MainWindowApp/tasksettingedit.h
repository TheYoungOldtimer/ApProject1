#ifndef TASKSETTINGEDIT_H
#define TASKSETTINGEDIT_H

#include <QDialog>
#include "QTimer"
#include "QListWidget"
#include "QListWidgetItem"
#include <QJsonArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <iostream>
#include <QTextStream>
namespace Ui {
class tasksettingedit;
}

class tasksettingedit : public QDialog
{
    Q_OBJECT

public:
    explicit tasksettingedit(QWidget *parent,QJsonObject newobj);

    void append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path);
    ~tasksettingedit();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();



private:
    Ui::tasksettingedit *ui;
    QString newname;
    QJsonObject taskobj;
};

#endif // TASKSETTINGEDIT_H
