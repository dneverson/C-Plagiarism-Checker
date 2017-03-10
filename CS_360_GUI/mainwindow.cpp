#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QPixmap>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_file1_clicked()
{
    QString fileName1 = QFileDialog::getOpenFileName(this, tr("Select File 1"),tr("All (*.*)"));
    ui->lineEdit_1->setText(fileName1);
}

void MainWindow::on_pushButton_file2_clicked()
{
    QString fileName2 = QFileDialog::getOpenFileName(this, tr("Select File 2"),tr("All (*.*)"));
    ui->lineEdit_2->setText(fileName2);
}

//void MainWindow::actionhttps_www_legionprogramming_com()
//{
//    QDesktopServices::openUrl(QUrl("https://sites.google.com/lcmail.lcsc.edu/legionprogramming/about-us"));
//}

//void MainWindow::createActions()
//{
//    connect(ui->actionhttps_www_legionprogramming_com,SIGNAL(triggered(bool)),this, SLOT(showMaximized())
//    QDesktopServices::openUrl(QUrl("https://sites.google.com/lcmail.lcsc.edu/legionprogramming"));
//}
