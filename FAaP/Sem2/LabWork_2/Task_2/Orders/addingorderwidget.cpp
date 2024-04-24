#include "addingorderwidget.h"
#include "ui_addingorderwidget.h"

AddingOrderWidget::AddingOrderWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddingOrderWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("Добавление заказа");


    ui->dateEdit->setDate(QDate::currentDate());

    wrongInput = new QMessageBox(this);

}

AddingOrderWidget::~AddingOrderWidget()
{
    delete ui;
}

void AddingOrderWidget::on_confirmButton_clicked()
{
    int numOfOrder = ui->OrderNum->value();
    QDate dateOfOrder = ui->dateEdit->date();
    QString nameOfOrderer = ui->ordererNameEditLine->text();
    if (numOfOrder == 0) {
        wrongInput->setText("Номер заказа не может быть 0!");
        wrongInput->show();
        return;
    }
    if (!dateOfOrder.isValid()) {
        wrongInput->setText("Введите корректную дату!");
        wrongInput->show();
        return;
    }
    if (nameOfOrderer == "") {
        wrongInput->setText("Введите имя заказчика!");
        wrongInput->show();
        return;
    }
    int resOfAdding = ordersFileWorker.AddOrder(numOfOrder, dateOfOrder, nameOfOrderer);

    if (resOfAdding == -3) {
        wrongInput->setText("Заказ с таким номером уже есть!");
        wrongInput->show();
        return;
    }
    if (resOfAdding == 1) {
        wrongInput->setText("Заказ успешно добавлен!");
        wrongInput->show();
        ui->OrderNum->setValue(1);
        ui->ordererNameEditLine->clear();
        emit OrderAdded();
        this->hide();
        return;
    }
    else {
        wrongInput->setText("Ошибка открытия файла!");
        wrongInput->show();
        return;
    }
}

void AddingOrderWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_confirmButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

