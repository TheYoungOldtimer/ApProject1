#ifndef NEWTEAMWINDOW_H
#define NEWTEAMWINDOW_H

#include <QDialog>
#include "team.h"
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
class newteamwindow;
}

class newteamwindow : public QDialog
{
    Q_OBJECT

public:

    explicit newteamwindow(QWidget *parent, team newteam);
    ~newteamwindow();

private slots:
    void on_teamname_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path);

private:
    Ui::newteamwindow *ui;
    QString name;
    QString taskname;
    QString projectname;
    team *newteam;

};

#endif // NEWTEAMWINDOW_H
