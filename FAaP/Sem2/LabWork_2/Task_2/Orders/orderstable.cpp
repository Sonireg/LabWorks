#include "orderstable.h"
#include "ui_orderstable.h"

OrdersTable::OrdersTable(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrdersTable)
{
    ui->setupUi(this);
    this->setWindowTitle("Список заказов");
    ui->ordersTable->setRowCount(1);
    ui->ordersTable->setColumnCount(3);
    QHeaderView *header = ui->ordersTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    ui->ordersTable->setHorizontalHeaderLabels(QStringList() << "Номер заказа" << "Дата заказа" << "Реквизиты заказчика");
    ui->ordersTable->setItem(0, 0, new QTableWidgetItem());
    ui->ordersTable->setItem(0, 1, new QTableWidgetItem());
    ui->ordersTable->setItem(0, 2, new QTableWidgetItem());
    ui->ordersTable->setColumnWidth(0, 200);
    ui->ordersTable->setColumnWidth(1, 200);
    ui->ordersTable->setColumnWidth(2, 400);
    setLayout(ui->gridLayout);
    updateTable();
    ui->ordersTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->ordersTable->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->ordersTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    QObject::connect(ui->ordersTable, &QTableWidget::cellDoubleClicked, [&](int row){
        openOrderProductsList(row);
    });

    prodInOrd = new ProductsInOrderWidget();

    ui->changingOrderComboBox->addItem("Номер");
    ui->changingOrderComboBox->addItem("Дату");
    ui->changingOrderComboBox->addItem("Реквизиты");

    ui->sortingOrdersComboBox->addItem("Номеру (по возрастанию)");
    ui->sortingOrdersComboBox->addItem("Номеру (по убыванию)");
    ui->sortingOrdersComboBox->addItem("Дате (по возрастанию)");
    ui->sortingOrdersComboBox->addItem("Дате (по убыванию)");
    ui->sortingOrdersComboBox->addItem("Реквизитам (по возрастанию)");
    ui->sortingOrdersComboBox->addItem("Реквизитам (по убыванию)");

    ui->searchComboBox->addItem("Номеру");
    ui->searchComboBox->addItem("Дате");
    ui->searchComboBox->addItem("Реквизитам");

    addingWidget = new AddingOrderWidget();
    nameChanger = new OrderNameChanging();
    numChanger = new OrderNumChanging();
    dateChanger = new OrderDateChangingWidget();
    byNameFinder = new OrderFindingByName();
    byNumFinder = new OrderFindingByNum();
    byDateFinder = new OrderFindingByDate();


    connect(addingWidget, &AddingOrderWidget::OrderAdded, this, &OrdersTable::updateTable);

    connect(nameChanger, &OrderNameChanging::nameChanged, this, &OrdersTable::updateTable);
    connect(numChanger, &OrderNumChanging::numChanged, this, &OrdersTable::updateTable);
    connect(dateChanger, &OrderDateChangingWidget::dateChanged, this, &OrdersTable::updateTable);

    connect(byNumFinder, &OrderFindingByNum::ordFound, [=]{
        ui->ordersTable->selectRow(byNumFinder->getFoundNum() - 1);
    });
    connect(byNameFinder, &OrderFindingByName::ordFound, [=]{
        ui->ordersTable->selectRow(byNameFinder->getFoundNum() - 1);
    });
    connect(byDateFinder, &OrderFindingByDate::ordFound, [=]{
        ui->ordersTable->selectRow(byDateFinder->getFoundNum() - 1);
    });

    priceListTable = new PriceListTable();

    message = new QMessageBox();

    connect(priceListTable, &PriceListTable::productsChanged, prodInOrd, &ProductsInOrderWidget::updateTable);
    connect(this, &OrdersTable::ordersChanged, prodInOrd, &ProductsInOrderWidget::updateTable);

}

OrdersTable::~OrdersTable()
{
    delete ui;
}

void OrdersTable::updateTable()
{
    QVector<Order> orders = ordersFileWorker.AllOrdersInFile();
    ui->ordersTable->setRowCount(orders.size());
    for (int i = 0; i < orders.size(); ++i) {
        ui->ordersTable->setItem(i, 0, new QTableWidgetItem(QString::number(orders[i].getNumOfOreder())));
        ui->ordersTable->setItem(i, 1, new QTableWidgetItem(orders[i].getDateOfOrder().toString("dd.MM.yyyy")));
        ui->ordersTable->setItem(i, 2, new QTableWidgetItem(orders[i].getOrderer()));
    }
    emit ordersChanged();
}

ProductsInOrderWidget *OrdersTable::getProductsInOrderWidget()
{
    return prodInOrd;
}

void OrdersTable::openOrderProductsList(int numOfLineInTable)
{
    prodInOrd->hide();
    int numOfOrder = ui->ordersTable->item(numOfLineInTable, 0)->text().toInt();
    prodInOrd->setWindowTitle("Товары заказа " + QString::number(numOfOrder));
    prodInOrd->setCurrNumOfOrder(numOfOrder);
    prodInOrd->updateTable();
    prodInOrd->show();
}

void OrdersTable::on_sortOrdersButton_clicked()
{
    ordersFileWorker.Sort(ui->sortingOrdersComboBox->currentIndex());
    updateTable();
}


void OrdersTable::on_addingOrderButton_clicked()
{
    addingWidget->hide();
    addingWidget->show();
}


void OrdersTable::on_openPriceListButton_clicked()
{
    priceListTable->hide();
    priceListTable->show();
}


void OrdersTable::on_deletingBtton_clicked()
{
    if (ui->ordersTable->currentRow() == -1) {
        message->setText("Выберите заказ!");
        message->show();
        return;
    }
    ordersFileWorker.deleteOrder(ui->ordersTable->item(ui->ordersTable->currentRow(), 0)->text().toInt());
    updateTable();
}


void OrdersTable::on_changeOrderButton_clicked()
{
    if (ui->ordersTable->currentRow() == -1) {
        message->setText("Выберите заказ!");
        message->show();
        return;
    }
    switch (ui->changingOrderComboBox->currentIndex()) {
    case 0:
        dateChanger->hide();
        numChanger->hide();
        nameChanger->hide();
        numChanger->setNumOfProd(ui->ordersTable->item(ui->ordersTable->currentRow(), 0)->text().toInt());
        numChanger->show();
        break;
    case 1:
        dateChanger->hide();
        numChanger->hide();
        nameChanger->hide();
        dateChanger->setNumOfProd(ui->ordersTable->item(ui->ordersTable->currentRow(), 0)->text().toInt());
        dateChanger->show();
        break;
    case 2:
        dateChanger->hide();
        numChanger->hide();
        nameChanger->hide();
        nameChanger->setNumOfProd(ui->ordersTable->item(ui->ordersTable->currentRow(), 0)->text().toInt());
        nameChanger->show();
        break;
    default:
        break;
    }
}


void OrdersTable::on_searchButton_clicked()
{
    switch (ui->searchComboBox->currentIndex()) {
    case 0:
        byNumFinder->hide();
        byNumFinder->show();
        break;
    case 1:
        byDateFinder->hide();
        byDateFinder->show();
        break;
    case 2:
        byNameFinder->hide();
        byNameFinder->show();
        break;
    default:
        break;
    }
}

void OrdersTable::closeEvent(QCloseEvent *event)
{
    priceListTable->close();
    prodInOrd->close();
    addingWidget->close();
    priceListTable->close();
    message->close();
    nameChanger->close();
    numChanger->close();
    dateChanger->close();
    byDateFinder->close();
    byNumFinder->close();
    byNameFinder->close();
    QWidget::closeEvent(event);
}

