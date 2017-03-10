#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_file1_clicked();

    void on_pushButton_file2_clicked();

    void on_pushButton_start_clicked();

    void actionhttps_www_legionprogramming_com();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
