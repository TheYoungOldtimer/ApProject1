#ifndef NEWPROJECTWIN_H
#define NEWPROJECTWIN_H

#include <QDialog>

namespace Ui {
class newprojectwin;
}

class newprojectwin : public QDialog
{
    Q_OBJECT

public:
    explicit newprojectwin(QWidget *parent = nullptr);
    ~newprojectwin();

private:
    Ui::newprojectwin *ui;
};

#endif // NEWPROJECTWIN_H
