#include "membermain.h"
#include "ui_membermain.h"

memberMain::memberMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberMain)
{
    ui->setupUi(this);
}

memberMain::~memberMain()
{
    delete ui;
}
