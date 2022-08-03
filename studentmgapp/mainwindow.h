#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include "stlog.h"
#include "tchlog.h"

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_StudentLog_clicked();

    void on_TeacherLog_clicked();

    void on_Quit_clicked();

private:
    Ui::MainWindow *ui;
    stlog *stdial;
    tchlog *tchdial;
};
#endif // MAINWINDOW_H
