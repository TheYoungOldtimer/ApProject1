#ifndef NEWORGANWINDOW_H
#define NEWORGANWINDOW_H

#include <QDialog>

namespace Ui {
class neworganwindow;
}

class neworganwindow : public QDialog
{
    Q_OBJECT

public:
    explicit neworganwindow(QWidget *parent = nullptr);
    ~neworganwindow();

private:
    Ui::neworganwindow *ui;
};

#endif // NEWORGANWINDOW_H
