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
#include <QtWidgets/QTextEdit>
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
    QPushButton *pushButton_3;
    QCustomPlot *Chart_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser_2;
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
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 480, 75, 23));
        Chart_2 = new QCustomPlot(centralwidget);
        Chart_2->setObjectName(QStringLiteral("Chart_2"));
        Chart_2->setGeometry(QRect(220, 380, 491, 171));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 390, 81, 23));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 430, 75, 23));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(110, 390, 71, 21));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(110, 430, 71, 21));
        RealTime->setCentralWidget(centralwidget);
        pushButton_3->raise();
        pushButton->raise();
        textBrowser->raise();
        Chart->raise();
        pushButton_2->raise();
        Chart_2->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        textEdit->raise();
        textBrowser_2->raise();
        menubar = new QMenuBar(RealTime);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        pushButton_3->setText(QApplication::translate("RealTime", "Predict", 0));
        pushButton_4->setText(QApplication::translate("RealTime", "Enter topology", 0));
        pushButton_5->setText(QApplication::translate("RealTime", "Load weights", 0));
        textEdit->setHtml(QApplication::translate("RealTime", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4,5,4</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class RealTime: public Ui_RealTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALTIME_H
