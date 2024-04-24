#include "pricelisttable.h"
#include "ui_pricelisttable.h"

PriceListTable::PriceListTable(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PriceListTable)
{
    ui->setupUi(this);
    this->setWindowTitle("Прайc-лист");
    QHeaderView *header = ui->priceListTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    ui->priceListTable->setColumnCount(3);
    ui->priceListTable->setRowCount(PriceListWorker.amountOfLines());
    ui->priceListTable->setColumnWidth(0, 150);
    ui->priceListTable->setColumnWidth(1, 250);
    ui->priceListTable->setColumnWidth(2, 150);
    ui->priceListTable->setHorizontalHeaderLabels(QStringList() << "Номер товара" << "Название товара" << "Цена");
    updateTable();
    setLayout(ui->gridLayout);
    ui->priceListTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->priceListTable->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->priceListTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    message = new QMessageBox();
    productAddingWidget = new ProductAddingWidget();
    nameChangingWidget = new ProductNameChangingWidget();
    numChangingWidget = new ProductNumChangingWidget();
    priceChangingWidget = new ProductPriceChangingWidget();
    byNameFinder = new ProductByNameFinder();
    byNumFinder = new ProductByNumFinder();
    byPriceFinder = new ProductByPriceFinder();

    connect(productAddingWidget, &ProductAddingWidget::ProductAdded, this, &PriceListTable::updateTable);
    connect(nameChangingWidget, &ProductNameChangingWidget::nameChanged, this, &PriceListTable::updateTable);
    connect(numChangingWidget, &ProductNumChangingWidget::numChanged, this, &PriceListTable::updateTable);
    connect(priceChangingWidget, &ProductPriceChangingWidget::priceChanged, this, &PriceListTable::updateTable);
    connect(byNameFinder, &ProductByNameFinder::prodFound, [=]{
        ui->priceListTable->selectRow(byNameFinder->getFoundNum() - 1);
    });
    connect(byNumFinder, &ProductByNumFinder::prodFound, [=]{
        ui->priceListTable->selectRow(byNumFinder->getFoundNum() - 1);
    });
    connect(byPriceFinder, &ProductByPriceFinder::prodFound, [=]{
        ui->priceListTable->selectRow(byPriceFinder->getFoundNum() - 1);
    });
}

PriceListTable::~PriceListTable()
{
    delete productAddingWidget;
    delete nameChangingWidget;
    delete message;
    delete ui;
}

void PriceListTable::updateTable()
{
    QVector<Product> products = PriceListWorker.allProductsInFile();
    ui->priceListTable->setRowCount(products.size());
    for (int i = 0; i < products.size(); ++i) {
        ui->priceListTable->setItem(i, 0, new QTableWidgetItem(QString::number(products[i].getCodeOfProduct())));
        ui->priceListTable->setItem(i, 1, new QTableWidgetItem(products[i].getName()));
        ui->priceListTable->setItem(i, 2, new QTableWidgetItem(QString::number(products[i].getPrice())));
    }
    emit productsChanged();
}

void PriceListTable::on_sortingButton_clicked()
{
    PriceListWorker.Sort(ui->sortingComboBox->currentIndex());
    updateTable();
}


void PriceListTable::on_addingProductButton_clicked()
{
    productAddingWidget->hide();
    productAddingWidget->show();
}


void PriceListTable::on_changingButton_clicked()
{
    if (ui->priceListTable->currentRow() == -1) {
        message->setText("Выберите товар!");
        message->show();
        return;
    }
    switch (ui->changingProductComboBox->currentIndex()) {
    case 0:
        numChangingWidget->setNumOfProd(ui->priceListTable->item(ui->priceListTable->currentRow(), 0)->text().toInt());
        nameChangingWidget->hide();
        priceChangingWidget->hide();
        numChangingWidget->hide();
        numChangingWidget->show();
        break;
    case 1:
        nameChangingWidget->setNumOfProd(ui->priceListTable->item(ui->priceListTable->currentRow(), 0)->text().toInt());
        nameChangingWidget->hide();
        priceChangingWidget->hide();
        numChangingWidget->hide();
        nameChangingWidget->show();
        break;
    case 2:
        priceChangingWidget->setNumOfProd(ui->priceListTable->item(ui->priceListTable->currentRow(), 0)->text().toInt());
        nameChangingWidget->hide();
        priceChangingWidget->hide();
        numChangingWidget->hide();
        priceChangingWidget->show();
        break;
    default:
        break;
    }
}


void PriceListTable::on_deletingButton_clicked()
{
    if (ui->priceListTable->currentRow() == -1) {
        message->setText("Выберите товар!");
        message->show();
        return;
    }
    PriceListWorker.deleteProduct(ui->priceListTable->item(ui->priceListTable->currentRow(), 0)->text().toInt());
    productsInOrderWorker.deleteProduct(ui->priceListTable->item(ui->priceListTable->currentRow(), 0)->text().toInt());
    updateTable();
}


void PriceListTable::on_findingButton_clicked()
{
    switch (ui->findingComboBox->currentIndex()) {
    case 0:
        byPriceFinder->hide();
        byNumFinder->show();
        break;
    case 1:
        byPriceFinder->hide();
        byNameFinder->show();
        break;
    case 2:
        byPriceFinder->hide();
        byPriceFinder->show();
        break;
    default:
        break;
    }
}

void PriceListTable::closeEvent(QCloseEvent *event)
{
    productAddingWidget->close();
    nameChangingWidget->close();
    numChangingWidget->close();
    priceChangingWidget->close();
    byNameFinder->close();
    byNumFinder->close();
    byPriceFinder->close();
    message->close();
    QWidget::closeEvent(event);
}

