/********************************************************************************
** Form generated from reading UI file 'addingproducttoorder.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINGPRODUCTTOORDER_H
#define UI_ADDINGPRODUCTTOORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddingProductToOrder
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *productCodeSpinBox;
    QSpinBox *amountOfProductSpintBox;
    QLabel *label;
    QLabel *label_3;
    QPushButton *confirmButton;

    void setupUi(QWidget *AddingProductToOrder)
    {
        if (AddingProductToOrder->objectName().isEmpty())
            AddingProductToOrder->setObjectName("AddingProductToOrder");
        AddingProductToOrder->resize(419, 192);
        AddingProductToOrder->setMinimumSize(QSize(200, 100));
        gridLayoutWidget = new QWidget(AddingProductToOrder);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 0, 401, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        productCodeSpinBox = new QSpinBox(gridLayoutWidget);
        productCodeSpinBox->setObjectName("productCodeSpinBox");
        productCodeSpinBox->setMinimum(1);
        productCodeSpinBox->setMaximum(999999);

        gridLayout->addWidget(productCodeSpinBox, 0, 1, 1, 1);

        amountOfProductSpintBox = new QSpinBox(gridLayoutWidget);
        amountOfProductSpintBox->setObjectName("amountOfProductSpintBox");
        amountOfProductSpintBox->setMinimum(1);
        amountOfProductSpintBox->setMaximum(10000);

        gridLayout->addWidget(amountOfProductSpintBox, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        confirmButton = new QPushButton(gridLayoutWidget);
        confirmButton->setObjectName("confirmButton");

        gridLayout->addWidget(confirmButton, 2, 0, 1, 2);


        retranslateUi(AddingProductToOrder);

        QMetaObject::connectSlotsByName(AddingProductToOrder);
    } // setupUi

    void retranslateUi(QWidget *AddingProductToOrder)
    {
        AddingProductToOrder->setWindowTitle(QCoreApplication::translate("AddingProductToOrder", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddingProductToOrder", "\320\232\320\276\320\264 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("AddingProductToOrder", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        confirmButton->setText(QCoreApplication::translate("AddingProductToOrder", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddingProductToOrder: public Ui_AddingProductToOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINGPRODUCTTOORDER_H
