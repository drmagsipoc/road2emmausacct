#ifndef DATAREGISTRATION_H
#define DATAREGISTRATION_H

#include <QWidget>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DataRegistration; }
QT_END_NAMESPACE

class DataRegistration : public QWidget
{
    Q_OBJECT
public:
    explicit DataRegistration(MainWindow *mw, QWidget *parent = nullptr);
    ~DataRegistration();

private:
    Ui::DataRegistration *ui;
    MainWindow *mw;

signals:

private slots:
    void on_DataRegistration_destroyed();
    void on_pb_close_pressed();
};

#endif // DATAREGISTRATION_H
