/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *LabelAmplitude;
    QSlider *horizontalSliderAmplitude;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LabelFrequencia;
    QSlider *horizontalSliderFrequencia;
    QLCDNumber *lcdNumber_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *LabelVelocidade;
    QSlider *horizontalSliderVelocidade;
    QLCDNumber *lcdNumber_3;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *textEdit;
    QPushButton *pushButtonCopia;
    QTextBrowser *textBrowser;
    Plotter *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLCDNumber *lcdNumberX;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLCDNumber *lcdNumberY;
    QPushButton *pushButtonQuit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(666, 666);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionQuit->setCheckable(false);
        actionQuit->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral("recursos/icone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        LabelAmplitude = new QLabel(centralWidget);
        LabelAmplitude->setObjectName(QStringLiteral("LabelAmplitude"));

        horizontalLayout->addWidget(LabelAmplitude);

        horizontalSliderAmplitude = new QSlider(centralWidget);
        horizontalSliderAmplitude->setObjectName(QStringLiteral("horizontalSliderAmplitude"));
        horizontalSliderAmplitude->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderAmplitude);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        LabelFrequencia = new QLabel(centralWidget);
        LabelFrequencia->setObjectName(QStringLiteral("LabelFrequencia"));

        horizontalLayout_2->addWidget(LabelFrequencia);

        horizontalSliderFrequencia = new QSlider(centralWidget);
        horizontalSliderFrequencia->setObjectName(QStringLiteral("horizontalSliderFrequencia"));
        horizontalSliderFrequencia->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderFrequencia);

        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        LabelVelocidade = new QLabel(centralWidget);
        LabelVelocidade->setObjectName(QStringLiteral("LabelVelocidade"));

        horizontalLayout_3->addWidget(LabelVelocidade);

        horizontalSliderVelocidade = new QSlider(centralWidget);
        horizontalSliderVelocidade->setObjectName(QStringLiteral("horizontalSliderVelocidade"));
        horizontalSliderVelocidade->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderVelocidade);

        lcdNumber_3 = new QLCDNumber(centralWidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_3->addWidget(lcdNumber_3);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_4->addWidget(textEdit);

        pushButtonCopia = new QPushButton(centralWidget);
        pushButtonCopia->setObjectName(QStringLiteral("pushButtonCopia"));

        horizontalLayout_4->addWidget(pushButtonCopia);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_4->addWidget(textBrowser);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        widget_2 = new Plotter(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        horizontalLayout_7->addWidget(widget_2);

        horizontalLayout_7->setStretch(0, 30);
        horizontalLayout_7->setStretch(1, 70);

        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lcdNumberX = new QLCDNumber(centralWidget);
        lcdNumberX->setObjectName(QStringLiteral("lcdNumberX"));

        horizontalLayout_5->addWidget(lcdNumberX);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lcdNumberY = new QLCDNumber(centralWidget);
        lcdNumberY->setObjectName(QStringLiteral("lcdNumberY"));

        horizontalLayout_6->addWidget(lcdNumberY);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButtonQuit = new QPushButton(centralWidget);
        pushButtonQuit->setObjectName(QStringLiteral("pushButtonQuit"));

        verticalLayout_3->addWidget(pushButtonQuit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 666, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);
        mainToolBar->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(mataTudo()));
        QObject::connect(pushButtonCopia, SIGNAL(clicked()), MainWindow, SLOT(copiaTexto()));
        QObject::connect(horizontalSliderAmplitude, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderFrequencia, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderVelocidade, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSliderAmplitude, SIGNAL(valueChanged(int)), widget_2, SLOT(setAmplitude(int)));
        QObject::connect(horizontalSliderFrequencia, SIGNAL(valueChanged(int)), widget_2, SLOT(setFrequencia(int)));
        QObject::connect(horizontalSliderVelocidade, SIGNAL(valueChanged(int)), widget_2, SLOT(setVelocidade(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        LabelAmplitude->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Amplitude</p><p><br/></p></body></html>", nullptr));
        LabelFrequencia->setText(QApplication::translate("MainWindow", "Frequencia", nullptr));
        LabelVelocidade->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Velocidade</p></body></html>", nullptr));
        pushButtonCopia->setText(QApplication::translate("MainWindow", ">>>>", nullptr));
        label->setText(QApplication::translate("MainWindow", "x", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "y", nullptr));
        pushButtonQuit->setText(QApplication::translate("MainWindow", "Morre, diabo!", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
