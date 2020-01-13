#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dataregistration.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_datareg_clicked()
{
    DataRegistration *b;

    this->hide();
    b = new DataRegistration(this);
    b->show();
}
