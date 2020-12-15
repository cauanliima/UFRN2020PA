#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
public:
    int r,g,b,a;
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);

signals:

public slots:
    void setColorR(int r_){r=r_; repaint();}
    void setColorG(int g_){r=g_; repaint();}
    void setColorB(int b_){r=b_; repaint();}
    void setColorA(int a_){r=a_; repaint();}

};

#endif // PLOTTER_H
