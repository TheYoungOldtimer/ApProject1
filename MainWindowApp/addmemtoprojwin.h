#ifndef ADDMEMTOPROJWIN_H
#define ADDMEMTOPROJWIN_H

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
class addmemtoprojwin;
}

class addmemtoprojwin : public QDialog
{
    Q_OBJECT

public:
    explicit addmemtoprojwin(QWidget *parent, QString );
    ~addmemtoprojwin();

private slots:
    bool findmember(QString email);
    void readdmember(QJsonObject obj);
    void deletemember(QString email);
    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::addmemtoprojwin *ui;
    QString projectname;
    QJsonObject memedited;
    QString mememail;
};

#endif // ADDMEMTOPROJWIN_H
