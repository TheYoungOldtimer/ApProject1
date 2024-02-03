#include "addmemtoteamwin.h"
#include "ui_addmemtoteamwin.h"

addmemToteamwin::addmemToteamwin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addmemToteamwin)
{
    ui->setupUi(this);
}

addmemToteamwin::~addmemToteamwin()
{
    delete ui;
}
