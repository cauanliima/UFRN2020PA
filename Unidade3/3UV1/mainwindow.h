#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "novaestrutura.h"
#include <QMainWindow>
#include "plotter.h"
#include "sculptor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    bool putIsOn=true;
    NovaEstrutura RedEstrutura;
    Sculptor *Escultura;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void exit(){}

private slots:

    void on_ButtonPutCut_released();

    void on_actionNova_Escultura_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
