/********************************************************************************
** Form generated from reading UI file 'productdelitingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTDELITINGWIDGET_H
#define UI_PRODUCTDELITINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductDelitingWidget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *ProductDelitingWidget)
    {
        if (ProductDelitingWidget->objectName().isEmpty())
            ProductDelitingWidget->setObjectName("ProductDelitingWidget");
        ProductDelitingWidget->resize(243, 92);
        gridLayoutWidget = new QWidget(ProductDelitingWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 241, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(999999);

        gridLayout->addWidget(spinBox, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);


        retranslateUi(ProductDelitingWidget);

        QMetaObject::connectSlotsByName(ProductDelitingWidget);
    } // setupUi

    void retranslateUi(QWidget *ProductDelitingWidget)
    {
        ProductDelitingWidget->setWindowTitle(QCoreApplication::translate("ProductDelitingWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ProductDelitingWidget", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("ProductDelitingWidget", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductDelitingWidget: public Ui_ProductDelitingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTDELITINGWIDGET_H
