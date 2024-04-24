/********************************************************************************
** Form generated from reading UI file 'orderproductamountchanger.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERPRODUCTAMOUNTCHANGER_H
#define UI_ORDERPRODUCTAMOUNTCHANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderProductAmountChanger
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *OrderProductAmountChanger)
    {
        if (OrderProductAmountChanger->objectName().isEmpty())
            OrderProductAmountChanger->setObjectName("OrderProductAmountChanger");
        OrderProductAmountChanger->resize(400, 132);
        gridLayoutWidget = new QWidget(OrderProductAmountChanger);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);
        spinBox->setMaximum(10000);

        gridLayout->addWidget(spinBox, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);


        retranslateUi(OrderProductAmountChanger);

        QMetaObject::connectSlotsByName(OrderProductAmountChanger);
    } // setupUi

    void retranslateUi(QWidget *OrderProductAmountChanger)
    {
        OrderProductAmountChanger->setWindowTitle(QCoreApplication::translate("OrderProductAmountChanger", "Form", nullptr));
        label->setText(QCoreApplication::translate("OrderProductAmountChanger", "\320\235\320\276\320\262\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276:", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderProductAmountChanger", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderProductAmountChanger: public Ui_OrderProductAmountChanger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERPRODUCTAMOUNTCHANGER_H
