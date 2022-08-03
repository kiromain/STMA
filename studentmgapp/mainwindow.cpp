#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}


MainWindow::~MainWindow()
{
    delete ui;
}    



void MainWindow::on_StudentLog_clicked()
{
    hide();
    stdial = new stlog;
    stdial ->show();
}


void MainWindow::on_TeacherLog_clicked()
{
    hide();
    tchdial = new tchlog;
    tchdial ->show();
}


void MainWindow::on_Quit_clicked()
{
    QApplication::quit();
}

