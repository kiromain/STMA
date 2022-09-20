#include "stlog.h"
#include "ui_stlog.h"
#include <QString>
#include <QMessageBox>
#include "mainwindow.h"
#include <QDebug>

MainWindow *mainwindow1;

stlog::stlog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stlog)
{
    ui->setupUi(this);
}

stlog::~stlog()
{
    delete ui;
}

void stlog::on_pushButton_clicked()
{
    QString username1 = ui->lineEdit_stuser->text();
    QString password = ui->LineEdit_stpass->text();

    if(username1 == "kiromain" && password == "kiromain"){
        hide();
        stWindow = new stwindow;
        stWindow -> show();
    }else{
        QMessageBox::warning(this,"Login","Username or password is incorrect");
    }
}


void stlog::on_return_button_clicked()
{
    hide();
    mainwindow1 = new MainWindow;
    mainwindow1 ->show();
}

