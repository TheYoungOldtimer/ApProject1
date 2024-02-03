#ifndef TASKSETTINGEDIT_H
#define TASKSETTINGEDIT_H

#include <QDialog>

namespace Ui {
class tasksettingedit;
}

class tasksettingedit : public QDialog
{
    Q_OBJECT

public:
    explicit tasksettingedit(QWidget *parent = nullptr);
    ~tasksettingedit();

private:
    Ui::tasksettingedit *ui;
};

#endif // TASKSETTINGEDIT_H
