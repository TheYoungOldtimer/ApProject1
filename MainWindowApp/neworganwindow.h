#ifndef NEWORGANWINDOW_H
#define NEWORGANWINDOW_H

#include <QDialog>
#include "organ.h"
#include <QJsonArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <iostream>
#include <QTextStream>
#include <QTimer>
#include <QListWidget>
#include <QListWidgetItem>
namespace Ui {
class neworganwindow;
}

class neworganwindow : public QDialog
{
    Q_OBJECT

public:
    explicit neworganwindow(QWidget *parent, organ currentorgan);
    ~neworganwindow();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path);

private:
    Ui::neworganwindow *ui;
    QString name;


    organ neworgan;
};

#endif // NEWORGANWINDOW_H
