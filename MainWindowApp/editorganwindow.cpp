#include "editorganwindow.h"
#include "ui_editorganwindow.h"

editorganwindow::editorganwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editorganwindow)
{
    ui->setupUi(this);
}

editorganwindow::~editorganwindow()
{
    delete ui;
}
