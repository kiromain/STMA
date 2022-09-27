#include "stwindow.h"
#include "ui_stwindow.h"
#include "mainwindow.h"
#include <QDebug>
#include <QDir>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>

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


void stwindow::on_pushButton_clicked()
{
    QDir dir("kiromain");
    foreach (QFileInfo var, dir.drives()) {
        ui->comboBox->addItem("kiromain");
    }
    foreach(QFileInfo var, dir.entryInfoList()){
        ui->listWidget->addItem(var.fileName());
    }
}


void stwindow::on_pushButton_2_clicked()
{
    QString selected = ui->listWidget->currentItem()->text();

    QDir dir("");
    QString folder_path = dir.absoluteFilePath("kiromain");

    QString file_path = folder_path + "/"+ selected;
    QFileDialog::getOpenFileName(this,tr("Open Document"),file_path,
                                 tr("Document files (*.doc *.txt);;All files (*.*)"),
                                                                     0, QFileDialog::DontUseNativeDialog  );
    QFile file(selected);
    //QTextStream in(&file);
    //QString mText = in.readAll();

    file.close();
    qDebug()<<file_path;

}

