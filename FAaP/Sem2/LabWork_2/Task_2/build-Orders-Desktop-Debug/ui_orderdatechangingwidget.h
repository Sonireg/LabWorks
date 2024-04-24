/********************************************************************************
** Form generated from reading UI file 'orderdatechangingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERDATECHANGINGWIDGET_H
#define UI_ORDERDATECHANGINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderDateChangingWidget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QDateEdit *lineEdit;

    void setupUi(QWidget *OrderDateChangingWidget)
    {
        if (OrderDateChangingWidget->objectName().isEmpty())
            OrderDateChangingWidget->setObjectName("OrderDateChangingWidget");
        OrderDateChangingWidget->resize(400, 141);
        gridLayoutWidget = new QWidget(OrderDateChangingWidget);
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

        lineEdit = new QDateEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        retranslateUi(OrderDateChangingWidget);

        QMetaObject::connectSlotsByName(OrderDateChangingWidget);
    } // setupUi

    void retranslateUi(QWidget *OrderDateChangingWidget)
    {
        OrderDateChangingWidget->setWindowTitle(QCoreApplication::translate("OrderDateChangingWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("OrderDateChangingWidget", "\320\235\320\276\320\262\320\260\321\217 \320\264\320\260\321\202\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderDateChangingWidget", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderDateChangingWidget: public Ui_OrderDateChangingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERDATECHANGINGWIDGET_H
