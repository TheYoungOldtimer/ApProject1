#include "teamedit.h"
#include "ui_teamedit.h"

teamedit::teamedit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::teamedit)
{
    ui->setupUi(this);
}

teamedit::~teamedit()
{
    delete ui;
}
