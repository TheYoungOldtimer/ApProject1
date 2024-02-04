#ifndef PROJECTEDIT_H
#define PROJECTEDIT_H

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
class projectedit;
}

class projectedit : public QDialog
{
    Q_OBJECT

public:
    explicit projectedit(QWidget *parent , QJsonObject newobj);
    ~projectedit();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path);

private:
    Ui::projectedit *ui;
    QJsonObject currentproject;
    QString newprojectname;
};

#endif // PROJECTEDIT_H
