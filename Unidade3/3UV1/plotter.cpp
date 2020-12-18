#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    //QPen pen;
    //Aqui muda a cor do quadradro, esta funfando
    brush.setColor(QColor(0,100,0,255));
    //Queria colocar:
   // brush.setColor(QColor(r,g,b,a));
    // r,g,b,a sao variaveis da classe, alteradas pelas funcoes auxiliares que estao conectadas
    // na mainwindow
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    painter.drawRect(0,0,width(),height());

}
