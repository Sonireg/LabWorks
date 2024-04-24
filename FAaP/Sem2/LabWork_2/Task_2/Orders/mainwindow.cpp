#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Заказы");
    addingProductToOrderWidget = new AddingProductToOrder();
    priceListTable = new PriceListTable();
    ordersTable = new OrdersTable();

    connect(addingProductToOrderWidget, &AddingProductToOrder::ProductAddedToOrder, [=]{
        ordersTable->getProductsInOrderWidget()->updateTable();
    });

    connect(this, &MainWindow::aboutToClose, [=]{
        ordersTable->close();
        addingProductToOrderWidget->close();
        priceListTable->close();
        ordersTable->getProductsInOrderWidget()->close();
    });
}

MainWindow::~MainWindow()
{
    delete ordersTable;
    delete addingProductToOrderWidget;
    delete priceListTable;
    delete ui;
}

void MainWindow::on_addingProductToOrder_clicked()
{
    addingProductToOrderWidget->show();
}


void MainWindow::on_showPriceList_clicked()
{
    priceListTable->show();
}

void MainWindow::on_ordersTableShow_clicked()
{
    ordersTable->show();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    emit aboutToClose();
    event->accept();
}
