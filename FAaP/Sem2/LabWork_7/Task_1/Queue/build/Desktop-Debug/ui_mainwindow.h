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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QListWidget *demoMethodsList;
    QPushButton *popButton;
    QSpinBox *insertedElComboBox;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *insertButton;
    QPushButton *fillButton;
    QListWidget *queue1Widget;
    QListWidget *queue2Widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(854, 728);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 851, 681));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 851, 651));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        demoMethodsList = new QListWidget(gridLayoutWidget);
        demoMethodsList->setObjectName("demoMethodsList");

        gridLayout->addWidget(demoMethodsList, 0, 0, 1, 4);

        popButton = new QPushButton(gridLayoutWidget);
        popButton->setObjectName("popButton");

        gridLayout->addWidget(popButton, 1, 1, 1, 1);

        insertedElComboBox = new QSpinBox(gridLayoutWidget);
        insertedElComboBox->setObjectName("insertedElComboBox");

        gridLayout->addWidget(insertedElComboBox, 1, 3, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 851, 651));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        insertButton = new QPushButton(gridLayoutWidget_2);
        insertButton->setObjectName("insertButton");

        gridLayout_2->addWidget(insertButton, 1, 2, 1, 1);

        fillButton = new QPushButton(gridLayoutWidget_2);
        fillButton->setObjectName("fillButton");

        gridLayout_2->addWidget(fillButton, 1, 0, 1, 2);

        queue1Widget = new QListWidget(gridLayoutWidget_2);
        queue1Widget->setObjectName("queue1Widget");

        gridLayout_2->addWidget(queue1Widget, 0, 0, 1, 1);

        queue2Widget = new QListWidget(gridLayoutWidget_2);
        queue2Widget->setObjectName("queue2Widget");

        gridLayout_2->addWidget(queue2Widget, 0, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 854, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        popButton->setText(QCoreApplication::translate("MainWindow", "Pop", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Push", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\273\321\217\320\265\320\274\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        insertButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \320\262\321\202\320\276\321\200\320\276\320\271 \320\276\321\207\320\265\321\200\320\265\320\264\320\270", nullptr));
        fillButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\276\321\207\320\265\321\200\320\265\320\264\320\270 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\320\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
