#include "addingproducttoorderbyname.h"
#include "ui_addingproducttoorderbyname.h"

AddingProductToOrderByName::AddingProductToOrderByName(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddingProductToOrderByName)
{
    ui->setupUi(this);
    this->setWindowTitle("Добавление товара по имени в заказ " + QString::number(numOfOrder));
    wrongInput = new QMessageBox();

    itemList = new QListWidget(this);

    QVector<Product> products = PriceListWorker.allProductsInFile();
    for (int i = 0; i < products.size(); ++i) {
        productsName << products[i].getName();
    }
    itemList->addItems(productsName);

    connect(ui->lineEdit, &QLineEdit::textChanged, this, &AddingProductToOrderByName::filterItems);

    ui->gridLayout->addWidget(itemList, 1, 1);

    ui->lineEdit->setText("");
    QObject::connect(itemList, &QListWidget::itemClicked, [&](QListWidgetItem *item) {
        ui->lineEdit->setText(item->text());
    });
    this->setLayout(ui->gridLayout);

}

AddingProductToOrderByName::~AddingProductToOrderByName()
{
    delete ui;
}

void AddingProductToOrderByName::on_confirmButton_clicked()
{
    int amOfProd = ui->amountOfProductSpintBox->value(),
        codeOfProd = PriceListWorker.ProdOnLine(PriceListWorker.findProdByName(ui->lineEdit->text())).getCodeOfProduct();

    int resOfAdding = orderProdutsWorker.AddProductToOrder(numOfOrder, codeOfProd, amOfProd);

    if (resOfAdding == 1) {
        wrongInput->setText("Товар успешно добавлен в заказ!");
        wrongInput->show();
        ui->amountOfProductSpintBox->setValue(1);
        ui->lineEdit->clear();
        emit ProductAddedToOrder();
        this->hide();
        return;
    }
    if (resOfAdding == -3) {
        wrongInput->setText("Товара с таким именем не существует!");
        wrongInput->show();
        return;
    }
}

void AddingProductToOrderByName::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_confirmButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void AddingProductToOrderByName::showEvent(QShowEvent *event)
{
    itemList->clear();
    productsName.clear();
    QVector<Product> products = PriceListWorker.allProductsInFile();
    for (int i = 0; i < products.size(); ++i) {
        productsName << products[i].getName();
    }
    itemList->addItems(productsName);
    this->setWindowTitle("Изменение номера заказа " + QString::number(numOfOrder));
    QWidget::showEvent(event);
}

void AddingProductToOrderByName::filterItems(const QString &text)
{
    itemList->clear();
    for (const QString &item : productsName) {
        if (item.contains(text, Qt::CaseInsensitive)) {
            itemList->addItem(item);
        }
    }
}

void AddingProductToOrderByName::setNumOfOrder(int newNumOfOrder)
{
    numOfOrder = newNumOfOrder;
}
