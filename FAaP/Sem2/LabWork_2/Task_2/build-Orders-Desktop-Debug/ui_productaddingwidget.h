/********************************************************************************
** Form generated from reading UI file 'productaddingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTADDINGWIDGET_H
#define UI_PRODUCTADDINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductAddingWidget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *ProdName;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *ConfirmButton;
    QSpinBox *ProdCode;
    QDoubleSpinBox *ProdPrice;

    void setupUi(QWidget *ProductAddingWidget)
    {
        if (ProductAddingWidget->objectName().isEmpty())
            ProductAddingWidget->setObjectName("ProductAddingWidget");
        ProductAddingWidget->resize(700, 213);
        ProductAddingWidget->setMinimumSize(QSize(700, 200));
        gridLayoutWidget = new QWidget(ProductAddingWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 661, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ProdName = new QLineEdit(gridLayoutWidget);
        ProdName->setObjectName("ProdName");

        gridLayout->addWidget(ProdName, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        ConfirmButton = new QPushButton(gridLayoutWidget);
        ConfirmButton->setObjectName("ConfirmButton");

        gridLayout->addWidget(ConfirmButton, 3, 0, 1, 2);

        ProdCode = new QSpinBox(gridLayoutWidget);
        ProdCode->setObjectName("ProdCode");
        ProdCode->setMinimum(1);
        ProdCode->setMaximum(999999);

        gridLayout->addWidget(ProdCode, 1, 1, 1, 1);

        ProdPrice = new QDoubleSpinBox(gridLayoutWidget);
        ProdPrice->setObjectName("ProdPrice");
        ProdPrice->setMinimum(0.010000000000000);
        ProdPrice->setMaximum(10000000.000000000000000);

        gridLayout->addWidget(ProdPrice, 2, 1, 1, 1);


        retranslateUi(ProductAddingWidget);

        QMetaObject::connectSlotsByName(ProductAddingWidget);
    } // setupUi

    void retranslateUi(QWidget *ProductAddingWidget)
    {
        ProductAddingWidget->setWindowTitle(QCoreApplication::translate("ProductAddingWidget", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("ProductAddingWidget", "\320\246\320\265\320\275\320\260 \320\267\320\260 \320\265\320\264\320\270\320\275\320\270\321\206\321\203 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label->setText(QCoreApplication::translate("ProductAddingWidget", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("ProductAddingWidget", "\320\232\320\276\320\264 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        ConfirmButton->setText(QCoreApplication::translate("ProductAddingWidget", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductAddingWidget: public Ui_ProductAddingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTADDINGWIDGET_H
