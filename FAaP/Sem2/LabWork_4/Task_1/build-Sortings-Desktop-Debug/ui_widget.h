/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *searchingInfoLabel;
    QPushButton *findButton;
    QSpinBox *searchingSpinBox;
    QLabel *label;
    QSpinBox *amountOfElementsSpinBox;
    QPushButton *sortButton;
    QGraphicsView *graphicsView;
    QLabel *sortingInfoLabel;
    QPushButton *fillButton;
    QComboBox *sortingComboBox;
    QLabel *label_2;
    QSpinBox *modSpinBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1431, 627);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 911, 601));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        searchingInfoLabel = new QLabel(gridLayoutWidget);
        searchingInfoLabel->setObjectName("searchingInfoLabel");
        searchingInfoLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(searchingInfoLabel, 7, 1, 2, 2);

        findButton = new QPushButton(gridLayoutWidget);
        findButton->setObjectName("findButton");

        gridLayout->addWidget(findButton, 5, 1, 1, 1);

        searchingSpinBox = new QSpinBox(gridLayoutWidget);
        searchingSpinBox->setObjectName("searchingSpinBox");
        searchingSpinBox->setMinimum(1);
        searchingSpinBox->setMaximum(100);

        gridLayout->addWidget(searchingSpinBox, 5, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        amountOfElementsSpinBox = new QSpinBox(gridLayoutWidget);
        amountOfElementsSpinBox->setObjectName("amountOfElementsSpinBox");
        amountOfElementsSpinBox->setMinimum(1);
        amountOfElementsSpinBox->setMaximum(1000);

        gridLayout->addWidget(amountOfElementsSpinBox, 1, 2, 1, 1);

        sortButton = new QPushButton(gridLayoutWidget);
        sortButton->setObjectName("sortButton");

        gridLayout->addWidget(sortButton, 2, 1, 1, 1);

        graphicsView = new QGraphicsView(gridLayoutWidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 0, 0, 9, 1);

        sortingInfoLabel = new QLabel(gridLayoutWidget);
        sortingInfoLabel->setObjectName("sortingInfoLabel");
        sortingInfoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(sortingInfoLabel, 3, 1, 2, 2);

        fillButton = new QPushButton(gridLayoutWidget);
        fillButton->setObjectName("fillButton");

        gridLayout->addWidget(fillButton, 0, 1, 1, 2);

        sortingComboBox = new QComboBox(gridLayoutWidget);
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->addItem(QString());
        sortingComboBox->setObjectName("sortingComboBox");

        gridLayout->addWidget(sortingComboBox, 2, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        modSpinBox = new QSpinBox(gridLayoutWidget);
        modSpinBox->setObjectName("modSpinBox");
        modSpinBox->setMinimum(1);
        modSpinBox->setMaximum(1000000);

        gridLayout->addWidget(modSpinBox, 6, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        searchingInfoLabel->setText(QString());
        findButton->setText(QCoreApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262:", nullptr));
        sortButton->setText(QCoreApplication::translate("Widget", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        sortingInfoLabel->setText(QString());
        fillButton->setText(QCoreApplication::translate("Widget", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\320\276", nullptr));
        sortingComboBox->setItemText(0, QCoreApplication::translate("Widget", "\321\201\320\273\320\270\321\217\320\275\320\270\320\265\320\274 (Merge Sort)", nullptr));
        sortingComboBox->setItemText(1, QCoreApplication::translate("Widget", "\320\261\321\213\321\201\321\202\321\200\320\276 (Quick Sort)", nullptr));
        sortingComboBox->setItemText(2, QCoreApplication::translate("Widget", "\320\272\321\203\321\207\320\265\320\271 (Heap Sort)", nullptr));
        sortingComboBox->setItemText(3, QCoreApplication::translate("Widget", "\320\270\320\275\321\202\320\265\321\200\320\277\320\276\320\273\321\217\321\206\320\270\320\276\320\275\320\275\320\276 (Interpolation sort)", nullptr));

        label_2->setText(QCoreApplication::translate("Widget", "\320\234\320\276\320\264\321\203\320\273\321\214:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
