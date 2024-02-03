#include "memberrolewindow.h"
#include "ui_memberrolewindow.h"

memberrolewindow::memberrolewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberrolewindow)
{
    ui->setupUi(this);
}

memberrolewindow::~memberrolewindow()
{
    delete ui;
}
