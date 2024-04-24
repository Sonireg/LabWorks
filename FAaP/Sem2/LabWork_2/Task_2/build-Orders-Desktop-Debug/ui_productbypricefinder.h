/********************************************************************************
** Form generated from reading UI file 'productbypricefinder.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTBYPRICEFINDER_H
#define UI_PRODUCTBYPRICEFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductByPriceFinder
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QDoubleSpinBox *lineEdit;

    void setupUi(QWidget *ProductByPriceFinder)
    {
        if (ProductByPriceFinder->objectName().isEmpty())
            ProductByPriceFinder->setObjectName("ProductByPriceFinder");
        ProductByPriceFinder->resize(400, 122);
        gridLayoutWidget = new QWidget(ProductByPriceFinder);
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

        lineEdit = new QDoubleSpinBox(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimum(0.010000000000000);
        lineEdit->setMaximum(99999999.989999994635582);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        retranslateUi(ProductByPriceFinder);

        QMetaObject::connectSlotsByName(ProductByPriceFinder);
    } // setupUi

    void retranslateUi(QWidget *ProductByPriceFinder)
    {
        ProductByPriceFinder->setWindowTitle(QCoreApplication::translate("ProductByPriceFinder", "Form", nullptr));
        label->setText(QCoreApplication::translate("ProductByPriceFinder", "\320\246\320\265\320\275\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("ProductByPriceFinder", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductByPriceFinder: public Ui_ProductByPriceFinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTBYPRICEFINDER_H
