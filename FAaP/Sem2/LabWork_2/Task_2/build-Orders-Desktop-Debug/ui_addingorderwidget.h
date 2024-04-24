/********************************************************************************
** Form generated from reading UI file 'addingorderwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINGORDERWIDGET_H
#define UI_ADDINGORDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddingOrderWidget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *confirmButton;
    QLineEdit *ordererNameEditLine;
    QLabel *label_2;
    QSpinBox *OrderNum;
    QLabel *label;
    QLabel *label_3;
    QDateEdit *dateEdit;

    void setupUi(QWidget *AddingOrderWidget)
    {
        if (AddingOrderWidget->objectName().isEmpty())
            AddingOrderWidget->setObjectName("AddingOrderWidget");
        AddingOrderWidget->resize(770, 250);
        AddingOrderWidget->setMinimumSize(QSize(300, 100));
        gridLayoutWidget = new QWidget(AddingOrderWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 751, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        confirmButton = new QPushButton(gridLayoutWidget);
        confirmButton->setObjectName("confirmButton");

        gridLayout->addWidget(confirmButton, 3, 0, 1, 3);

        ordererNameEditLine = new QLineEdit(gridLayoutWidget);
        ordererNameEditLine->setObjectName("ordererNameEditLine");

        gridLayout->addWidget(ordererNameEditLine, 2, 1, 1, 2);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        OrderNum = new QSpinBox(gridLayoutWidget);
        OrderNum->setObjectName("OrderNum");
        OrderNum->setMinimum(1);
        OrderNum->setMaximum(999999);

        gridLayout->addWidget(OrderNum, 0, 1, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dateEdit = new QDateEdit(gridLayoutWidget);
        dateEdit->setObjectName("dateEdit");

        gridLayout->addWidget(dateEdit, 1, 1, 1, 2);


        retranslateUi(AddingOrderWidget);

        QMetaObject::connectSlotsByName(AddingOrderWidget);
    } // setupUi

    void retranslateUi(QWidget *AddingOrderWidget)
    {
        AddingOrderWidget->setWindowTitle(QCoreApplication::translate("AddingOrderWidget", "Form", nullptr));
        confirmButton->setText(QCoreApplication::translate("AddingOrderWidget", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("AddingOrderWidget", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\272\320\260\320\267\320\260:", nullptr));
        label->setText(QCoreApplication::translate("AddingOrderWidget", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\272\320\260\320\267\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("AddingOrderWidget", "\320\240\320\265\320\272\320\262\320\270\320\267\320\270\321\202\321\213 \320\267\320\260\320\272\320\260\320\267\321\207\320\270\320\272\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddingOrderWidget: public Ui_AddingOrderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINGORDERWIDGET_H
