#include "productbypricefinder.h"
#include "ui_productbypricefinder.h"

ProductByPriceFinder::ProductByPriceFinder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProductByPriceFinder)
{
    ui->setupUi(this);
    message = new QMessageBox();
    this->setWindowTitle("Поиск товар по цене");
}

ProductByPriceFinder::~ProductByPriceFinder()
{
    delete ui;
}

void ProductByPriceFinder::on_pushButton_clicked()
{
    foundNum = finder.findProdByPrice(ui->lineEdit->value());
    if (foundNum < 0) {
        message->setText("Товар не найден!");
        message->show();
        return;
    }
    this->hide();
    emit prodFound();
}

int ProductByPriceFinder::getFoundNum() const
{
    return foundNum;
}

void ProductByPriceFinder::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

