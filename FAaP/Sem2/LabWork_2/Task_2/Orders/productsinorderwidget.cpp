#include "productsinorderwidget.h"
#include "ui_productsinorderwidget.h"

ProductsInOrderWidget::ProductsInOrderWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProductsInOrderWidget)
{
    ui->setupUi(this);
    this->setLayout(ui->gridLayout);

    ui->productsInOrderTable->setColumnCount(4);
    ui->productsInOrderTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QHeaderView *header = ui->productsInOrderTable->horizontalHeader();
    ui->productsInOrderTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->productsInOrderTable->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->productsInOrderTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    header->setSectionResizeMode(QHeaderView::Stretch);
    currNumOfOrder = -1;
    ui->productsInOrderTable->setHorizontalHeaderLabels(QStringList() << "Код товара" << "Название товара" << "Количество" << "Итого за товар");

    prodByNumAdder = new AddingProductToOrder();
    prodByNameAdder = new AddingProductToOrderByName();
    amountChanger = new OrderProductAmountChanger();

    connect(prodByNumAdder, &AddingProductToOrder::ProductAddedToOrder, this, &ProductsInOrderWidget::updateTable);
    connect(prodByNameAdder, &AddingProductToOrderByName::ProductAddedToOrder, this, &ProductsInOrderWidget::updateTable);
    connect(amountChanger, &OrderProductAmountChanger::amountChanged, this, &ProductsInOrderWidget::updateTable);
    message = new QMessageBox;
}

ProductsInOrderWidget::~ProductsInOrderWidget()
{
    delete ui;
}

void ProductsInOrderWidget::updateTable()
{
    QVector<QPair<Product, int>> productsInOrder = ProdGetter.ProductsInOrder(ProdGetter.FindOrderByNum(currNumOfOrder));
    ui->productsInOrderTable->setRowCount(productsInOrder.size());
    qreal finalSumm = 0;
    for (int i = 0; i < productsInOrder.size(); ++i) {
        ui->productsInOrderTable->setItem(i, 0, new QTableWidgetItem(QString::number(productsInOrder[i].first.getCodeOfProduct())));
        ui->productsInOrderTable->setItem(i, 1, new QTableWidgetItem(productsInOrder[i].first.getName()));
        ui->productsInOrderTable->setItem(i, 2, new QTableWidgetItem(QString::number(productsInOrder[i].second)));
        ui->productsInOrderTable->setItem(i, 3, new QTableWidgetItem(QString::number(productsInOrder[i].first.getPrice() * productsInOrder[i].second)));
        finalSumm += productsInOrder[i].first.getPrice() * productsInOrder[i].second;
    }

    ui->label->setText("Имя заказчика: " + currOrder.getOrderer() +
                       "\nДата заказа: " + currOrder.getDateOfOrder().toString("dd.MM.yyyy") +
                       "\nИтоговая сумма: " + QString::number(finalSumm));
}

int ProductsInOrderWidget::getCurrNumOfOrderInTable()
{
    return currNumOfOrder;
}


void ProductsInOrderWidget::on_prodAddingButton_clicked()
{
    switch (ui->addingComboBox->currentIndex()) {
    case 0:
        prodByNumAdder->hide();
        prodByNameAdder->hide();
        prodByNameAdder->setNumOfOrder(currNumOfOrder);
        prodByNameAdder->show();
        break;
    case 1:
        prodByNumAdder->hide();
        prodByNameAdder->hide();
        prodByNumAdder->setNumOfOrder(currNumOfOrder);
        prodByNumAdder->show();
        break;
    default:
        break;
    }
}

void ProductsInOrderWidget::setCurrNumOfOrder(int newCurrNumOfOrder)
{
    currNumOfOrder = newCurrNumOfOrder;
    currOrder = OrdersFileWorker.getOrderByNum(newCurrNumOfOrder);
}


void ProductsInOrderWidget::on_deletingButton_clicked()
{
    if (ui->productsInOrderTable->currentRow() == -1) {
        message->setText("Выберите товар!");
        message->show();
        return;
    }
    ProdGetter.deleteProductInOrder(currNumOfOrder, ui->productsInOrderTable->item(ui->productsInOrderTable->currentRow(), 0)->text().toInt());
    updateTable();
}


void ProductsInOrderWidget::on_sortingButton_clicked()
{
    ProdGetter.Sort(currNumOfOrder, ui->sortingComboBox->currentIndex());
    updateTable();
}


void ProductsInOrderWidget::on_changingButton_clicked()
{
    if (ui->productsInOrderTable->currentRow() == -1) {
        message->setText("Выберите товар!");
        message->show();
        return;
    }
    amountChanger->setNumOfCurrOrder(currNumOfOrder);
    amountChanger->setNumOfProd(ui->productsInOrderTable->item(ui->productsInOrderTable->currentRow(), 0)->text().toInt());
    amountChanger->show();
}

void ProductsInOrderWidget::closeEvent(QCloseEvent *event)
{
    prodByNumAdder->close();
    prodByNameAdder->close();
    message->close();
    amountChanger->close();
    QWidget::closeEvent(event);
}

