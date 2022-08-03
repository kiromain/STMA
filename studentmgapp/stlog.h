#ifndef STLOG_H
#define STLOG_H

#include <QDialog>
#include "stwindow.h"

namespace Ui {
class stlog;
}

class stlog : public QDialog
{
    Q_OBJECT

public:
    explicit stlog(QWidget *parent = nullptr);
    ~stlog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::stlog *ui;
    stwindow *stWindow;
};

#endif // STLOG_H
