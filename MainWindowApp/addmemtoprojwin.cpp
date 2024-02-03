#include "addmemtoprojwin.h"
#include "ui_addmemtoprojwin.h"

addmemtoprojwin::addmemtoprojwin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addmemtoprojwin)
{
    ui->setupUi(this);
}

addmemtoprojwin::~addmemtoprojwin()
{
    delete ui;
}
