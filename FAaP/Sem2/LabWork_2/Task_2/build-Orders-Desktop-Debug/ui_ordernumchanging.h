/********************************************************************************
** Form generated from reading UI file 'ordernumchanging.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERNUMCHANGING_H
#define UI_ORDERNUMCHANGING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderNumChanging
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QSpinBox *lineEdit;

    void setupUi(QWidget *OrderNumChanging)
    {
        if (OrderNumChanging->objectName().isEmpty())
            OrderNumChanging->setObjectName("OrderNumChanging");
        OrderNumChanging->resize(400, 138);
        gridLayoutWidget = new QWidget(OrderNumChanging);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);

        lineEdit = new QSpinBox(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimum(1);
        lineEdit->setMaximum(999999);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        retranslateUi(OrderNumChanging);

        QMetaObject::connectSlotsByName(OrderNumChanging);
    } // setupUi

    void retranslateUi(QWidget *OrderNumChanging)
    {
        OrderNumChanging->setWindowTitle(QCoreApplication::translate("OrderNumChanging", "Form", nullptr));
        label->setText(QCoreApplication::translate("OrderNumChanging", "\320\235\320\276\320\262\321\213\320\271 \320\275\320\276\320\274\320\265\321\200:", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderNumChanging", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderNumChanging: public Ui_OrderNumChanging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERNUMCHANGING_H
