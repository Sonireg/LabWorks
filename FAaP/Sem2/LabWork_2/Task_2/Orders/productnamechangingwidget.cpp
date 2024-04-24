#include "productnamechangingwidget.h"
#include "ui_productnamechangingwidget.h"

ProductNameChangingWidget::ProductNameChangingWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProductNameChangingWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("Изменение названия товара " + QString::number(numOfProd));
    this->setFixedSize(this->size());
    message = new QMessageBox();
}

ProductNameChangingWidget::~ProductNameChangingWidget()
{
    delete message;
    delete ui;
}

void ProductNameChangingWidget::on_pushButton_clicked()
{
    if (ui->lineEdit->text() == "") {
        message->setText("Введите новое название!");
        message->show();
        return;
    }

    int resOfChange = nameChanger.ChangeName(nameChanger.findProdByNum(numOfProd), ui->lineEdit->text());

    if (resOfChange == -1) {
        message->setText("Товар с таким названием уже есть!");
        message->show();
        return;
    }
    if (resOfChange == -2) {
        message->setText("Не удалось открыть файл!");
        message->show();
        return;
    }
    message->setText("Название изменено!");
    message->show();
    emit nameChanged();
    this->hide();
}

void ProductNameChangingWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void ProductNameChangingWidget::showEvent(QShowEvent *event)
{
    ui->lineEdit->setText(nameChanger.ProdOnLine(nameChanger.findProdByNum(numOfProd)).getName());
    this->setWindowTitle("Изменение названия товара " + QString::number(numOfProd));
    QWidget::showEvent(event);
}

void ProductNameChangingWidget::setNumOfProd(int newNumOfProd)
{
    numOfProd = newNumOfProd;
}

