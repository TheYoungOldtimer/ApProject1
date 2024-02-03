#ifndef EDITORGANWINDOW_H
#define EDITORGANWINDOW_H

#include <QDialog>
#include "organ.h"
#include "QListWidget"
#include "QListWidgetItem"
#include <QJsonArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <iostream>
#include <QTextStream>
namespace Ui {
class editorganwindow;
}

class editorganwindow : public QDialog
{
    Q_OBJECT

public:
    explicit editorganwindow(QWidget *parent ,QJsonObject currentorg);
    ~editorganwindow();

private slots:


    void on_lineEdit_textEdited(const QString &arg1);

    void append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path);

    void on_pushButton_clicked();

private:
    Ui::editorganwindow *ui;
    QString neworganname;
    QJsonObject neworg;
};

#endif // EDITORGANWINDOW_H
