#include "neworganwindow.h"
#include "ui_neworganwindow.h"

neworganwindow::neworganwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::neworganwindow)
{
    ui->setupUi(this);
}

neworganwindow::~neworganwindow()
{
    delete ui;
}
