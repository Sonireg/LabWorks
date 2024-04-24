#include "productaddingwidget.h"
#include "ui_productaddingwidget.h"

ProductAddingWidget::ProductAddingWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProductAddingWidget)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    this->setWindowTitle("Добавление товара в прайс-лист");

    ui->ProdName->setMaxLength(40);

    wrongInput = new QMessageBox(this);
}

ProductAddingWidget::~ProductAddingWidget()
{
    delete ui;
}

void ProductAddingWidget::on_ConfirmButton_clicked()
{
    double productPrice = ui->ProdPrice->value();
    int productNum = ui->ProdCode->value();
    QString productName = ui->ProdName->text();
    if (productNum == 0 || productName == "" || productPrice == 0) {
        wrongInput->setText("Введите корректные данные о товаре!");
        wrongInput->show();
        return;
    }
    int resOfAdding = PriceListEditor.addProduct(productNum, productName, productPrice);
    if (resOfAdding == -1) {
        wrongInput->setText("Не удалось открыть файл!");
        wrongInput->show();
        return;
    }
    if (resOfAdding == 1) {
        ui->ProdName->clear();
        ui->ProdPrice->setValue(0.01);
        ui->ProdCode->setValue(1);
        wrongInput->setText("Товар успешно добавлен!");
        wrongInput->show();
        emit ProductAdded();
        this->hide();
        return;
    }

    if (resOfAdding == -2) {
        wrongInput->setText("Товар с таким кодом уже есть!");
        wrongInput->show();
        return;
    }
    if (resOfAdding == -3) {
        wrongInput->setText("Товар с таким названием уже есть!");
        wrongInput->show();
        return;
    }
    else {
        wrongInput->setText("Что-то пошло не так!");
        wrongInput->show();
        return;
    }
}

