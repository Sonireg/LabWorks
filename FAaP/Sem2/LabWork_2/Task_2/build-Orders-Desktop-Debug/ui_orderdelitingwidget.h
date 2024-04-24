/********************************************************************************
** Form generated from reading UI file 'orderdelitingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERDELITINGWIDGET_H
#define UI_ORDERDELITINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderDelitingWidget
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *OrderDelitingWidget)
    {
        if (OrderDelitingWidget->objectName().isEmpty())
            OrderDelitingWidget->setObjectName("OrderDelitingWidget");
        OrderDelitingWidget->resize(241, 110);
        groupBox = new QGroupBox(OrderDelitingWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 241, 111));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 20, 241, 91));
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


        retranslateUi(OrderDelitingWidget);

        QMetaObject::connectSlotsByName(OrderDelitingWidget);
    } // setupUi

    void retranslateUi(QWidget *OrderDelitingWidget)
    {
        OrderDelitingWidget->setWindowTitle(QCoreApplication::translate("OrderDelitingWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OrderDelitingWidget", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        label->setText(QCoreApplication::translate("OrderDelitingWidget", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\272\320\260\320\267\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderDelitingWidget", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderDelitingWidget: public Ui_OrderDelitingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERDELITINGWIDGET_H
