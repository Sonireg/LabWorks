#include "productnumchangingwidget.h"
#include "ui_productnumchangingwidget.h"

ProductNumChangingWidget::ProductNumChangingWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProductNumChangingWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("Изменение номера товара " + QString::number(numOfProd));
    this->setFixedSize(this->size());
    message = new QMessageBox();
}

void ProductNumChangingWidget::setNumOfProd(int newNumOfProd)
{
    numOfProd = newNumOfProd;
}

ProductNumChangingWidget::~ProductNumChangingWidget()
{
    delete message;
    delete ui;
}

void ProductNumChangingWidget::on_pushButton_clicked()
{
    int resOfChange = numChanger.ChangeNum(numChanger.findProdByNum(numOfProd), ui->spinBox->value());

    if (resOfChange == -1) {
        message->setText("Товар с таким номером уже есть!");
        message->show();
        return;
    }
    if (resOfChange == -2) {
        message->setText("Не удалось открыть файл!");
        message->show();
        return;
    }

    numInOrderChanger.ChangeNumOfProduct(numOfProd, ui->spinBox->value());

    message->setText("Номер изменён!");
    message->show();
    emit numChanged();
    this->hide();
}



void ProductNumChangingWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void ProductNumChangingWidget::showEvent(QShowEvent *event)
{
    ui->spinBox->setValue(numChanger.ProdOnLine(numChanger.findProdByNum(numOfProd)).getCodeOfProduct());
    this->setWindowTitle("Изменение номера товара " + QString::number(numOfProd));
    QWidget::showEvent(event);
}
