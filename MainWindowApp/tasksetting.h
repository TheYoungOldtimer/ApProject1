#ifndef TASKSETTING_H
#define TASKSETTING_H

#include <QDialog>
#include "task.h"
namespace Ui {
class tasksetting;
}

class tasksetting : public QDialog
{
    Q_OBJECT

public:
    task* newtask;
    explicit tasksetting(QWidget *parent = nullptr);
    ~tasksetting();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);
    void on_pushButton_clicked();
    void add_to_file(QJsonObject obj, QJsonDocument doc, QString path);

public slots:




    void lockBotton();
private:
    Ui::tasksetting *ui;
};

#endif // TASKSETTING_H
