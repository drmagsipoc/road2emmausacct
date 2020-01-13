#include "dataregistration.h"
#include "ui_dataregistration.h"

DataRegistration::DataRegistration(MainWindow *mw, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DataRegistration)
{
    this->mw = mw;
    ui->setupUi(this);
}

DataRegistration::~DataRegistration()
{
    delete ui;
}

void DataRegistration::on_DataRegistration_destroyed()
{
    this->close();
    this->mw->show();
}

void DataRegistration::on_pb_close_pressed()
{
    this->mw->show();
    this->close();
}
