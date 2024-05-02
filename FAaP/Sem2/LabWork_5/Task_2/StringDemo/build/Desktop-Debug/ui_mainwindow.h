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
#include <QtWidgets/QLineEdit>
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
    QPushButton *memcmpButton;
    QPushButton *strtokButton;
    QLabel *outLabel;
    QPushButton *strncpyButton;
    QLineEdit *str1LineEdit;
    QPushButton *strcpyButton;
    QLabel *str2Label;
    QSpinBox *nSpinBox;
    QPushButton *strlenButton;
    QPushButton *constructButton;
    QPushButton *strcollButton;
    QPushButton *memsetButton;
    QPushButton *strcmpButton;
    QPushButton *strncatButton;
    QLineEdit *str2LineEdit;
    QLabel *strnLabel;
    QPushButton *memcpyButton;
    QPushButton *strxfrmButton;
    QLabel *str1Label;
    QLabel *label;
    QPushButton *memmoveButton;
    QPushButton *strcatButton;
    QPushButton *strncmpButton;
    QPushButton *strerrorButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(835, 355);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 831, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        memcmpButton = new QPushButton(gridLayoutWidget);
        memcmpButton->setObjectName("memcmpButton");

        gridLayout->addWidget(memcmpButton, 4, 1, 1, 1);

        strtokButton = new QPushButton(gridLayoutWidget);
        strtokButton->setObjectName("strtokButton");

        gridLayout->addWidget(strtokButton, 7, 0, 1, 1);

        outLabel = new QLabel(gridLayoutWidget);
        outLabel->setObjectName("outLabel");
        outLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(outLabel, 3, 0, 1, 7);

        strncpyButton = new QPushButton(gridLayoutWidget);
        strncpyButton->setObjectName("strncpyButton");

        gridLayout->addWidget(strncpyButton, 5, 1, 1, 1);

        str1LineEdit = new QLineEdit(gridLayoutWidget);
        str1LineEdit->setObjectName("str1LineEdit");
        str1LineEdit->setMaxLength(30);

        gridLayout->addWidget(str1LineEdit, 0, 1, 1, 1);

        strcpyButton = new QPushButton(gridLayoutWidget);
        strcpyButton->setObjectName("strcpyButton");

        gridLayout->addWidget(strcpyButton, 5, 0, 1, 1);

        str2Label = new QLabel(gridLayoutWidget);
        str2Label->setObjectName("str2Label");
        str2Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(str2Label, 0, 3, 1, 1);

        nSpinBox = new QSpinBox(gridLayoutWidget);
        nSpinBox->setObjectName("nSpinBox");
        nSpinBox->setMaximum(4);

        gridLayout->addWidget(nSpinBox, 0, 6, 1, 1);

        strlenButton = new QPushButton(gridLayoutWidget);
        strlenButton->setObjectName("strlenButton");

        gridLayout->addWidget(strlenButton, 7, 4, 1, 1);

        constructButton = new QPushButton(gridLayoutWidget);
        constructButton->setObjectName("constructButton");

        gridLayout->addWidget(constructButton, 4, 0, 1, 1);

        strcollButton = new QPushButton(gridLayoutWidget);
        strcollButton->setObjectName("strcollButton");

        gridLayout->addWidget(strcollButton, 6, 1, 1, 1);

        memsetButton = new QPushButton(gridLayoutWidget);
        memsetButton->setObjectName("memsetButton");

        gridLayout->addWidget(memsetButton, 7, 1, 1, 1);

        strcmpButton = new QPushButton(gridLayoutWidget);
        strcmpButton->setObjectName("strcmpButton");

        gridLayout->addWidget(strcmpButton, 6, 0, 1, 1);

        strncatButton = new QPushButton(gridLayoutWidget);
        strncatButton->setObjectName("strncatButton");

        gridLayout->addWidget(strncatButton, 5, 4, 1, 1);

        str2LineEdit = new QLineEdit(gridLayoutWidget);
        str2LineEdit->setObjectName("str2LineEdit");
        str2LineEdit->setMaxLength(30);

        gridLayout->addWidget(str2LineEdit, 0, 4, 1, 1);

        strnLabel = new QLabel(gridLayoutWidget);
        strnLabel->setObjectName("strnLabel");
        strnLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(strnLabel, 0, 5, 1, 1);

        memcpyButton = new QPushButton(gridLayoutWidget);
        memcpyButton->setObjectName("memcpyButton");

        gridLayout->addWidget(memcpyButton, 4, 4, 1, 1);

        strxfrmButton = new QPushButton(gridLayoutWidget);
        strxfrmButton->setObjectName("strxfrmButton");

        gridLayout->addWidget(strxfrmButton, 6, 4, 1, 1);

        str1Label = new QLabel(gridLayoutWidget);
        str1Label->setObjectName("str1Label");
        str1Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(str1Label, 0, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 2, 1, 1);

        memmoveButton = new QPushButton(gridLayoutWidget);
        memmoveButton->setObjectName("memmoveButton");

        gridLayout->addWidget(memmoveButton, 4, 2, 1, 2);

        strcatButton = new QPushButton(gridLayoutWidget);
        strcatButton->setObjectName("strcatButton");

        gridLayout->addWidget(strcatButton, 5, 2, 1, 2);

        strncmpButton = new QPushButton(gridLayoutWidget);
        strncmpButton->setObjectName("strncmpButton");

        gridLayout->addWidget(strncmpButton, 6, 2, 1, 2);

        strerrorButton = new QPushButton(gridLayoutWidget);
        strerrorButton->setObjectName("strerrorButton");

        gridLayout->addWidget(strerrorButton, 7, 2, 1, 2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        memcmpButton->setText(QCoreApplication::translate("MainWindow", "memcmp", nullptr));
        strtokButton->setText(QCoreApplication::translate("MainWindow", "strtok", nullptr));
        outLabel->setText(QString());
        strncpyButton->setText(QCoreApplication::translate("MainWindow", "strncpy", nullptr));
        strcpyButton->setText(QCoreApplication::translate("MainWindow", "strcpy", nullptr));
        str2Label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\260 2 = ", nullptr));
        strlenButton->setText(QCoreApplication::translate("MainWindow", "strlen", nullptr));
        constructButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\277\320\265\321\200\320\262\321\203\321\216 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        strcollButton->setText(QCoreApplication::translate("MainWindow", "strcoll", nullptr));
        memsetButton->setText(QCoreApplication::translate("MainWindow", "memset", nullptr));
        strcmpButton->setText(QCoreApplication::translate("MainWindow", "strcmp", nullptr));
        strncatButton->setText(QCoreApplication::translate("MainWindow", "strncat", nullptr));
        strnLabel->setText(QCoreApplication::translate("MainWindow", "n = ", nullptr));
        memcpyButton->setText(QCoreApplication::translate("MainWindow", "memcpy", nullptr));
        strxfrmButton->setText(QCoreApplication::translate("MainWindow", "strxfrm", nullptr));
        str1Label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\260 1 = ", nullptr));
        label->setText(QString());
        memmoveButton->setText(QCoreApplication::translate("MainWindow", "memmove", nullptr));
        strcatButton->setText(QCoreApplication::translate("MainWindow", "strcat", nullptr));
        strncmpButton->setText(QCoreApplication::translate("MainWindow", "strncmp", nullptr));
        strerrorButton->setText(QCoreApplication::translate("MainWindow", "strerror", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
