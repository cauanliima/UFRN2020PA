#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "plotter.h"
#include "novaestrutura.h"
#include "sculptor.h"
#include <mutex>
#include <future>         // std::async, std::future
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
Escultura=nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ButtonPutCut_released()
{
    if(putIsOn)
    {
        putIsOn=false;
        ui->ButtonPutCut->setText("CutObj");

    }
        else
    {
        putIsOn=true;
        ui->ButtonPutCut->setText("PutObj");
    }
}




void MainWindow::on_actionNova_Escultura_triggered()
{
    RedEstrutura.exec();
}
