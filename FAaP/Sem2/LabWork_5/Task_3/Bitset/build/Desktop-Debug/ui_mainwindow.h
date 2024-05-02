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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *resetBtn;
    QPushButton *flipBtn;
    QPushButton *setBtn;
    QPushButton *setAllBtn;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *flipAllBtn;
    QPushButton *resetAllBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 801, 601));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        resetBtn = new QPushButton(gridLayoutWidget);
        resetBtn->setObjectName("resetBtn");

        gridLayout->addWidget(resetBtn, 3, 0, 1, 1);

        flipBtn = new QPushButton(gridLayoutWidget);
        flipBtn->setObjectName("flipBtn");

        gridLayout->addWidget(flipBtn, 2, 1, 1, 1);

        setBtn = new QPushButton(gridLayoutWidget);
        setBtn->setObjectName("setBtn");

        gridLayout->addWidget(setBtn, 2, 0, 1, 1);

        setAllBtn = new QPushButton(gridLayoutWidget);
        setAllBtn->setObjectName("setAllBtn");

        gridLayout->addWidget(setAllBtn, 2, 2, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 1, 0, 1, 3);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        flipAllBtn = new QPushButton(gridLayoutWidget);
        flipAllBtn->setObjectName("flipAllBtn");

        gridLayout->addWidget(flipAllBtn, 3, 1, 1, 1);

        resetAllBtn = new QPushButton(gridLayoutWidget);
        resetAllBtn->setObjectName("resetAllBtn");

        gridLayout->addWidget(resetAllBtn, 3, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        resetBtn->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        flipBtn->setText(QCoreApplication::translate("MainWindow", "flip", nullptr));
        setBtn->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        setAllBtn->setText(QCoreApplication::translate("MainWindow", "setAll", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        flipAllBtn->setText(QCoreApplication::translate("MainWindow", "flipAll", nullptr));
        resetAllBtn->setText(QCoreApplication::translate("MainWindow", "resetAll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
