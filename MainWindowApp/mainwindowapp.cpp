#include "mainwindowapp.h"
#include "ui_mainwindowapp.h"
#include "client3.h"
#include <QTimer>
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
    Server1 *sv = new Server1(this,2030);
    sv->show();
    client3 * cl = new client3(this,2030);
    cl->show();
    cl->connectingToServer();
    QTimer *timer= new QTimer(this);
    connect(timer, SIGNAL(timeout()), sv, SLOT(close()));
    connect(timer, SIGNAL(timeout()), cl, SLOT(timeouted()));
    timer->start(30000);
}

void MainWindowApp::on_Loginmember_clicked()
{
    this->close();
    Server1 *sv1 = new Server1(this,2040);
    sv1->show();
    Login * lg = new Login(this,2040);
    lg->show();
    lg->connectingToServer();
    QTimer *timer= new QTimer(this);
    connect(timer, SIGNAL(timeout()), lg, SLOT(lockBotton()));
    connect(timer, SIGNAL(timeout()), sv1, SLOT(close()));
    timer->start(30000);




}
