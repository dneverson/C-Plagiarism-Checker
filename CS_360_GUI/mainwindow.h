#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopServices>

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

    //void QDesktopServices::openUrl(QUrl("https://sites.google.com/lcmail.lcsc.edu/legionprogramming/about-us"));

    void on_actionDonate_triggered();

    void on_actionImport_Library_triggered();

    void on_actionWebPage_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
