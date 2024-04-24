/********************************************************************************
** Form generated from reading UI file 'orderfindingbynum.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERFINDINGBYNUM_H
#define UI_ORDERFINDINGBYNUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderFindingByNum
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QSpinBox *lineEdit;

    void setupUi(QWidget *OrderFindingByNum)
    {
        if (OrderFindingByNum->objectName().isEmpty())
            OrderFindingByNum->setObjectName("OrderFindingByNum");
        OrderFindingByNum->resize(402, 133);
        gridLayoutWidget = new QWidget(OrderFindingByNum);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);

        lineEdit = new QSpinBox(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimum(1);
        lineEdit->setMaximum(999999);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        retranslateUi(OrderFindingByNum);

        QMetaObject::connectSlotsByName(OrderFindingByNum);
    } // setupUi

    void retranslateUi(QWidget *OrderFindingByNum)
    {
        OrderFindingByNum->setWindowTitle(QCoreApplication::translate("OrderFindingByNum", "Form", nullptr));
        label->setText(QCoreApplication::translate("OrderFindingByNum", "\320\235\320\276\320\274\320\265\321\200:", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderFindingByNum", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderFindingByNum: public Ui_OrderFindingByNum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERFINDINGBYNUM_H
