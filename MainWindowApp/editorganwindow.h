#ifndef EDITORGANWINDOW_H
#define EDITORGANWINDOW_H

#include <QDialog>

namespace Ui {
class editorganwindow;
}

class editorganwindow : public QDialog
{
    Q_OBJECT

public:
    explicit editorganwindow(QWidget *parent = nullptr);
    ~editorganwindow();

private:
    Ui::editorganwindow *ui;
};

#endif // EDITORGANWINDOW_H
