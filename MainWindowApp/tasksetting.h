#ifndef TASKSETTING_H
#define TASKSETTING_H

#include <QDialog>

namespace Ui {
class tasksetting;
}

class tasksetting : public QDialog
{
    Q_OBJECT

public:
    explicit tasksetting(QWidget *parent = nullptr);
    ~tasksetting();

private:
    Ui::tasksetting *ui;
};

#endif // TASKSETTING_H
