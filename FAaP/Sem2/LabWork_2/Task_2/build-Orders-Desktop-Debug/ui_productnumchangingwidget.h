/********************************************************************************
** Form generated from reading UI file 'productnumchangingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTNUMCHANGINGWIDGET_H
#define UI_PRODUCTNUMCHANGINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductNumChangingWidget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *ProductNumChangingWidget)
    {
        if (ProductNumChangingWidget->objectName().isEmpty())
            ProductNumChangingWidget->setObjectName("ProductNumChangingWidget");
        ProductNumChangingWidget->resize(400, 110);
        gridLayoutWidget = new QWidget(ProductNumChangingWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);
        spinBox->setMaximum(999999);

        gridLayout->addWidget(spinBox, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);


        retranslateUi(ProductNumChangingWidget);

        QMetaObject::connectSlotsByName(ProductNumChangingWidget);
    } // setupUi

    void retranslateUi(QWidget *ProductNumChangingWidget)
    {
        ProductNumChangingWidget->setWindowTitle(QCoreApplication::translate("ProductNumChangingWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ProductNumChangingWidget", "\320\235\320\276\320\262\321\213\320\271 \320\275\320\276\320\274\320\265\321\200:", nullptr));
        pushButton->setText(QCoreApplication::translate("ProductNumChangingWidget", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductNumChangingWidget: public Ui_ProductNumChangingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTNUMCHANGINGWIDGET_H
