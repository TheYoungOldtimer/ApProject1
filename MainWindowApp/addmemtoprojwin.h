#ifndef ADDMEMTOPROJWIN_H
#define ADDMEMTOPROJWIN_H

#include <QDialog>

namespace Ui {
class addmemtoprojwin;
}

class addmemtoprojwin : public QDialog
{
    Q_OBJECT

public:
    explicit addmemtoprojwin(QWidget *parent = nullptr);
    ~addmemtoprojwin();

private:
    Ui::addmemtoprojwin *ui;
};

#endif // ADDMEMTOPROJWIN_H
