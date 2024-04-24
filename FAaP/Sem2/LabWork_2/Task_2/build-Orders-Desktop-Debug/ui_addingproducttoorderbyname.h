/********************************************************************************
** Form generated from reading UI file 'addingproducttoorderbyname.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINGPRODUCTTOORDERBYNAME_H
#define UI_ADDINGPRODUCTTOORDERBYNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddingProductToOrderByName
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *confirmButton;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QSpinBox *amountOfProductSpintBox;

    void setupUi(QWidget *AddingProductToOrderByName)
    {
        if (AddingProductToOrderByName->objectName().isEmpty())
            AddingProductToOrderByName->setObjectName("AddingProductToOrderByName");
        AddingProductToOrderByName->resize(400, 193);
        gridLayoutWidget = new QWidget(AddingProductToOrderByName);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        confirmButton = new QPushButton(gridLayoutWidget);
        confirmButton->setObjectName("confirmButton");

        gridLayout->addWidget(confirmButton, 4, 0, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        amountOfProductSpintBox = new QSpinBox(gridLayoutWidget);
        amountOfProductSpintBox->setObjectName("amountOfProductSpintBox");
        amountOfProductSpintBox->setMinimum(1);
        amountOfProductSpintBox->setMaximum(10000);

        gridLayout->addWidget(amountOfProductSpintBox, 3, 1, 1, 1);


        retranslateUi(AddingProductToOrderByName);

        QMetaObject::connectSlotsByName(AddingProductToOrderByName);
    } // setupUi

    void retranslateUi(QWidget *AddingProductToOrderByName)
    {
        AddingProductToOrderByName->setWindowTitle(QCoreApplication::translate("AddingProductToOrderByName", "Form", nullptr));
        confirmButton->setText(QCoreApplication::translate("AddingProductToOrderByName", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("AddingProductToOrderByName", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("AddingProductToOrderByName", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddingProductToOrderByName: public Ui_AddingProductToOrderByName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINGPRODUCTTOORDERBYNAME_H
