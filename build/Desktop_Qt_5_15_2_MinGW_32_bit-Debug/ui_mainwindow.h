/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStandard;
    QAction *actionScientific;
    QAction *actionGraph;
    QAction *actionDateAndTime;
    QAction *actionCurrency_Exchange;
    QAction *actionVolume;
    QAction *actionLength;
    QAction *actionWeight_and_Mass;
    QAction *actionTemperature;
    QAction *actionEnergy;
    QAction *actionArea;
    QAction *actionSpeed;
    QAction *actionTime;
    QAction *actionPower;
    QAction *actionData;
    QAction *actionPressure;
    QAction *actionAngle;
    QAction *actionProgrammer;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page01;
    QWidget *page02;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuConverter;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionStandard = new QAction(MainWindow);
        actionStandard->setObjectName(QString::fromUtf8("actionStandard"));
        actionScientific = new QAction(MainWindow);
        actionScientific->setObjectName(QString::fromUtf8("actionScientific"));
        actionGraph = new QAction(MainWindow);
        actionGraph->setObjectName(QString::fromUtf8("actionGraph"));
        actionDateAndTime = new QAction(MainWindow);
        actionDateAndTime->setObjectName(QString::fromUtf8("actionDateAndTime"));
        actionCurrency_Exchange = new QAction(MainWindow);
        actionCurrency_Exchange->setObjectName(QString::fromUtf8("actionCurrency_Exchange"));
        actionVolume = new QAction(MainWindow);
        actionVolume->setObjectName(QString::fromUtf8("actionVolume"));
        actionLength = new QAction(MainWindow);
        actionLength->setObjectName(QString::fromUtf8("actionLength"));
        actionWeight_and_Mass = new QAction(MainWindow);
        actionWeight_and_Mass->setObjectName(QString::fromUtf8("actionWeight_and_Mass"));
        actionTemperature = new QAction(MainWindow);
        actionTemperature->setObjectName(QString::fromUtf8("actionTemperature"));
        actionEnergy = new QAction(MainWindow);
        actionEnergy->setObjectName(QString::fromUtf8("actionEnergy"));
        actionArea = new QAction(MainWindow);
        actionArea->setObjectName(QString::fromUtf8("actionArea"));
        actionSpeed = new QAction(MainWindow);
        actionSpeed->setObjectName(QString::fromUtf8("actionSpeed"));
        actionTime = new QAction(MainWindow);
        actionTime->setObjectName(QString::fromUtf8("actionTime"));
        actionPower = new QAction(MainWindow);
        actionPower->setObjectName(QString::fromUtf8("actionPower"));
        actionData = new QAction(MainWindow);
        actionData->setObjectName(QString::fromUtf8("actionData"));
        actionPressure = new QAction(MainWindow);
        actionPressure->setObjectName(QString::fromUtf8("actionPressure"));
        actionAngle = new QAction(MainWindow);
        actionAngle->setObjectName(QString::fromUtf8("actionAngle"));
        actionProgrammer = new QAction(MainWindow);
        actionProgrammer->setObjectName(QString::fromUtf8("actionProgrammer"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page01 = new QWidget();
        page01->setObjectName(QString::fromUtf8("page01"));
        stackedWidget->addWidget(page01);
        page02 = new QWidget();
        page02->setObjectName(QString::fromUtf8("page02"));
        stackedWidget->addWidget(page02);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuConverter = new QMenu(menuBar);
        menuConverter->setObjectName(QString::fromUtf8("menuConverter"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuConverter->menuAction());
        menuFile->addAction(actionStandard);
        menuFile->addAction(actionScientific);
        menuFile->addAction(actionProgrammer);
        menuFile->addAction(actionGraph);
        menuFile->addAction(actionDateAndTime);
        menuConverter->addAction(actionCurrency_Exchange);
        menuConverter->addAction(actionVolume);
        menuConverter->addAction(actionLength);
        menuConverter->addAction(actionWeight_and_Mass);
        menuConverter->addAction(actionTemperature);
        menuConverter->addAction(actionEnergy);
        menuConverter->addAction(actionArea);
        menuConverter->addAction(actionSpeed);
        menuConverter->addAction(actionTime);
        menuConverter->addAction(actionPower);
        menuConverter->addAction(actionData);
        menuConverter->addAction(actionPressure);
        menuConverter->addAction(actionAngle);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionStandard->setText(QCoreApplication::translate("MainWindow", "Standard", nullptr));
#if QT_CONFIG(tooltip)
        actionStandard->setToolTip(QCoreApplication::translate("MainWindow", "Standard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionScientific->setText(QCoreApplication::translate("MainWindow", "Scientific", nullptr));
#if QT_CONFIG(tooltip)
        actionScientific->setToolTip(QCoreApplication::translate("MainWindow", "Scientific", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGraph->setText(QCoreApplication::translate("MainWindow", "Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionGraph->setToolTip(QCoreApplication::translate("MainWindow", "Graph", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDateAndTime->setText(QCoreApplication::translate("MainWindow", "Date & Time", nullptr));
        actionCurrency_Exchange->setText(QCoreApplication::translate("MainWindow", "Currency Exchange", nullptr));
        actionVolume->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        actionLength->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        actionWeight_and_Mass->setText(QCoreApplication::translate("MainWindow", "Weight & Mass", nullptr));
        actionTemperature->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        actionEnergy->setText(QCoreApplication::translate("MainWindow", "Energy", nullptr));
        actionArea->setText(QCoreApplication::translate("MainWindow", "Area", nullptr));
        actionSpeed->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        actionTime->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        actionPower->setText(QCoreApplication::translate("MainWindow", "Power", nullptr));
        actionData->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        actionPressure->setText(QCoreApplication::translate("MainWindow", "Pressure", nullptr));
        actionAngle->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        actionProgrammer->setText(QCoreApplication::translate("MainWindow", "Programmer", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        menuConverter->setTitle(QCoreApplication::translate("MainWindow", "Converter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
