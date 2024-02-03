#include "newteamwindow.h"
#include "ui_newteamwindow.h"

newteamwindow::newteamwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newteamwindow)
{
    ui->setupUi(this);
}

newteamwindow::~newteamwindow()
{
    delete ui;
}
