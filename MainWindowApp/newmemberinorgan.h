#ifndef NEWMEMBERINORGAN_H
#define NEWMEMBERINORGAN_H

#include <QDialog>

namespace Ui {
class newmemberinOrgan;
}

class newmemberinOrgan : public QDialog
{
    Q_OBJECT

public:
    explicit newmemberinOrgan(QWidget *parent = nullptr);
    ~newmemberinOrgan();

private:
    Ui::newmemberinOrgan *ui;
};

#endif // NEWMEMBERINORGAN_H
