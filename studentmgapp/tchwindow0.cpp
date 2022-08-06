#include "tchwindow0.h"
#include "ui_tchwindow0.h"
#include <QString>

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

void tchwindow0::on_select_button_clicked()
{
    QString username = ui->comboBox->currentText();

    tchWindow = new tchwindow;
    hide();
    tchWindow -> show();

}

