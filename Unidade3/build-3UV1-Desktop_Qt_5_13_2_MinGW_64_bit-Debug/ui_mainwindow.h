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
    Plotter *widget;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *spinBoxBar;
    QScrollBar *horizontalScrollBar;
    QWidget *layoutWidget1;
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
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioVoxel;
    QRadioButton *radioBox;
    QRadioButton *radioSphere;
    QPushButton *ButtonPutCut;
    QWidget *layoutWidget3;
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
    QMenuBar *menubar;
    QMenu *menuNovo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(668, 458);
        actionNova_Escultura = new QAction(MainWindow);
        actionNova_Escultura->setObjectName(QString::fromUtf8("actionNova_Escultura"));
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new Plotter(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(200, 280, 80, 80));
        widget->setMinimumSize(QSize(80, 80));
        widget->setMaximumSize(QSize(80, 80));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 256, 192));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 233, 648, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        spinBoxBar = new QSpinBox(layoutWidget);
        spinBoxBar->setObjectName(QString::fromUtf8("spinBoxBar"));
        spinBoxBar->setMinimumSize(QSize(40, 0));
        spinBoxBar->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_7->addWidget(spinBoxBar);

        horizontalScrollBar = new QScrollBar(layoutWidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setMinimumSize(QSize(600, 20));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalScrollBar);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(499, 262, 159, 82));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);

        horizontalLayout->addWidget(lineEdit);

        spinBox_1 = new QSpinBox(layoutWidget1);
        spinBox_1->setObjectName(QString::fromUtf8("spinBox_1"));
        spinBox_1->setEnabled(true);
        spinBox_1->setMinimumSize(QSize(50, 0));
        spinBox_1->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(spinBox_1);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);

        spinBox_3 = new QSpinBox(layoutWidget1);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimumSize(QSize(50, 0));
        spinBox_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_5->addWidget(spinBox_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);

        spinBox_2 = new QSpinBox(layoutWidget1);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(50, 0));
        spinBox_2->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_4->addWidget(spinBox_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(330, 262, 163, 50));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioVoxel = new QRadioButton(layoutWidget2);
        radioVoxel->setObjectName(QString::fromUtf8("radioVoxel"));

        horizontalLayout_3->addWidget(radioVoxel);

        radioBox = new QRadioButton(layoutWidget2);
        radioBox->setObjectName(QString::fromUtf8("radioBox"));

        horizontalLayout_3->addWidget(radioBox);

        radioSphere = new QRadioButton(layoutWidget2);
        radioSphere->setObjectName(QString::fromUtf8("radioSphere"));

        horizontalLayout_3->addWidget(radioSphere);


        verticalLayout_2->addLayout(horizontalLayout_3);

        ButtonPutCut = new QPushButton(layoutWidget2);
        ButtonPutCut->setObjectName(QString::fromUtf8("ButtonPutCut"));

        verticalLayout_2->addWidget(ButtonPutCut);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(14, 260, 144, 116));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_R = new QHBoxLayout();
        horizontalLayout_R->setObjectName(QString::fromUtf8("horizontalLayout_R"));
        horizontalSliderR = new QSlider(layoutWidget3);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setMaximum(255);
        horizontalSliderR->setValue(100);
        horizontalSliderR->setOrientation(Qt::Horizontal);

        horizontalLayout_R->addWidget(horizontalSliderR);

        spinBoxR = new QSpinBox(layoutWidget3);
        spinBoxR->setObjectName(QString::fromUtf8("spinBoxR"));
        spinBoxR->setMinimumSize(QSize(50, 0));
        spinBoxR->setMaximumSize(QSize(70, 16777215));
        spinBoxR->setMaximum(255);
        spinBoxR->setValue(100);

        horizontalLayout_R->addWidget(spinBoxR);


        verticalLayout->addLayout(horizontalLayout_R);

        horizontalLayout_G = new QHBoxLayout();
        horizontalLayout_G->setObjectName(QString::fromUtf8("horizontalLayout_G"));
        horizontalSliderG = new QSlider(layoutWidget3);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setMinimumSize(QSize(50, 0));
        horizontalSliderG->setMaximum(255);
        horizontalSliderG->setValue(100);
        horizontalSliderG->setOrientation(Qt::Horizontal);

        horizontalLayout_G->addWidget(horizontalSliderG);

        spinBoxG = new QSpinBox(layoutWidget3);
        spinBoxG->setObjectName(QString::fromUtf8("spinBoxG"));
        spinBoxG->setMinimumSize(QSize(50, 0));
        spinBoxG->setMaximumSize(QSize(70, 16777215));
        spinBoxG->setMaximum(255);
        spinBoxG->setValue(100);

        horizontalLayout_G->addWidget(spinBoxG);


        verticalLayout->addLayout(horizontalLayout_G);

        horizontalLayout_B = new QHBoxLayout();
        horizontalLayout_B->setObjectName(QString::fromUtf8("horizontalLayout_B"));
        horizontalSliderB = new QSlider(layoutWidget3);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setMaximum(255);
        horizontalSliderB->setValue(100);
        horizontalSliderB->setOrientation(Qt::Horizontal);

        horizontalLayout_B->addWidget(horizontalSliderB);

        spinBoxB = new QSpinBox(layoutWidget3);
        spinBoxB->setObjectName(QString::fromUtf8("spinBoxB"));
        spinBoxB->setMinimumSize(QSize(50, 0));
        spinBoxB->setMaximumSize(QSize(70, 16777215));
        spinBoxB->setMaximum(255);
        spinBoxB->setValue(100);

        horizontalLayout_B->addWidget(spinBoxB);


        verticalLayout->addLayout(horizontalLayout_B);

        horizontalLayout_A = new QHBoxLayout();
        horizontalLayout_A->setObjectName(QString::fromUtf8("horizontalLayout_A"));
        horizontalSliderA = new QSlider(layoutWidget3);
        horizontalSliderA->setObjectName(QString::fromUtf8("horizontalSliderA"));
        horizontalSliderA->setMaximum(255);
        horizontalSliderA->setValue(100);
        horizontalSliderA->setOrientation(Qt::Horizontal);

        horizontalLayout_A->addWidget(horizontalSliderA);

        spinBoxA = new QSpinBox(layoutWidget3);
        spinBoxA->setObjectName(QString::fromUtf8("spinBoxA"));
        spinBoxA->setMinimumSize(QSize(50, 0));
        spinBoxA->setMaximumSize(QSize(70, 16777215));
        spinBoxA->setMaximum(255);
        spinBoxA->setValue(100);

        horizontalLayout_A->addWidget(spinBoxA);


        verticalLayout->addLayout(horizontalLayout_A);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 668, 21));
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
        lineEdit->setText(QString());
        lineEdit_3->setText(QString());
        lineEdit_2->setText(QString());
        radioVoxel->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        radioBox->setText(QCoreApplication::translate("MainWindow", "Box", nullptr));
        radioSphere->setText(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        ButtonPutCut->setText(QCoreApplication::translate("MainWindow", "PutObj", nullptr));
        menuNovo->setTitle(QCoreApplication::translate("MainWindow", "Novo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
