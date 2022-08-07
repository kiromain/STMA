#include "tchlog.h"
#include "ui_tchlog.h"
#include <QMessageBox>
#include "mainwindow.h"

MainWindow *mainwindow2;

tchlog::tchlog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tchlog)
{
    ui->setupUi(this);
}

tchlog::~tchlog()
{
    delete ui;
}

void tchlog::on_pushButton_2_clicked()
{
    QString username = ui ->lineEdit_tchuser->text();
    QString password = ui ->lineEdit_tchpass->text();

    if(username == "test" && password == "test"){
        hide();
        tchWindow0 = new tchwindow0;
        tchWindow0 -> show();
    }else{
        QMessageBox::warning(this,"Login","Username or password is incorrect");
    }
}


void tchlog::on_return_button_clicked()
{
    hide();
    mainwindow2 = new MainWindow;
    mainwindow2 -> show();
}

