#include "tchwindow0.h"
#include "ui_tchwindow0.h"
#include <QString>
#include "mainwindow.h"
#include "tchwindow.h"

MainWindow *mainwindow;
tchwindow *tchWindow;

tchwindow0::tchwindow0(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tchwindow0)
{
    ui->setupUi(this);
}

tchwindow0::~tchwindow0()
{
    delete ui;
}

QString tchwindow0::username()
{
    QString username2 = ui->comboBox->currentText();
    return username2;
}

void tchwindow0::on_select_button_clicked()
{
    tchWindow = new tchwindow;
    hide();
    tchWindow -> show();
}


void tchwindow0::on_quit_button_clicked()
{
    hide();
    mainwindow = new MainWindow;
    mainwindow ->show();
}

