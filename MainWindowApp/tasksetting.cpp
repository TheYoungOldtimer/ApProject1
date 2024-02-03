#include "tasksetting.h"
#include "ui_tasksetting.h"

tasksetting::tasksetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tasksetting)
{
    ui->setupUi(this);
}

tasksetting::~tasksetting()
{
    delete ui;
}
