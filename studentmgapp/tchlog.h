#ifndef TCHLOG_H
#define TCHLOG_H

#include <QDialog>
#include "tchwindow.h"

namespace Ui {
class tchlog;
}

class tchlog : public QDialog
{
    Q_OBJECT

public:
    explicit tchlog(QWidget *parent = nullptr);
    ~tchlog();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::tchlog *ui;
    tchwindow *tchWindow;
};

#endif // TCHLOG_H
