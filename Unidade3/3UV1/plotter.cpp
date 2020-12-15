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

    brush.setColor(QColor(100,100,0,255));
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    painter.drawRect(0,0,width(),height());

}
