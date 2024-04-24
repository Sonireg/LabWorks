/********************************************************************************
** Form generated from reading UI file 'productbynamefinder.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTBYNAMEFINDER_H
#define UI_PRODUCTBYNAMEFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductByNameFinder
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QWidget *ProductByNameFinder)
    {
        if (ProductByNameFinder->objectName().isEmpty())
            ProductByNameFinder->setObjectName("ProductByNameFinder");
        ProductByNameFinder->resize(400, 127);
        gridLayoutWidget = new QWidget(ProductByNameFinder);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 0, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(ProductByNameFinder);

        QMetaObject::connectSlotsByName(ProductByNameFinder);
    } // setupUi

    void retranslateUi(QWidget *ProductByNameFinder)
    {
        ProductByNameFinder->setWindowTitle(QCoreApplication::translate("ProductByNameFinder", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ProductByNameFinder", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("ProductByNameFinder", "\320\235\320\260\320\262\320\267\320\260\320\275\320\270\320\265:", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProductByNameFinder: public Ui_ProductByNameFinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTBYNAMEFINDER_H
