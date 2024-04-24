#include "productbynumfinder.h"
#include "ui_productbynumfinder.h"

ProductByNumFinder::ProductByNumFinder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProductByNumFinder)
{
    ui->setupUi(this);
    message = new QMessageBox();
    this->setWindowTitle("Поиск товар по номеру");
}

ProductByNumFinder::~ProductByNumFinder()
{
    delete ui;
}

void ProductByNumFinder::on_pushButton_clicked()
{
    foundNum = finder.findProdByNum(ui->lineEdit->value());
    if (foundNum < 0) {
        message->setText("Товар не найден!");
        message->show();
        return;
    }
    this->hide();
    emit prodFound();
}

int ProductByNumFinder::getFoundNum() const
{
    return foundNum;
}

void ProductByNumFinder::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}
