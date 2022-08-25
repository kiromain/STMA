#include "tchwindow.h"
#include "ui_tchwindow.h"
#include "tchwindow0.h"
#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QTextEdit>
#include <QStandardPaths>
#include <QDir>
#include <QDesktopServices>

tchwindow0 *tchWindow0;

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

void tchwindow::on_newfile_button_clicked()
{

    file_path = "";
    ui->textEdit->setText("");

}


void tchwindow::on_save_button_clicked()
{

    QFile file(file_path);
    if(!file.open(QFile::WriteOnly| QFile::Text)) {
        QMessageBox::warning(this,"..","file name is wrong");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}


void tchwindow::on_saveas_button_clicked()
{
    username = new tchwindow0;
    QString username2 = username->username();

    QString file_name = QFileDialog::getSaveFileName(this,"Open the file");

    QDir dir();
    QDir().exists();

    dir.mkpath(username2);
    QDesktopServices::openUrl(username2);
    QString newurl3 = username2 + file_name;
    file_path = newurl3;

    qDebug()<<newurl3;
    QFile file(file_path);
    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this,"..","file name is wrong");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();

}



void tchwindow::on_open_button_clicked()
{
    username = new tchwindow0;
    QString username2 = username->username();
    QString file_name = QFileDialog::getOpenFileName(this,"Open the file");
    //QString file_name = username2;
    QFile file(file_path);
    file_path=file_name;
    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this,"..","file name is wrong");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void tchwindow::on_edit_button_clicked()
{
    username = new tchwindow0;
    QString username2 = username->username();
    qDebug()<<username2;
    ui->textEdit->undo();
}


void tchwindow::on_return_button_clicked()
{
    hide();
    tchWindow0 = new tchwindow0;
    tchWindow0 ->show();
}

