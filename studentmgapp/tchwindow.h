#ifndef TCHWINDOW_H
#define TCHWINDOW_H

#include <QDialog>
#include <QPaintEvent>
#include <QString>
#include "tchwindow0.h"
#include <QGraphicsScene>
#include <QGraphicsView>

namespace Ui {
class tchwindow;
}

class tchwindow : public QDialog
{
    Q_OBJECT

public:
    explicit tchwindow(QWidget *parent = nullptr);
    ~tchwindow();
    QPixmap _pixmapBg;
    tchwindow0 *username;
    tchwindow *path;
    tchwindow0 *tchWindow0;

private slots:
    void on_newfile_button_clicked();

    void on_save_button_clicked();

    void on_saveas_button_clicked();

    void on_open_button_clicked();

    void on_edit_button_clicked();

    void on_return_button_clicked();

private:
    Ui::tchwindow *ui;
    QString file_path;
};

#endif // TCHWINDOW_H
