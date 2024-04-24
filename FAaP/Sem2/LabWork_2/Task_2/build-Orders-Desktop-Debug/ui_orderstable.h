/********************************************************************************
** Form generated from reading UI file 'orderstable.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSTABLE_H
#define UI_ORDERSTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrdersTable
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *openPriceListButton;
    QPushButton *searchButton;
    QPushButton *deletingBtton;
    QPushButton *addingOrderButton;
    QComboBox *searchComboBox;
    QTableWidget *ordersTable;
    QPushButton *sortOrdersButton;
    QComboBox *sortingOrdersComboBox;
    QPushButton *changeOrderButton;
    QComboBox *changingOrderComboBox;

    void setupUi(QWidget *OrdersTable)
    {
        if (OrdersTable->objectName().isEmpty())
            OrdersTable->setObjectName("OrdersTable");
        OrdersTable->resize(1283, 666);
        OrdersTable->setMinimumSize(QSize(700, 500));
        gridLayoutWidget = new QWidget(OrdersTable);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 60, 941, 551));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        openPriceListButton = new QPushButton(gridLayoutWidget);
        openPriceListButton->setObjectName("openPriceListButton");

        gridLayout->addWidget(openPriceListButton, 5, 1, 2, 2);

        searchButton = new QPushButton(gridLayoutWidget);
        searchButton->setObjectName("searchButton");

        gridLayout->addWidget(searchButton, 3, 1, 1, 1);

        deletingBtton = new QPushButton(gridLayoutWidget);
        deletingBtton->setObjectName("deletingBtton");

        gridLayout->addWidget(deletingBtton, 4, 1, 1, 2);

        addingOrderButton = new QPushButton(gridLayoutWidget);
        addingOrderButton->setObjectName("addingOrderButton");

        gridLayout->addWidget(addingOrderButton, 0, 1, 1, 2);

        searchComboBox = new QComboBox(gridLayoutWidget);
        searchComboBox->setObjectName("searchComboBox");

        gridLayout->addWidget(searchComboBox, 3, 2, 1, 1);

        ordersTable = new QTableWidget(gridLayoutWidget);
        ordersTable->setObjectName("ordersTable");

        gridLayout->addWidget(ordersTable, 0, 0, 8, 1);

        sortOrdersButton = new QPushButton(gridLayoutWidget);
        sortOrdersButton->setObjectName("sortOrdersButton");

        gridLayout->addWidget(sortOrdersButton, 2, 1, 1, 1);

        sortingOrdersComboBox = new QComboBox(gridLayoutWidget);
        sortingOrdersComboBox->setObjectName("sortingOrdersComboBox");

        gridLayout->addWidget(sortingOrdersComboBox, 2, 2, 1, 1);

        changeOrderButton = new QPushButton(gridLayoutWidget);
        changeOrderButton->setObjectName("changeOrderButton");

        gridLayout->addWidget(changeOrderButton, 1, 1, 1, 1);

        changingOrderComboBox = new QComboBox(gridLayoutWidget);
        changingOrderComboBox->setObjectName("changingOrderComboBox");

        gridLayout->addWidget(changingOrderComboBox, 1, 2, 1, 1);


        retranslateUi(OrdersTable);

        QMetaObject::connectSlotsByName(OrdersTable);
    } // setupUi

    void retranslateUi(QWidget *OrdersTable)
    {
        OrdersTable->setWindowTitle(QCoreApplication::translate("OrdersTable", "Form", nullptr));
        openPriceListButton->setText(QCoreApplication::translate("OrdersTable", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\260\320\271\321\201-\320\273\320\270\321\201\321\202", nullptr));
        searchButton->setText(QCoreApplication::translate("OrdersTable", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276", nullptr));
        deletingBtton->setText(QCoreApplication::translate("OrdersTable", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
        addingOrderButton->setText(QCoreApplication::translate("OrdersTable", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
        sortOrdersButton->setText(QCoreApplication::translate("OrdersTable", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276", nullptr));
        changeOrderButton->setText(QCoreApplication::translate("OrdersTable", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrdersTable: public Ui_OrdersTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSTABLE_H
