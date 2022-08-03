#include "tchwindow.h"
#include "ui_tchwindow.h"

tchwindow::tchwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tchwindow)
{
    ui->setupUi(this);
}

tchwindow::~tchwindow()
{
    delete ui;
}
