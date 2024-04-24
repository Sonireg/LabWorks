#include "addingproducttoorder.h"
#include "ui_addingproducttoorder.h"

AddingProductToOrder::AddingProductToOrder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddingProductToOrder)
{
    ui->setupUi(this);
    this->setWindowTitle("Добавление товара по номеру в заказ " + QString::number(numOfOrder));
    wrongInput = new QMessageBox();
}

AddingProductToOrder::~AddingProductToOrder()
{
    delete ui;
}

void AddingProductToOrder::on_confirmButton_clicked()
{
    int amOfProd = ui->amountOfProductSpintBox->value(), codeOfProd = ui->productCodeSpinBox->value();

    if (codeOfProd == 0) {
        wrongInput->setText("Номер товара не может быть 0!");
        wrongInput->show();
        return;
    }
    int resOfAdding = orderProdutsWorker.AddProductToOrder(numOfOrder, codeOfProd, amOfProd);

    if (resOfAdding == 1) {
        wrongInput->setText("Товар успешно добавлен в заказ!");
        wrongInput->show();
        ui->amountOfProductSpintBox->setValue(1);
        ui->productCodeSpinBox->setValue(1);
        emit ProductAddedToOrder();
        this->hide();
        return;
    }
    if (resOfAdding == -3) {
        wrongInput->setText("Товара с таким номером не существует!");
        wrongInput->show();
        return;
    }
}

void AddingProductToOrder::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_confirmButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void AddingProductToOrder::showEvent(QShowEvent *event)
{
    this->setWindowTitle("Изменение номера заказа " + QString::number(numOfOrder));
    QWidget::showEvent(event);
}

void AddingProductToOrder::setNumOfOrder(int newNumOfOrder)
{
    numOfOrder = newNumOfOrder;
}

