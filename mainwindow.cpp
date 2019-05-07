#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this ->resize(QSize(320,240));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::activated()
{
    QMessageBox::about(0,"提示","检测到快捷键");

}
