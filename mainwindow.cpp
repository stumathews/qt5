#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); // Loads the GUI file

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doSomething()
{

}
