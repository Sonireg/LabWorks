#include "ordernamechanging.h"
#include "ui_ordernamechanging.h"

OrderNameChanging::OrderNameChanging(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderNameChanging)
{
    ui->setupUi(this);
    message = new QMessageBox();

    this->setWindowTitle("Изменение реквизитов заказа " + QString::number(numOfProd));
}

OrderNameChanging::~OrderNameChanging()
{
    delete ui;
}

void OrderNameChanging::on_pushButton_clicked()
{
    if (ui->lineEdit->text() == "") {
        message->setText("Введите новое название!");
        message->show();
        return;
    }

    int resOfChange = nameChanger.ChangeName(numOfProd, ui->lineEdit->text());
    if (resOfChange == -2) {
        message->setText("Не удалось открыть файл!");
        message->show();
        return;
    }
    message->setText("Реквизиты изменены!");
    message->show();
    emit nameChanged();
    this->hide();

}

void OrderNameChanging::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void OrderNameChanging::showEvent(QShowEvent *event)
{
    ui->lineEdit->setText(nameChanger.getOrderByNum(numOfProd).getOrderer());
    this->setWindowTitle("Изменение реквизитов заказа " + QString::number(numOfProd));
    QWidget::showEvent(event);
}

void OrderNameChanging::setNumOfProd(int newNumOfProd)
{
    numOfProd = newNumOfProd;
}

