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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLCDNumber *accuracyLCD;
    QLCDNumber *wpmLCD;
    QLabel *testLabel;
    QLabel *accuracyLabel;
    QLCDNumber *timerLCD;
    QLabel *wpmLabel;
    QLabel *timerLabel;
    QPushButton *startButton;
    QPushButton *stopButton;
    QComboBox *languageChangeComboBox;
    QLabel *chooseLanguageLabel;
    QPushButton *openTestButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(866, 472);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 1341, 561));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        accuracyLCD = new QLCDNumber(gridLayoutWidget);
        accuracyLCD->setObjectName("accuracyLCD");
        accuracyLCD->setSmallDecimalPoint(false);
        accuracyLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(accuracyLCD, 2, 1, 1, 1);

        wpmLCD = new QLCDNumber(gridLayoutWidget);
        wpmLCD->setObjectName("wpmLCD");

        gridLayout->addWidget(wpmLCD, 2, 2, 1, 1);

        testLabel = new QLabel(gridLayoutWidget);
        testLabel->setObjectName("testLabel");

        gridLayout->addWidget(testLabel, 4, 0, 1, 3);

        accuracyLabel = new QLabel(gridLayoutWidget);
        accuracyLabel->setObjectName("accuracyLabel");

        gridLayout->addWidget(accuracyLabel, 0, 1, 1, 1);

        timerLCD = new QLCDNumber(gridLayoutWidget);
        timerLCD->setObjectName("timerLCD");

        gridLayout->addWidget(timerLCD, 2, 0, 1, 1);

        wpmLabel = new QLabel(gridLayoutWidget);
        wpmLabel->setObjectName("wpmLabel");

        gridLayout->addWidget(wpmLabel, 0, 2, 1, 1);

        timerLabel = new QLabel(gridLayoutWidget);
        timerLabel->setObjectName("timerLabel");

        gridLayout->addWidget(timerLabel, 0, 0, 1, 1);

        startButton = new QPushButton(gridLayoutWidget);
        startButton->setObjectName("startButton");

        gridLayout->addWidget(startButton, 5, 0, 1, 1);

        stopButton = new QPushButton(gridLayoutWidget);
        stopButton->setObjectName("stopButton");

        gridLayout->addWidget(stopButton, 6, 0, 1, 1);

        languageChangeComboBox = new QComboBox(gridLayoutWidget);
        languageChangeComboBox->addItem(QString());
        languageChangeComboBox->addItem(QString());
        languageChangeComboBox->addItem(QString());
        languageChangeComboBox->addItem(QString());
        languageChangeComboBox->addItem(QString());
        languageChangeComboBox->addItem(QString());
        languageChangeComboBox->setObjectName("languageChangeComboBox");

        gridLayout->addWidget(languageChangeComboBox, 5, 2, 1, 1);

        chooseLanguageLabel = new QLabel(gridLayoutWidget);
        chooseLanguageLabel->setObjectName("chooseLanguageLabel");
        chooseLanguageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(chooseLanguageLabel, 5, 1, 1, 1);

        openTestButton = new QPushButton(gridLayoutWidget);
        openTestButton->setObjectName("openTestButton");

        gridLayout->addWidget(openTestButton, 6, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        testLabel->setText(QString());
        accuracyLabel->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\320\276\321\201\321\202\321\214, %:", nullptr));
        wpmLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\262 \320\262 \320\274\320\270\320\275\321\203\321\202\321\203:", nullptr));
        timerLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217, \320\264\321\201:", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\320\276\320\275\321\207\320\270\321\202\321\214", nullptr));
        languageChangeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\244\321\200\320\260\320\275\321\206\321\203\320\267\321\201\320\272\320\270\320\271", nullptr));
        languageChangeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\235\320\265\320\274\320\265\321\206\320\272\320\270\320\271", nullptr));
        languageChangeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\220\321\200\320\260\320\261\321\201\320\272\320\270\320\271", nullptr));
        languageChangeComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\221\320\265\320\273\320\276\321\200\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        languageChangeComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\230\320\262\321\200\320\270\321\202", nullptr));
        languageChangeComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\320\232\320\270\321\202\320\260\320\271\321\201\320\272\320\270\320\271", nullptr));

        chooseLanguageLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\217\320\267\321\213\320\272\320\260:", nullptr));
        openTestButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
