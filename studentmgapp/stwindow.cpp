#include "stwindow.h"
#include "ui_stwindow.h"
#include "mainwindow.h"

MainWindow *mainwindow3;

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

void stwindow::on_quit_button_clicked()
{
    hide();
    mainwindow3 = new MainWindow;
    mainwindow3 -> show();
}

