#ifndef NOVAESTRUTURA_H
#define NOVAESTRUTURA_H

#include <QDialog>

namespace Ui {
class NovaEstrutura;
}

class NovaEstrutura : public QDialog
{
    Q_OBJECT

public:
    explicit NovaEstrutura(QWidget *parent = nullptr);
    ~NovaEstrutura();
    int x,y,z;

public slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();


private:
    Ui::NovaEstrutura *ui;
};

#endif // NOVAESTRUTURA_H
