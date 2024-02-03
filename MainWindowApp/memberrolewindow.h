#ifndef MEMBERROLEWINDOW_H
#define MEMBERROLEWINDOW_H

#include <QDialog>

namespace Ui {
class memberrolewindow;
}

class memberrolewindow : public QDialog
{
    Q_OBJECT

public:
    explicit memberrolewindow(QWidget *parent = nullptr);
    ~memberrolewindow();

private:
    Ui::memberrolewindow *ui;
};

#endif // MEMBERROLEWINDOW_H
