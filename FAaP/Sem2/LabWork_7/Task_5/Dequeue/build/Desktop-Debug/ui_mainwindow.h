/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *popbackButton_2;
    QPushButton *clearButton;
    QPushButton *popfrontButton;
    QLabel *label;
    QPushButton *pushfrontButton;
    QPushButton *pushbackButton;
    QSpinBox *spinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 801, 551));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        popbackButton_2 = new QPushButton(gridLayoutWidget);
        popbackButton_2->setObjectName("popbackButton_2");

        gridLayout->addWidget(popbackButton_2, 1, 1, 1, 1);

        clearButton = new QPushButton(gridLayoutWidget);
        clearButton->setObjectName("clearButton");

        gridLayout->addWidget(clearButton, 4, 0, 1, 2);

        popfrontButton = new QPushButton(gridLayoutWidget);
        popfrontButton->setObjectName("popfrontButton");

        gridLayout->addWidget(popfrontButton, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        pushfrontButton = new QPushButton(gridLayoutWidget);
        pushfrontButton->setObjectName("pushfrontButton");

        gridLayout->addWidget(pushfrontButton, 2, 0, 1, 1);

        pushbackButton = new QPushButton(gridLayoutWidget);
        pushbackButton->setObjectName("pushbackButton");

        gridLayout->addWidget(pushbackButton, 1, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 3, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        popbackButton_2->setText(QCoreApplication::translate("MainWindow", "pop_back", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        popfrontButton->setText(QCoreApplication::translate("MainWindow", "pop_front", nullptr));
        label->setText(QString());
        pushfrontButton->setText(QCoreApplication::translate("MainWindow", "push_front", nullptr));
        pushbackButton->setText(QCoreApplication::translate("MainWindow", "push_back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
