/********************************************************************************
** Form generated from reading UI file 'pricelisttable.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRICELISTTABLE_H
#define UI_PRICELISTTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PriceListTable
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *findingComboBox;
    QPushButton *changingButton;
    QComboBox *changingProductComboBox;
    QPushButton *addingProductButton;
    QTableWidget *priceListTable;
    QPushButton *findingButton;
    QPushButton *sortingButton;
    QComboBox *sortingComboBox;
    QPushButton *deletingButton;

    void setupUi(QWidget *PriceListTable)
    {
        if (PriceListTable->objectName().isEmpty())
            PriceListTable->setObjectName("PriceListTable");
        PriceListTable->resize(1394, 646);
        PriceListTable->setMinimumSize(QSize(700, 500));
        gridLayoutWidget = new QWidget(PriceListTable);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(50, 30, 971, 551));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        findingComboBox = new QComboBox(gridLayoutWidget);
        findingComboBox->addItem(QString());
        findingComboBox->addItem(QString());
        findingComboBox->addItem(QString());
        findingComboBox->setObjectName("findingComboBox");

        gridLayout->addWidget(findingComboBox, 3, 2, 1, 1);

        changingButton = new QPushButton(gridLayoutWidget);
        changingButton->setObjectName("changingButton");

        gridLayout->addWidget(changingButton, 1, 1, 1, 1);

        changingProductComboBox = new QComboBox(gridLayoutWidget);
        changingProductComboBox->addItem(QString());
        changingProductComboBox->addItem(QString());
        changingProductComboBox->addItem(QString());
        changingProductComboBox->setObjectName("changingProductComboBox");

        gridLayout->addWidget(changingProductComboBox, 1, 2, 1, 1);

        addingProductButton = new QPushButton(gridLayoutWidget);
        addingProductButton->setObjectName("addingProductButton");

        gridLayout->addWidget(addingProductButton, 0, 1, 1, 2);

        priceListTable = new QTableWidget(gridLayoutWidget);
        priceListTable->setObjectName("priceListTable");

        gridLayout->addWidget(priceListTable, 0, 0, 8, 1);

        findingButton = new QPushButton(gridLayoutWidget);
        findingButton->setObjectName("findingButton");

        gridLayout->addWidget(findingButton, 3, 1, 1, 1);

        sortingButton = new QPushButton(gridLayoutWidget);
        sortingButton->setObjectName("sortingButton");

        gridLayout->addWidget(sortingButton, 2, 1, 1, 1);

        sortingComboBox = new QComboBox(gridLayoutWidget);
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->setObjectName("sortingComboBox");

        gridLayout->addWidget(sortingComboBox, 2, 2, 1, 1);

        deletingButton = new QPushButton(gridLayoutWidget);
        deletingButton->setObjectName("deletingButton");

        gridLayout->addWidget(deletingButton, 4, 1, 1, 2);


        retranslateUi(PriceListTable);

        QMetaObject::connectSlotsByName(PriceListTable);
    } // setupUi

    void retranslateUi(QWidget *PriceListTable)
    {
        PriceListTable->setWindowTitle(QCoreApplication::translate("PriceListTable", "Form", nullptr));
        findingComboBox->setItemText(0, QCoreApplication::translate("PriceListTable", "\320\235\320\276\320\274\320\265\321\200\321\203", nullptr));
        findingComboBox->setItemText(1, QCoreApplication::translate("PriceListTable", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\321\216", nullptr));
        findingComboBox->setItemText(2, QCoreApplication::translate("PriceListTable", "\320\246\320\265\320\275\320\265", nullptr));

        changingButton->setText(QCoreApplication::translate("PriceListTable", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        changingProductComboBox->setItemText(0, QCoreApplication::translate("PriceListTable", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        changingProductComboBox->setItemText(1, QCoreApplication::translate("PriceListTable", "\320\235\320\260\320\262\320\267\320\260\320\275\320\270\320\265", nullptr));
        changingProductComboBox->setItemText(2, QCoreApplication::translate("PriceListTable", "\320\246\320\265\320\275\321\203", nullptr));

        addingProductButton->setText(QCoreApplication::translate("PriceListTable", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
        findingButton->setText(QCoreApplication::translate("PriceListTable", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276", nullptr));
        sortingButton->setText(QCoreApplication::translate("PriceListTable", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276", nullptr));
        sortingComboBox->setItemText(0, QCoreApplication::translate("PriceListTable", "\320\235\320\276\320\274\320\265\321\200\321\203 (\320\277\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(1, QCoreApplication::translate("PriceListTable", "\320\235\320\276\320\274\320\265\321\200\321\203 (\320\277\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(2, QCoreApplication::translate("PriceListTable", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\321\216 (\320\277\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(3, QCoreApplication::translate("PriceListTable", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\321\216 (\320\277\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(4, QCoreApplication::translate("PriceListTable", "\320\246\320\265\320\275\320\265 (\320\277\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216)", nullptr));
        sortingComboBox->setItemText(5, QCoreApplication::translate("PriceListTable", "\320\246\320\265\320\275\320\265 (\320\277\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216)", nullptr));

        deletingButton->setText(QCoreApplication::translate("PriceListTable", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PriceListTable: public Ui_PriceListTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRICELISTTABLE_H
