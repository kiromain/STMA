#include "stlog.h"
#include "ui_stlog.h"
#include <QString>
#include <QMessageBox>

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
    QString username = ui->lineEdit_stuser->text();
    QString password = ui->LineEdit_stpass->text();

    if(username == "kiromain" && password == "hoonmin24"){
        QMessageBox::information(this,"Login","Username ok");
        hide();
        stWindow = new stwindow;
        stWindow ->show();
    }else{
        QMessageBox::warning(this,"Login","Username not ok");
    }
}
