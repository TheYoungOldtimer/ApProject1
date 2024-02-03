#include "newprojectwin.h"
#include "ui_newprojectwin.h"

newprojectwin::newprojectwin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newprojectwin)
{
    ui->setupUi(this);
}

newprojectwin::~newprojectwin()
{
    delete ui;
}
