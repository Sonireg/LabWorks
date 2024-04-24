/********************************************************************************
** Form generated from reading UI file 'productsinorderwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTSINORDERWIDGET_H
#define UI_PRODUCTSINORDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductsInOrderWidget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *deletingButton;
    QPushButton *sortingButton;
    QTableWidget *productsInOrderTable;
    QComboBox *addingComboBox;
    QPushButton *changingButton;
    QComboBox *sortingComboBox;
    QPushButton *prodAddingButton;
    QLabel *label;

    void setupUi(QWidget *ProductsInOrderWidget)
    {
        if (ProductsInOrderWidget->objectName().isEmpty())
            ProductsInOrderWidget->setObjectName("ProductsInOrderWidget");
        ProductsInOrderWidget->resize(1187, 591);
        gridLayoutWidget = new QWidget(ProductsInOrderWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(130, 30, 891, 371));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        deletingButton = new QPushButton(gridLayoutWidget);
        deletingButton->setObjectName("deletingButton");

        gridLayout->addWidget(deletingButton, 1, 1, 1, 2);

        sortingButton = new QPushButton(gridLayoutWidget);
        sortingButton->setObjectName("sortingButton");

        gridLayout->addWidget(sortingButton, 3, 1, 1, 1);

        productsInOrderTable = new QTableWidget(gridLayoutWidget);
        productsInOrderTable->setObjectName("productsInOrderTable");

        gridLayout->addWidget(productsInOrderTable, 0, 0, 5, 1);

        addingComboBox = new QComboBox(gridLayoutWidget);
        addingComboBox->addItem(QString());
        addingComboBox->addItem(QString());
        addingComboBox->setObjectName("addingComboBox");

        gridLayout->addWidget(addingComboBox, 0, 2, 1, 1);

        changingButton = new QPushButton(gridLayoutWidget);
        changingButton->setObjectName("changingButton");

        gridLayout->addWidget(changingButton, 2, 1, 1, 2);

        sortingComboBox = new QComboBox(gridLayoutWidget);
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->setObjectName("sortingComboBox");

        gridLayout->addWidget(sortingComboBox, 3, 2, 1, 1);

        prodAddingButton = new QPushButton(gridLayoutWidget);
        prodAddingButton->setObjectName("prodAddingButton");

        gridLayout->addWidget(prodAddingButton, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 4, 1, 1, 2);


        retranslateUi(ProductsInOrderWidget);

        QMetaObject::connectSlotsByName(ProductsInOrderWidget);
    } // setupUi

    void retranslateUi(QWidget *ProductsInOrderWidget)
    {
        ProductsInOrderWidget->setWindowTitle(QCoreApplication::translate("ProductsInOrderWidget", "Form", nullptr));
        deletingButton->setText(QCoreApplication::translate("ProductsInOrderWidget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
        sortingButton->setText(QCoreApplication::translate("ProductsInOrderWidget", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276", nullptr));
        addingComboBox->setItemText(0, QCoreApplication::translate("ProductsInOrderWidget", "\320\230\320\274\320\265\320\275\320\270", nullptr));
        addingComboBox->setItemText(1, QCoreApplication::translate("ProductsInOrderWidget", "\320\235\320\276\320\274\320\265\321\200\321\203", nullptr));

        changingButton->setText(QCoreApplication::translate("ProductsInOrderWidget", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        sortingComboBox->setItemText(0, QCoreApplication::translate("ProductsInOrderWidget", "\320\235\320\276\320\274\320\265\321\200\321\203 (\320\277\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(1, QCoreApplication::translate("ProductsInOrderWidget", "\320\235\320\276\320\274\320\265\321\200\321\203 (\320\277\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(2, QCoreApplication::translate("ProductsInOrderWidget", "\320\230\320\274\320\265\320\275\320\270 (\320\277\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(3, QCoreApplication::translate("ProductsInOrderWidget", "\320\230\320\274\320\265\320\275\320\270 (\320\277\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216))", nullptr));
        sortingComboBox->setItemText(4, QCoreApplication::translate("ProductsInOrderWidget", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\321\203 (\320\277\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(5, QCoreApplication::translate("ProductsInOrderWidget", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\321\203 (\320\277\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(6, QCoreApplication::translate("ProductsInOrderWidget", "\320\230\321\202\320\276\320\263\320\276\320\262\320\276\320\271 \321\206\320\265\320\275\320\265 (\320\277\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(7, QCoreApplication::translate("ProductsInOrderWidget", "\320\230\321\202\320\276\320\263\320\276\320\262\320\276\320\271 \321\206\320\265\320\275\320\265 (\320\277\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216)", nullptr));

        prodAddingButton->setText(QCoreApplication::translate("ProductsInOrderWidget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200 \320\277\320\276", nullptr));
        label->setText(QCoreApplication::translate("ProductsInOrderWidget", "\320\230\320\274\321\217 \320\267\320\260\320\272\320\260\320\267\321\207\320\270\320\272\320\260:  \320\246\320\265\320\275\320\260 \320\267\320\260\320\272\320\260\320\267\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductsInOrderWidget: public Ui_ProductsInOrderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTSINORDERWIDGET_H
