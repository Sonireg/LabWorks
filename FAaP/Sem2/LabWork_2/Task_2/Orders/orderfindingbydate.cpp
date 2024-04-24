#include "orderfindingbydate.h"
#include "ui_orderfindingbydate.h"

OrderFindingByDate::OrderFindingByDate(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderFindingByDate)
{
    ui->setupUi(this);
    this->setWindowTitle("Нахождение заказа по дате");
    message = new QMessageBox();
}

OrderFindingByDate::~OrderFindingByDate()
{
    delete ui;
}

void OrderFindingByDate::on_pushButton_clicked()
{
    foundNum = finder.FindOrderByDate(ui->lineEdit->date());
    if (foundNum < 0) {
        message->setText("Товар не найден!");
        message->show();
        return;
    }
    this->hide();
    emit ordFound();
}

int OrderFindingByDate::getFoundNum() const
{
    return foundNum;
}

void OrderFindingByDate::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}
