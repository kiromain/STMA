#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "second.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QGraphicsScene *scene;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    second *secDialog;
};
#endif // MAINWINDOW_H
