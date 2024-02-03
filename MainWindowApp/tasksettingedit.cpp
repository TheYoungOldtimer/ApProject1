#include "tasksettingedit.h"
#include "ui_tasksettingedit.h"

tasksettingedit::tasksettingedit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tasksettingedit)
{
    ui->setupUi(this);
}

tasksettingedit::~tasksettingedit()
{
    delete ui;
}
