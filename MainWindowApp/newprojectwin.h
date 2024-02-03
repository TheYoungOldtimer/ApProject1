#ifndef NEWPROJECTWIN_H
#define NEWPROJECTWIN_H

#include <QDialog>
#include "project.h"
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
class newprojectwin;
}

class newprojectwin : public QDialog
{
    Q_OBJECT

public:
    explicit newprojectwin(QWidget *parent, project proj);
    ~newprojectwin();

private slots:
    void on_newprojectname_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void append_toa_jfile(QJsonObject obj, QJsonDocument doc, QString path);

private:
    Ui::newprojectwin *ui;
    project *newproject;
};

#endif // NEWPROJECTWIN_H
