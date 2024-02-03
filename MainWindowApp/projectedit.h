#ifndef PROJECTEDIT_H
#define PROJECTEDIT_H

#include <QDialog>

namespace Ui {
class projectedit;
}

class projectedit : public QDialog
{
    Q_OBJECT

public:
    explicit projectedit(QWidget *parent = nullptr);
    ~projectedit();

private:
    Ui::projectedit *ui;
};

#endif // PROJECTEDIT_H
