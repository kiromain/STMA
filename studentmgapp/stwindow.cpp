#include "stwindow.h"
#include "ui_stwindow.h"

stwindow::stwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stwindow)
{
    ui->setupUi(this);
}

stwindow::~stwindow()
{
    delete ui;
}
