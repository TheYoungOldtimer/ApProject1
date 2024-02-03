#ifndef MEMBERMAIN_H
#define MEMBERMAIN_H

#include <QDialog>

namespace Ui {
class memberMain;
}

class memberMain : public QDialog
{
    Q_OBJECT

public:
    explicit memberMain(QWidget *parent = nullptr);
    ~memberMain();

private:
    Ui::memberMain *ui;
};

#endif // MEMBERMAIN_H
