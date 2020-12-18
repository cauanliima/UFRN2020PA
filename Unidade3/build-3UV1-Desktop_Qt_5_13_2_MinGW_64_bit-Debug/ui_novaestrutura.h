/********************************************************************************
** Form generated from reading UI file 'novaestrutura.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOVAESTRUTURA_H
#define UI_NOVAESTRUTURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NovaEstrutura
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *SetX;
    QSpinBox *SetY;
    QSpinBox *SetZ;

    void setupUi(QDialog *NovaEstrutura)
    {
        if (NovaEstrutura->objectName().isEmpty())
            NovaEstrutura->setObjectName(QString::fromUtf8("NovaEstrutura"));
        NovaEstrutura->resize(382, 169);
        buttonBox = new QDialogButtonBox(NovaEstrutura);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 130, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        SetX = new QSpinBox(NovaEstrutura);
        SetX->setObjectName(QString::fromUtf8("SetX"));
        SetX->setGeometry(QRect(280, 10, 42, 22));
        SetY = new QSpinBox(NovaEstrutura);
        SetY->setObjectName(QString::fromUtf8("SetY"));
        SetY->setGeometry(QRect(280, 40, 42, 22));
        SetZ = new QSpinBox(NovaEstrutura);
        SetZ->setObjectName(QString::fromUtf8("SetZ"));
        SetZ->setGeometry(QRect(280, 70, 42, 22));

        retranslateUi(NovaEstrutura);
        QObject::connect(buttonBox, SIGNAL(accepted()), NovaEstrutura, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NovaEstrutura, SLOT(reject()));

        QMetaObject::connectSlotsByName(NovaEstrutura);
    } // setupUi

    void retranslateUi(QDialog *NovaEstrutura)
    {
        NovaEstrutura->setWindowTitle(QCoreApplication::translate("NovaEstrutura", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NovaEstrutura: public Ui_NovaEstrutura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOVAESTRUTURA_H
