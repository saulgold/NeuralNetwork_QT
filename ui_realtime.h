/********************************************************************************
** Form generated from reading UI file 'realtime.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALTIME_H
#define UI_REALTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RealTime
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QCustomPlot *Chart;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RealTime)
    {
        if (RealTime->objectName().isEmpty())
            RealTime->setObjectName(QStringLiteral("RealTime"));
        RealTime->resize(800, 600);
        centralwidget = new QWidget(RealTime);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 60, 80, 21));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(270, 60, 271, 41));
        Chart = new QCustomPlot(centralwidget);
        Chart->setObjectName(QStringLiteral("Chart"));
        Chart->setGeometry(QRect(220, 170, 491, 171));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 130, 80, 21));
        RealTime->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RealTime);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        RealTime->setMenuBar(menubar);
        statusbar = new QStatusBar(RealTime);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RealTime->setStatusBar(statusbar);

        retranslateUi(RealTime);

        QMetaObject::connectSlotsByName(RealTime);
    } // setupUi

    void retranslateUi(QMainWindow *RealTime)
    {
        RealTime->setWindowTitle(QApplication::translate("RealTime", "MainWindow", 0));
        pushButton->setText(QApplication::translate("RealTime", "Start real time comparison", 0));
        pushButton_2->setText(QApplication::translate("RealTime", "STOP", 0));
    } // retranslateUi

};

namespace Ui {
    class RealTime: public Ui_RealTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALTIME_H
