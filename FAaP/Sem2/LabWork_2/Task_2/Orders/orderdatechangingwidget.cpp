#include "orderdatechangingwidget.h"
#include "ui_orderdatechangingwidget.h"

OrderDateChangingWidget::OrderDateChangingWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderDateChangingWidget)
{
    ui->setupUi(this);

    this->setWindowTitle("Изменение даты заказа " + QString::number(numOfProd));

    message = new QMessageBox();
}

OrderDateChangingWidget::~OrderDateChangingWidget()
{
    delete ui;
}

void OrderDateChangingWidget::on_pushButton_clicked()
{
    if (ui->lineEdit->text() == "") {
        message->setText("Введите новую дату!");
        message->show();
        return;
    }

    int resOfChange = nameChanger.ChangeDate(numOfProd, ui->lineEdit->date());
    if (resOfChange == -2) {
        message->setText("Не удалось открыть файл!");
        message->show();
        return;
    }
    message->setText("Дата изменена!");
    message->show();
    emit dateChanged();
    this->hide();

}

void OrderDateChangingWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void OrderDateChangingWidget::showEvent(QShowEvent *event)
{
    this->setWindowTitle("Изменение даты заказа " + QString::number(numOfProd));
    ui->lineEdit->setDate(nameChanger.getOrderByNum(numOfProd).getDateOfOrder());
    QWidget::showEvent(event);
}

void OrderDateChangingWidget::setNumOfProd(int newNumOfProd)
{
    numOfProd = newNumOfProd;
}
