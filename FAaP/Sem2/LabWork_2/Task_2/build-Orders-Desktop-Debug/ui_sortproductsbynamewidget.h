/********************************************************************************
** Form generated from reading UI file 'sortproductsbynamewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTPRODUCTSBYNAMEWIDGET_H
#define UI_SORTPRODUCTSBYNAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortProductsByNameWidget
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QWidget *SortProductsByNameWidget)
    {
        if (SortProductsByNameWidget->objectName().isEmpty())
            SortProductsByNameWidget->setObjectName("SortProductsByNameWidget");
        SortProductsByNameWidget->resize(400, 300);
        pushButton = new QPushButton(SortProductsByNameWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 120, 211, 26));
        comboBox = new QComboBox(SortProductsByNameWidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(260, 120, 111, 26));

        retranslateUi(SortProductsByNameWidget);

        QMetaObject::connectSlotsByName(SortProductsByNameWidget);
    } // setupUi

    void retranslateUi(QWidget *SortProductsByNameWidget)
    {
        SortProductsByNameWidget->setWindowTitle(QCoreApplication::translate("SortProductsByNameWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("SortProductsByNameWidget", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\202\320\276\320\262\320\260\321\200\321\213 \320\277\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortProductsByNameWidget: public Ui_SortProductsByNameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTPRODUCTSBYNAMEWIDGET_H
