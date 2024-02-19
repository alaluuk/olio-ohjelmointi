#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectTimer=new QTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectTimer;
    objectTimer=nullptr;
}


void MainWindow::on_btnStart_clicked()
{
    connect(objectTimer, SIGNAL(timeout()), this, SLOT(slotShowTimer()));
    objectTimer->start(1000);

}

void MainWindow::slotShowTimer()
{
    x+=1;
    qDebug()<<"Aikaa kulunut "<<x<<" sekuntia\n";
}

