#include "ordernumchanging.h"
#include "ui_ordernumchanging.h"

OrderNumChanging::OrderNumChanging(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderNumChanging)
{
    ui->setupUi(this);
    this->setWindowTitle("Изменение номера заказа " + QString::number(numOfProd));
    message = new QMessageBox();
}

OrderNumChanging::~OrderNumChanging()
{
    delete ui;
}

void OrderNumChanging::on_pushButton_clicked()
{

    int resOfChange = nameChanger.ChangeNum(numOfProd, ui->lineEdit->value());
    if (resOfChange == -2) {
        message->setText("Не удалось открыть файл!");
        message->show();
        return;
    }
    if (resOfChange == -3) {
        message->setText("Заказ с таким номером уже есть!");
        message->show();
        return;
    }
    message->setText("Номер изменён!");
    message->show();
    emit numChanged();
    this->hide();

}

void OrderNumChanging::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void OrderNumChanging::showEvent(QShowEvent *event)
{
    ui->lineEdit->setValue(nameChanger.getOrderByNum(numOfProd).getNumOfOreder());
    this->setWindowTitle("Изменение номера заказа " + QString::number(numOfProd));
    QWidget::showEvent(event);
}

void OrderNumChanging::setNumOfProd(int newNumOfProd)
{
    numOfProd = newNumOfProd;
}

