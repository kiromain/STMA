#include "tchwindow0.h"
#include "ui_tchwindow0.h"
#include <QString>
#include "mainwindow.h"
#include "tchwindow.h"
#include <QDebug>

MainWindow *mainwindow;
tchwindow *tchWindow;

tchwindow0::tchwindow0(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tchwindow0)
{
    ui->setupUi(this);
    //tchWindow = new tchwindow;
}

tchwindow0::~tchwindow0()
{
    delete ui;
    //delete tchWindow; tchWindow = nullptr;
}

void tchwindow0::on_select_button_clicked()
{

    hide();
    picked = ui->comboBox->currentText();
    tchWindow = new tchwindow;
    qDebug()<<picked;
    tchWindow -> show();
}

QString tchwindow0::username()
{
    return picked;
}

void tchwindow0::on_quit_button_clicked()
{
    hide();
    mainwindow = new MainWindow;
    mainwindow ->show();
}

