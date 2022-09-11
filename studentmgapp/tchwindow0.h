#ifndef TCHWINDOW0_H
#define TCHWINDOW0_H

#include <QWidget>
#include <QString>


namespace Ui {
class tchwindow0;
}

class tchwindow0 : public QWidget
{
    Q_OBJECT

public:
    explicit tchwindow0(QWidget *parent = nullptr);
    ~tchwindow0();
    QString username();
    QString picked;

private slots:
    void on_select_button_clicked();

    void on_quit_button_clicked();

private:
    Ui::tchwindow0 *ui;
};

#endif // TCHWINDOW0_H
