#ifndef TEAMEDIT_H
#define TEAMEDIT_H

#include <QDialog>

namespace Ui {
class teamedit;
}

class teamedit : public QDialog
{
    Q_OBJECT

public:
    explicit teamedit(QWidget *parent = nullptr);
    ~teamedit();

private:
    Ui::teamedit *ui;
};

#endif // TEAMEDIT_H
