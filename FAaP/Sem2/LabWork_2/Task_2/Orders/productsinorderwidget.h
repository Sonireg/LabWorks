#ifndef PRODUCTSINORDERWIDGET_H
#define PRODUCTSINORDERWIDGET_H

#include <QWidget>
#include "orderprodutslistworker.h"
#include "pricelistwork.h"
#include "addingproducttoorder.h"
#include "addingproducttoorderbyname.h"
#include "ordersfilework.h"
#include "orderproductamountchanger.h"
#include <QTimer>

namespace Ui {
class ProductsInOrderWidget;
}

class ProductsInOrderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductsInOrderWidget(QWidget *parent = nullptr);
    ~ProductsInOrderWidget();
    void updateTable();
    int getCurrNumOfOrderInTable();
    void setCurrNumOfOrder(int newCurrNumOfOrder);

private slots:

    void on_prodAddingButton_clicked();

    void on_deletingButton_clicked();

    void on_sortingButton_clicked();

    void on_changingButton_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;
private:
    Ui::ProductsInOrderWidget *ui;
    PriceListWork nameFinder = PriceListWork();
    OrderProdutsListWorker ProdGetter = OrderProdutsListWorker();
    int currNumOfOrder;
    AddingProductToOrder* prodByNumAdder;
    AddingProductToOrderByName* prodByNameAdder;
    QMessageBox* message;
    OrdersFileWork OrdersFileWorker;
    Order currOrder;
    OrderProductAmountChanger* amountChanger;
};

#endif // PRODUCTSINORDERWIDGET_H
