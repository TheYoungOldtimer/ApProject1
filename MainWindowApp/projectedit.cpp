#include "projectedit.h"
#include "ui_projectedit.h"

projectedit::projectedit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::projectedit)
{
    ui->setupUi(this);
}

projectedit::~projectedit()
{
    delete ui;
}
