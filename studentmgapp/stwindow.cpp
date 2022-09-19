#include "stwindow.h"
#include "ui_stwindow.h"
#include "mainwindow.h"
#include "stlog.h"
#include <QDebug>

MainWindow *mainwindow3;
stlog *username;

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


void stwindow::on_pushButton_clicked()
{
    username = new stlog;
    QString username1 = username->username();
    qDebug()<<username1;
}

