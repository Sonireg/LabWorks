/********************************************************************************
** Form generated from reading UI file 'orderfindingbydate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERFINDINGBYDATE_H
#define UI_ORDERFINDINGBYDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderFindingByDate
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QDateEdit *lineEdit;

    void setupUi(QWidget *OrderFindingByDate)
    {
        if (OrderFindingByDate->objectName().isEmpty())
            OrderFindingByDate->setObjectName("OrderFindingByDate");
        OrderFindingByDate->resize(400, 133);
        gridLayoutWidget = new QWidget(OrderFindingByDate);
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

        lineEdit = new QDateEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        retranslateUi(OrderFindingByDate);

        QMetaObject::connectSlotsByName(OrderFindingByDate);
    } // setupUi

    void retranslateUi(QWidget *OrderFindingByDate)
    {
        OrderFindingByDate->setWindowTitle(QCoreApplication::translate("OrderFindingByDate", "Form", nullptr));
        label->setText(QCoreApplication::translate("OrderFindingByDate", "\320\224\320\260\321\202\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderFindingByDate", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderFindingByDate: public Ui_OrderFindingByDate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERFINDINGBYDATE_H
