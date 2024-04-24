#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addingproducttoorder.h"
#include "pricelisttable.h"
#include "orderstable.h"
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addingProductToOrder_clicked();

    void on_showPriceList_clicked();

    void on_ordersTableShow_clicked();

protected:
    void closeEvent(QCloseEvent *event);
signals:
    void aboutToClose();
private:
    Ui::MainWindow *ui;
    AddingProductToOrder* addingProductToOrderWidget;
    PriceListTable* priceListTable;
    OrdersTable* ordersTable;
};
#endif // MAINWINDOW_H
