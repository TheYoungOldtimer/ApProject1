#ifndef TEAMEDIT_H
#define TEAMEDIT_H

#include <QDialog>
#include "team.h"
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
class teamedit;
}

class teamedit : public QDialog
{
    Q_OBJECT

public:
    explicit teamedit(QWidget *parent , QJsonObject currentteam);
    ~teamedit();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path);

private:
    Ui::teamedit *ui;
    QJsonObject newteam;
    QString newname;
};

#endif // TEAMEDIT_H
