#include "stdialog.h"
#include "ui_stdialog.h"

stdialog::stdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stdialog)
{
    ui->setupUi(this);
}

stdialog::~stdialog()
{
    delete ui;
}
