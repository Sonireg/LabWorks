#ifndef ORDERSTABLE_H
#define ORDERSTABLE_H

#include <QWidget>
#include "ordersfilework.h"
#include "orderprodutslistworker.h"
#include "productsinorderwidget.h"
#include "addingorderwidget.h"
#include "pricelisttable.h"
#include <QMessageBox>
#include "ordernamechanging.h"
#include "ordernumchanging.h"
#include "orderdatechangingwidget.h"
#include "orderfindingbydate.h"
#include "orderfindingbyname.h"
#include "orderfindingbynum.h"

namespace Ui {
class OrdersTable;
}

class OrdersTable : public QWidget
{
    Q_OBJECT

public:
    explicit OrdersTable(QWidget *parent = nullptr);
    ~OrdersTable();
    void updateTable();
    ProductsInOrderWidget *getProductsInOrderWidget();
private slots:
    void openOrderProductsList(int numOfLineInTable);
    void on_sortOrdersButton_clicked();

    void on_addingOrderButton_clicked();

    void on_openPriceListButton_clicked();

    void on_deletingBtton_clicked();
    void on_changeOrderButton_clicked();

    void on_searchButton_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;
signals:
    void ordersChanged();
private:
    Ui::OrdersTable *ui;
    OrdersFileWork ordersFileWorker;
    OrderProdutsListWorker ordersProductsListWorker;
    ProductsInOrderWidget* prodInOrd;
    AddingOrderWidget* addingWidget;
    PriceListTable* priceListTable;
    QMessageBox* message;
    OrderNameChanging* nameChanger;
    OrderNumChanging* numChanger;
    OrderDateChangingWidget* dateChanger;

    OrderFindingByDate* byDateFinder;
    OrderFindingByNum* byNumFinder;
    OrderFindingByName* byNameFinder;
};

#endif // ORDERSTABLE_H
