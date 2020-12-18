/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNova_Escultura;
    QAction *actionSalvar;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *MatrizVoxel;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *spinBoxBar;
    QScrollBar *horizontalScrollBar;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_R;
    QSlider *horizontalSliderR;
    QSpinBox *spinBoxR;
    QHBoxLayout *horizontalLayout_G;
    QSlider *horizontalSliderG;
    QSpinBox *spinBoxG;
    QHBoxLayout *horizontalLayout_B;
    QSlider *horizontalSliderB;
    QSpinBox *spinBoxB;
    QHBoxLayout *horizontalLayout_A;
    QSlider *horizontalSliderA;
    QSpinBox *spinBoxA;
    QSpacerItem *horizontalSpacer;
    Plotter *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioVoxel;
    QRadioButton *radioBox;
    QRadioButton *radioSphere;
    QPushButton *ButtonPutCut;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QSpinBox *spinBox_1;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_3;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_2;
    QSpinBox *spinBox_2;
    QMenuBar *menubar;
    QMenu *menuNovo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(711, 924);
        actionNova_Escultura = new QAction(MainWindow);
        actionNova_Escultura->setObjectName(QString::fromUtf8("actionNova_Escultura"));
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_8 = new QHBoxLayout(centralwidget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        MatrizVoxel = new QTableWidget(centralwidget);
        if (MatrizVoxel->columnCount() < 10)
            MatrizVoxel->setColumnCount(10);
        if (MatrizVoxel->rowCount() < 10)
            MatrizVoxel->setRowCount(10);
        MatrizVoxel->setObjectName(QString::fromUtf8("MatrizVoxel"));
        MatrizVoxel->setEnabled(true);
        MatrizVoxel->setRowCount(10);
        MatrizVoxel->setColumnCount(10);
        MatrizVoxel->horizontalHeader()->setVisible(false);
        MatrizVoxel->verticalHeader()->setVisible(false);
        MatrizVoxel->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout_4->addWidget(MatrizVoxel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        spinBoxBar = new QSpinBox(centralwidget);
        spinBoxBar->setObjectName(QString::fromUtf8("spinBoxBar"));
        spinBoxBar->setMinimumSize(QSize(40, 0));
        spinBoxBar->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_7->addWidget(spinBoxBar);

        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setMinimumSize(QSize(600, 20));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalScrollBar);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_R = new QHBoxLayout();
        horizontalLayout_R->setObjectName(QString::fromUtf8("horizontalLayout_R"));
        horizontalSliderR = new QSlider(centralwidget);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setMaximum(255);
        horizontalSliderR->setValue(100);
        horizontalSliderR->setOrientation(Qt::Horizontal);

        horizontalLayout_R->addWidget(horizontalSliderR);

        spinBoxR = new QSpinBox(centralwidget);
        spinBoxR->setObjectName(QString::fromUtf8("spinBoxR"));
        spinBoxR->setMinimumSize(QSize(50, 0));
        spinBoxR->setMaximumSize(QSize(70, 16777215));
        spinBoxR->setMaximum(255);
        spinBoxR->setValue(100);

        horizontalLayout_R->addWidget(spinBoxR);


        verticalLayout->addLayout(horizontalLayout_R);

        horizontalLayout_G = new QHBoxLayout();
        horizontalLayout_G->setObjectName(QString::fromUtf8("horizontalLayout_G"));
        horizontalSliderG = new QSlider(centralwidget);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setMinimumSize(QSize(50, 0));
        horizontalSliderG->setMaximum(255);
        horizontalSliderG->setValue(100);
        horizontalSliderG->setOrientation(Qt::Horizontal);

        horizontalLayout_G->addWidget(horizontalSliderG);

        spinBoxG = new QSpinBox(centralwidget);
        spinBoxG->setObjectName(QString::fromUtf8("spinBoxG"));
        spinBoxG->setMinimumSize(QSize(50, 0));
        spinBoxG->setMaximumSize(QSize(70, 16777215));
        spinBoxG->setMaximum(255);
        spinBoxG->setValue(100);

        horizontalLayout_G->addWidget(spinBoxG);


        verticalLayout->addLayout(horizontalLayout_G);

        horizontalLayout_B = new QHBoxLayout();
        horizontalLayout_B->setObjectName(QString::fromUtf8("horizontalLayout_B"));
        horizontalSliderB = new QSlider(centralwidget);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setMaximum(255);
        horizontalSliderB->setValue(100);
        horizontalSliderB->setOrientation(Qt::Horizontal);

        horizontalLayout_B->addWidget(horizontalSliderB);

        spinBoxB = new QSpinBox(centralwidget);
        spinBoxB->setObjectName(QString::fromUtf8("spinBoxB"));
        spinBoxB->setMinimumSize(QSize(50, 0));
        spinBoxB->setMaximumSize(QSize(70, 16777215));
        spinBoxB->setMaximum(255);
        spinBoxB->setValue(100);

        horizontalLayout_B->addWidget(spinBoxB);


        verticalLayout->addLayout(horizontalLayout_B);

        horizontalLayout_A = new QHBoxLayout();
        horizontalLayout_A->setObjectName(QString::fromUtf8("horizontalLayout_A"));
        horizontalSliderA = new QSlider(centralwidget);
        horizontalSliderA->setObjectName(QString::fromUtf8("horizontalSliderA"));
        horizontalSliderA->setMaximum(255);
        horizontalSliderA->setValue(100);
        horizontalSliderA->setOrientation(Qt::Horizontal);

        horizontalLayout_A->addWidget(horizontalSliderA);

        spinBoxA = new QSpinBox(centralwidget);
        spinBoxA->setObjectName(QString::fromUtf8("spinBoxA"));
        spinBoxA->setMinimumSize(QSize(50, 0));
        spinBoxA->setMaximumSize(QSize(70, 16777215));
        spinBoxA->setMaximum(255);
        spinBoxA->setValue(100);

        horizontalLayout_A->addWidget(spinBoxA);


        verticalLayout->addLayout(horizontalLayout_A);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget = new Plotter(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        widget->setMinimumSize(QSize(100, 100));
        widget->setMaximumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(widget);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioVoxel = new QRadioButton(centralwidget);
        radioVoxel->setObjectName(QString::fromUtf8("radioVoxel"));

        horizontalLayout_3->addWidget(radioVoxel);

        radioBox = new QRadioButton(centralwidget);
        radioBox->setObjectName(QString::fromUtf8("radioBox"));

        horizontalLayout_3->addWidget(radioBox);

        radioSphere = new QRadioButton(centralwidget);
        radioSphere->setObjectName(QString::fromUtf8("radioSphere"));

        horizontalLayout_3->addWidget(radioSphere);


        verticalLayout_2->addLayout(horizontalLayout_3);

        ButtonPutCut = new QPushButton(centralwidget);
        ButtonPutCut->setObjectName(QString::fromUtf8("ButtonPutCut"));

        verticalLayout_2->addWidget(ButtonPutCut);


        horizontalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);

        horizontalLayout->addWidget(lineEdit);

        spinBox_1 = new QSpinBox(centralwidget);
        spinBox_1->setObjectName(QString::fromUtf8("spinBox_1"));
        spinBox_1->setEnabled(true);
        spinBox_1->setMinimumSize(QSize(50, 0));
        spinBox_1->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(spinBox_1);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);

        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimumSize(QSize(50, 0));
        spinBox_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_5->addWidget(spinBox_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);

        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(50, 0));
        spinBox_2->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_4->addWidget(spinBox_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 711, 21));
        menuNovo = new QMenu(menubar);
        menuNovo->setObjectName(QString::fromUtf8("menuNovo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNovo->menuAction());
        menuNovo->addAction(actionNova_Escultura);
        menuNovo->addAction(actionSalvar);

        retranslateUi(MainWindow);
        QObject::connect(spinBoxBar, SIGNAL(valueChanged(int)), horizontalScrollBar, SLOT(setValue(int)));
        QObject::connect(horizontalScrollBar, SIGNAL(valueChanged(int)), spinBoxBar, SLOT(setValue(int)));
        QObject::connect(actionSalvar, SIGNAL(triggered()), MainWindow, SLOT(Salva()));
        QObject::connect(horizontalSliderR, SIGNAL(valueChanged(int)), spinBoxR, SLOT(setValue(int)));
        QObject::connect(horizontalSliderG, SIGNAL(valueChanged(int)), spinBoxG, SLOT(setValue(int)));
        QObject::connect(horizontalSliderB, SIGNAL(valueChanged(int)), spinBoxB, SLOT(setValue(int)));
        QObject::connect(spinBoxR, SIGNAL(valueChanged(int)), horizontalSliderR, SLOT(setValue(int)));
        QObject::connect(spinBoxG, SIGNAL(valueChanged(int)), horizontalSliderG, SLOT(setValue(int)));
        QObject::connect(spinBoxB, SIGNAL(valueChanged(int)), horizontalSliderB, SLOT(setValue(int)));
        QObject::connect(horizontalSliderA, SIGNAL(valueChanged(int)), spinBoxA, SLOT(setValue(int)));
        QObject::connect(spinBoxA, SIGNAL(valueChanged(int)), horizontalSliderA, SLOT(setValue(int)));
        QObject::connect(spinBoxR, SIGNAL(valueChanged(int)), widget, SLOT(setColorR(int)));
        QObject::connect(spinBoxG, SIGNAL(valueChanged(int)), widget, SLOT(setColorG(int)));
        QObject::connect(spinBoxB, SIGNAL(valueChanged(int)), widget, SLOT(setColorB(int)));
        QObject::connect(spinBoxA, SIGNAL(valueChanged(int)), widget, SLOT(setColorA(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNova_Escultura->setText(QCoreApplication::translate("MainWindow", "Nova Escultura", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        radioVoxel->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        radioBox->setText(QCoreApplication::translate("MainWindow", "Box", nullptr));
        radioSphere->setText(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        ButtonPutCut->setText(QCoreApplication::translate("MainWindow", "PutObj", nullptr));
        lineEdit->setText(QString());
        lineEdit_3->setText(QString());
        lineEdit_2->setText(QString());
        menuNovo->setTitle(QCoreApplication::translate("MainWindow", "Novo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
