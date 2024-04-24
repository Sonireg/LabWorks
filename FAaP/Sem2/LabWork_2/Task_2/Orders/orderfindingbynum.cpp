#include "orderfindingbynum.h"
#include "ui_orderfindingbynum.h"

OrderFindingByNum::OrderFindingByNum(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderFindingByNum)
{
    ui->setupUi(this);
    this->setWindowTitle("Нахождение заказа по номеру");
    message = new QMessageBox();
}

OrderFindingByNum::~OrderFindingByNum()
{
    delete ui;
}

void OrderFindingByNum::on_pushButton_clicked()
{
    foundNum = finder.FindOrderByNum(ui->lineEdit->value());
    if (foundNum < 0) {
        message->setText("Товар не найден!");
        message->show();
        return;
    }
    this->hide();
    emit ordFound();
}

int OrderFindingByNum::getFoundNum() const
{
    return foundNum;
}

void OrderFindingByNum::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}
