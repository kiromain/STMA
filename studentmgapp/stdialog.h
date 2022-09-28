#ifndef STDIALOG_H
#define STDIALOG_H

#include <QDialog>

namespace Ui {
class stdialog;
}

class stdialog : public QDialog
{
    Q_OBJECT

public:
    explicit stdialog(QWidget *parent = nullptr);
    ~stdialog();

private:
    Ui::stdialog *ui;
};

#endif // STDIALOG_H
