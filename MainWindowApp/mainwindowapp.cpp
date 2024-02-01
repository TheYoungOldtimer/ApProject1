#include "mainwindowapp.h"
#include "ui_mainwindowapp.h"
#include "client3.h"
#include "member.h"
#include "server1.h"
#include "login.h"

MainWindowApp::MainWindowApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowApp)
{
    ui->setupUi(this);
}

MainWindowApp::~MainWindowApp()
{
    delete ui;
}



void MainWindowApp::on_signupmember_clicked()
{
    Server1 *sv = new Server1();
    sv->show();
    client3 * cl = new client3();
    cl->show();
    cl->connectingToServer();
}

void MainWindowApp::on_Loginmember_clicked()
{
    this->close();
    Server1 *sv = new Server1();
    sv->show();
    Login * lg = new Login();
    lg->show();
    lg->connectingToServer();
}
