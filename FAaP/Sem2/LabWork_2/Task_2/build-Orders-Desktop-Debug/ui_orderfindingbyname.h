/********************************************************************************
** Form generated from reading UI file 'orderfindingbyname.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERFINDINGBYNAME_H
#define UI_ORDERFINDINGBYNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderFindingByName
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QWidget *OrderFindingByName)
    {
        if (OrderFindingByName->objectName().isEmpty())
            OrderFindingByName->setObjectName("OrderFindingByName");
        OrderFindingByName->resize(400, 131);
        gridLayoutWidget = new QWidget(OrderFindingByName);
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

        gridLayout->addWidget(pushButton, 2, 0, 1, 2);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(OrderFindingByName);

        QMetaObject::connectSlotsByName(OrderFindingByName);
    } // setupUi

    void retranslateUi(QWidget *OrderFindingByName)
    {
        OrderFindingByName->setWindowTitle(QCoreApplication::translate("OrderFindingByName", "Form", nullptr));
        label->setText(QCoreApplication::translate("OrderFindingByName", "\320\240\320\265\320\272\320\262\320\270\320\267\320\270\321\202\321\213:", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderFindingByName", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrderFindingByName: public Ui_OrderFindingByName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERFINDINGBYNAME_H
