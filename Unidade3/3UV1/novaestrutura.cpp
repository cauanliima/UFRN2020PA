#include "novaestrutura.h"
#include "ui_novaestrutura.h"

NovaEstrutura::NovaEstrutura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NovaEstrutura)
{
    ui->setupUi(this);

}

NovaEstrutura::~NovaEstrutura()
{
    delete ui;
}

void NovaEstrutura::on_buttonBox_accepted()
{
   x=ui->SetX->value();
   y=ui->SetY->value();
   z=ui->SetZ->value();
}

void NovaEstrutura::on_buttonBox_rejected()
{

}
