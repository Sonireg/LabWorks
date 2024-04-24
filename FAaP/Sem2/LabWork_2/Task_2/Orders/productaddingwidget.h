#ifndef PRODUCTADDINGWIDGET_H
#define PRODUCTADDINGWIDGET_H

#include <QWidget>
#include <QValidator>
#include <QMessageBox>
#include "pricelistwork.h"

namespace Ui {
class ProductAddingWidget;
}

class ProductAddingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductAddingWidget(QWidget *parent = nullptr);
    ~ProductAddingWidget();

private slots:
    void on_ConfirmButton_clicked();
signals:
    void ProductAdded();

private:
    Ui::ProductAddingWidget *ui;
    QMessageBox* wrongInput;
    PriceListWork PriceListEditor = PriceListWork();
};

#endif // PRODUCTADDINGWIDGET_H
