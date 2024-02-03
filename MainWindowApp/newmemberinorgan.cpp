#include "newmemberinorgan.h"
#include "ui_newmemberinorgan.h"

newmemberinOrgan::newmemberinOrgan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newmemberinOrgan)
{
    ui->setupUi(this);
}

newmemberinOrgan::~newmemberinOrgan()
{
    delete ui;
}
