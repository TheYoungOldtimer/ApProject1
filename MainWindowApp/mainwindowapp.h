#ifndef MAINWINDOWAPP_H
#define MAINWINDOWAPP_H

#include <QMainWindow>
#include <QTreeWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowApp; }
QT_END_NAMESPACE

class MainWindowApp : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowApp(QWidget *parent = nullptr);
    ~MainWindowApp();

private slots:


    void on_signupmember_clicked();

    void on_Loginmember_clicked();

private:
    Ui::MainWindowApp *ui;
};
#endif // MAINWINDOWAPP_H
