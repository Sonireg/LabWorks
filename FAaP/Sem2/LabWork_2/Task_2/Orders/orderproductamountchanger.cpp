#include "orderproductamountchanger.h"
#include "ui_orderproductamountchanger.h"

OrderProductAmountChanger::OrderProductAmountChanger(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderProductAmountChanger)
{
    ui->setupUi(this);
}

OrderProductAmountChanger::~OrderProductAmountChanger()
{
    delete ui;
}

void OrderProductAmountChanger::on_pushButton_clicked()
{
    amountChanger.ChangeAmount(numOfCurrOrder, numOfProd, ui->spinBox->value());
    emit amountChanged();
    this->hide();
}

void OrderProductAmountChanger::setNumOfProd(int newNumOfProd)
{
    numOfProd = newNumOfProd;
}

void OrderProductAmountChanger::setNumOfCurrOrder(int newNumOfCurrOrder)
{
    numOfCurrOrder = newNumOfCurrOrder;
}

void OrderProductAmountChanger::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void OrderProductAmountChanger::showEvent(QShowEvent *event)
{
    this->setWindowTitle("Изменение количества товара " + QString::number(numOfCurrOrder));
    QWidget::showEvent(event);
}



