/********************************************************************************
** Form generated from reading UI file 'productnamechangingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTNAMECHANGINGWIDGET_H
#define UI_PRODUCTNAMECHANGINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductNameChangingWidget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *ProductNameChangingWidget)
    {
        if (ProductNameChangingWidget->objectName().isEmpty())
            ProductNameChangingWidget->setObjectName("ProductNameChangingWidget");
        ProductNameChangingWidget->resize(400, 103);
        gridLayoutWidget = new QWidget(ProductNameChangingWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);


        retranslateUi(ProductNameChangingWidget);

        QMetaObject::connectSlotsByName(ProductNameChangingWidget);
    } // setupUi

    void retranslateUi(QWidget *ProductNameChangingWidget)
    {
        ProductNameChangingWidget->setWindowTitle(QCoreApplication::translate("ProductNameChangingWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ProductNameChangingWidget", "\320\235\320\276\320\262\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        pushButton->setText(QCoreApplication::translate("ProductNameChangingWidget", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductNameChangingWidget: public Ui_ProductNameChangingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTNAMECHANGINGWIDGET_H
