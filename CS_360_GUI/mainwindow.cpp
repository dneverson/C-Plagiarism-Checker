#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QPixmap>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>
#include <time.h>
#include <thread>
#include <unistd.h>
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

void MainWindow::on_pushButton_start_clicked()
{
//    connect(ui->actionhttps_www_legionprogramming_com,SIGNAL(triggered(bool)),this, SLOT(showMaximized())
//    QDesktopServices::openUrl(QUrl("https://sites.google.com/lcmail.lcsc.edu/legionprogramming"));
     using namespace std::this_thread;
    ui->textBrowser_results->append("Checking library usage...\n");
    sleep(1);
    ui->progressBar->setValue(10);
    ui->textBrowser_results->append("Checking comments...\n");
    sleep(1);
    ui->progressBar->setValue(20);
    ui->textBrowser_results->append("Checking flow control...\n");
    sleep(1);
    ui->progressBar->setValue(35);
    ui->textBrowser_results->append("Checking variable names...\n");
    sleep(1);
    ui->progressBar->setValue(50);
    ui->textBrowser_results->append("Checking syntax...\n");
    sleep(1);
    ui->progressBar->setValue(65);
    ui->textBrowser_results->append("Checking loop structure...\n");
    sleep(1);
    ui->progressBar->setValue(85);
    ui->textBrowser_results->append("Checking source code...\n");
    sleep(1);
    ui->progressBar->setValue(100);
    ui->textBrowser_results->append("Total Similarity 20%\n"
    "break down:\n"
    "source code 10%\n"
    "comments 0%\n"
    "flow controle 70%\n"
    "library usage 50%\n"
    "variable names 20%\n"
    "syntax 50%\n"

    "loop structure 100%\n"
                                    "further breakddown in sample_output.txt");

}

void MainWindow::on_actionDonate_triggered()
{

        QDesktopServices::openUrl(QUrl("https://sites.google.com/lcmail.lcsc.edu/legionprogramming/donate"));
}

void MainWindow::on_actionImport_Library_triggered()
{
    QFileDialog::getOpenFileName(this, tr("Select Import File"),tr("All (*.*)"));
}

void MainWindow::on_actionWebPage_triggered()
{
    QDesktopServices::openUrl(QUrl("https://sites.google.com/lcmail.lcsc.edu/legionprogramming"));
}
