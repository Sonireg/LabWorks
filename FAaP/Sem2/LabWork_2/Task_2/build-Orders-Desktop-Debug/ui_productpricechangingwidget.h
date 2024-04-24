/********************************************************************************
** Form generated from reading UI file 'productpricechangingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTPRICECHANGINGWIDGET_H
#define UI_PRODUCTPRICECHANGINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductPriceChangingWidget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QWidget *ProductPriceChangingWidget)
    {
        if (ProductPriceChangingWidget->objectName().isEmpty())
            ProductPriceChangingWidget->setObjectName("ProductPriceChangingWidget");
        ProductPriceChangingWidget->resize(400, 110);
        gridLayoutWidget = new QWidget(ProductPriceChangingWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 111));
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

        doubleSpinBox = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setMinimum(0.010000000000000);
        doubleSpinBox->setMaximum(999999999.899999976158142);

        gridLayout->addWidget(doubleSpinBox, 0, 1, 1, 1);


        retranslateUi(ProductPriceChangingWidget);

        QMetaObject::connectSlotsByName(ProductPriceChangingWidget);
    } // setupUi

    void retranslateUi(QWidget *ProductPriceChangingWidget)
    {
        ProductPriceChangingWidget->setWindowTitle(QCoreApplication::translate("ProductPriceChangingWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ProductPriceChangingWidget", "\320\235\320\276\320\262\320\260\321\217 \321\206\320\265\320\275\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("ProductPriceChangingWidget", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductPriceChangingWidget: public Ui_ProductPriceChangingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTPRICECHANGINGWIDGET_H
