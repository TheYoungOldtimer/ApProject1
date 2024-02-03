#ifndef ADDMEMTOTEAMWIN_H
#define ADDMEMTOTEAMWIN_H

#include <QDialog>

namespace Ui {
class addmemToteamwin;
}

class addmemToteamwin : public QDialog
{
    Q_OBJECT

public:
    explicit addmemToteamwin(QWidget *parent = nullptr);
    ~addmemToteamwin();

private:
    Ui::addmemToteamwin *ui;
};

#endif // ADDMEMTOTEAMWIN_H
