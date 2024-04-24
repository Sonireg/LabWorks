/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *DatesTable;
    QLabel *BirthdayLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *AddDate_2;
    QPushButton *EnterDirthday_2;
    QPushButton *OpenFileButton_2;
    QPushButton *ChangeDate_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1556, 796);
        MainWindow->setMaximumSize(QSize(1765, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        DatesTable = new QTableWidget(centralwidget);
        DatesTable->setObjectName("DatesTable");
        DatesTable->setGeometry(QRect(0, 0, 1261, 741));
        BirthdayLabel = new QLabel(centralwidget);
        BirthdayLabel->setObjectName("BirthdayLabel");
        BirthdayLabel->setGeometry(QRect(1270, 250, 251, 31));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(1270, 60, 276, 171));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        AddDate_2 = new QPushButton(verticalLayoutWidget);
        AddDate_2->setObjectName("AddDate_2");

        verticalLayout_4->addWidget(AddDate_2);

        EnterDirthday_2 = new QPushButton(verticalLayoutWidget);
        EnterDirthday_2->setObjectName("EnterDirthday_2");

        verticalLayout_4->addWidget(EnterDirthday_2);

        OpenFileButton_2 = new QPushButton(verticalLayoutWidget);
        OpenFileButton_2->setObjectName("OpenFileButton_2");

        verticalLayout_4->addWidget(OpenFileButton_2);

        ChangeDate_2 = new QPushButton(verticalLayoutWidget);
        ChangeDate_2->setObjectName("ChangeDate_2");

        verticalLayout_4->addWidget(ChangeDate_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1556, 23));
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
        BirthdayLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        AddDate_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\321\202\321\203 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        EnterDirthday_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\264\320\265\320\275\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        OpenFileButton_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273 c \320\264\320\260\321\202\320\260\320\274\320\270", nullptr));
        ChangeDate_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\321\202\321\203 \320\262 \321\204\320\260\320\271\320\273\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
