#include "orderdelitingwidget.h"
#include "ui_orderdelitingwidget.h"

OrderDelitingWidget::OrderDelitingWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderDelitingWidget)
{
    ui->setupUi(this);
    message = new QMessageBox();
}

OrderDelitingWidget::~OrderDelitingWidget()
{
    delete ui;
}

void OrderDelitingWidget::on_pushButton_clicked()
{
    int result = deleter.deleteOrder(ui->spinBox->value());
    if (result == -1) {
        message->setText("Заказа с таким номером нет в списке!");
        message->show();
        return;
    }
    if (result == -2) {
        message->setText("Не удалось открыть файл!");
        message->show();
        return;
    }
    if (result == 1) {
        message->setText("Заказ успешно удалён!");
        message->show();
        emit orderDeleted();
        this->hide();
        return;
    }
}

