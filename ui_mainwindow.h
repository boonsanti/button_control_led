/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnLED1ON;
    QPushButton *btnLED2ON;
    QPushButton *btnLED3ON;
    QPushButton *btnLED4ON;
    QPushButton *bynLED1OFF;
    QPushButton *btnLED2OFF;
    QPushButton *btnLED3OFF;
    QPushButton *btnLED4OFF;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnLED1ON = new QPushButton(centralWidget);
        btnLED1ON->setObjectName(QString::fromUtf8("btnLED1ON"));
        btnLED1ON->setGeometry(QRect(80, 140, 99, 51));
        btnLED2ON = new QPushButton(centralWidget);
        btnLED2ON->setObjectName(QString::fromUtf8("btnLED2ON"));
        btnLED2ON->setGeometry(QRect(260, 140, 99, 51));
        btnLED3ON = new QPushButton(centralWidget);
        btnLED3ON->setObjectName(QString::fromUtf8("btnLED3ON"));
        btnLED3ON->setGeometry(QRect(440, 140, 99, 51));
        btnLED4ON = new QPushButton(centralWidget);
        btnLED4ON->setObjectName(QString::fromUtf8("btnLED4ON"));
        btnLED4ON->setGeometry(QRect(620, 140, 99, 51));
        bynLED1OFF = new QPushButton(centralWidget);
        bynLED1OFF->setObjectName(QString::fromUtf8("bynLED1OFF"));
        bynLED1OFF->setGeometry(QRect(80, 220, 99, 51));
        btnLED2OFF = new QPushButton(centralWidget);
        btnLED2OFF->setObjectName(QString::fromUtf8("btnLED2OFF"));
        btnLED2OFF->setGeometry(QRect(260, 220, 99, 51));
        btnLED3OFF = new QPushButton(centralWidget);
        btnLED3OFF->setObjectName(QString::fromUtf8("btnLED3OFF"));
        btnLED3OFF->setGeometry(QRect(440, 220, 99, 51));
        btnLED4OFF = new QPushButton(centralWidget);
        btnLED4OFF->setObjectName(QString::fromUtf8("btnLED4OFF"));
        btnLED4OFF->setGeometry(QRect(620, 220, 99, 51));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 100, 81, 30));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 100, 81, 30));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(450, 100, 81, 30));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(630, 100, 81, 30));
        label_4->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        btnLED1ON->setText(QApplication::translate("MainWindow", "ON", 0, QApplication::UnicodeUTF8));
        btnLED2ON->setText(QApplication::translate("MainWindow", "ON", 0, QApplication::UnicodeUTF8));
        btnLED3ON->setText(QApplication::translate("MainWindow", "ON", 0, QApplication::UnicodeUTF8));
        btnLED4ON->setText(QApplication::translate("MainWindow", "ON", 0, QApplication::UnicodeUTF8));
        bynLED1OFF->setText(QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8));
        btnLED2OFF->setText(QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8));
        btnLED3OFF->setText(QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8));
        btnLED4OFF->setText(QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "LED1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "LED2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "LED3", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "LED4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
