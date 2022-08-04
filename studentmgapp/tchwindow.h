#ifndef TCHWINDOW_H
#define TCHWINDOW_H

#include <QDialog>

namespace Ui {
class tchwindow;
}

class tchwindow : public QDialog
{
    Q_OBJECT

public:
    explicit tchwindow(QWidget *parent = nullptr);
    ~tchwindow();

private:
    Ui::tchwindow *ui;

};

#endif // TCHWINDOW_H
