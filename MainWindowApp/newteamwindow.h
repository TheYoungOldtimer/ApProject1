#ifndef NEWTEAMWINDOW_H
#define NEWTEAMWINDOW_H

#include <QDialog>

namespace Ui {
class newteamwindow;
}

class newteamwindow : public QDialog
{
    Q_OBJECT

public:
    explicit newteamwindow(QWidget *parent = nullptr);
    ~newteamwindow();

private:
    Ui::newteamwindow *ui;
};

#endif // NEWTEAMWINDOW_H
