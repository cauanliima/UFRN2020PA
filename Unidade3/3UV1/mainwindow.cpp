#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "plotter.h"

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

void MainWindow::on_radioVoxel_pressed()
{

}
