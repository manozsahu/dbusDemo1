#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QtDebug>
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

int MainWindow::test(QString str)
{
    qDebug()<<"MainWindow::test(QString str)*******";
    if(str == QString("via ctor"))
    {
        QLabel *a = new QLabel(this);
        a->setText("Via ctor : Test");
        a->show();
        return 101;
    }else if(str == QString("via setParent"))
    {
        QLabel *a = new QLabel(0);
        a->setParent(this);
        a->setText("via setParent : Test");
        a->show();
        return 102;
    }
    return 100;

}
