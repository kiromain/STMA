#ifndef STWINDOW_H
#define STWINDOW_H

#include <QDialog>

namespace Ui {
class stwindow;
}

class stwindow : public QDialog
{
    Q_OBJECT

public:
    explicit stwindow(QWidget *parent = nullptr);
    ~stwindow();

private:
    Ui::stwindow *ui;
};

#endif // STWINDOW_H
