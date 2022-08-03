#include "tchlog.h"
#include "ui_tchlog.h"

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

    if(username == "kiromain" && password == "hoonmin24"){
        hide();
        tchWindow = new tchwindow;
        tchWindow -> show();
    }
}

