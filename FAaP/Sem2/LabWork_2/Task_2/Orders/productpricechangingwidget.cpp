#include "productpricechangingwidget.h"
#include "ui_productpricechangingwidget.h"

ProductPriceChangingWidget::ProductPriceChangingWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProductPriceChangingWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("Изменение цены товара " + QString::number(numOfProd));
    this->setFixedSize(this->size());
    message = new QMessageBox();
}

void ProductPriceChangingWidget::setNumOfProd(int newNumOfProd)
{
    numOfProd = newNumOfProd;
}

ProductPriceChangingWidget::~ProductPriceChangingWidget()
{
    delete message;
    delete ui;
}

void ProductPriceChangingWidget::on_pushButton_clicked()
{
    int resOfChange = numChanger.ChangePrice(numChanger.findProdByNum(numOfProd), ui->doubleSpinBox->value());
    if (resOfChange == -2) {
        message->setText("Не удалось открыть файл!");
        message->show();
        return;
    }
    message->setText("Цена изменена!");
    message->show();
    emit priceChanged();
    this->hide();
}

void ProductPriceChangingWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void ProductPriceChangingWidget::showEvent(QShowEvent *event)
{
    ui->doubleSpinBox->setValue(numChanger.ProdOnLine(numChanger.findProdByNum(numOfProd)).getPrice());
    this->setWindowTitle("Изменение цены товара " + QString::number(numOfProd));
    QWidget::showEvent(event);
}
