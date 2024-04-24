#include "orderfindingbyname.h"
#include "ui_orderfindingbyname.h"

OrderFindingByName::OrderFindingByName(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderFindingByName)
{
    ui->setupUi(this);
    this->setWindowTitle("Нахождение заказа по имени");
    message = new QMessageBox();

    itemList = new QListWidget(this);

    QVector<Order> products = finder.AllOrdersInFile();
    for (int i = 0; i < products.size(); ++i) {
        productsName << products[i].getOrderer();
    }
    itemList->addItems(productsName);

    connect(ui->lineEdit, &QLineEdit::textChanged, this, &OrderFindingByName::filterItems);

    ui->gridLayout->addWidget(itemList, 1, 1);

    ui->lineEdit->setText("");
    QObject::connect(itemList, &QListWidget::itemClicked, [&](QListWidgetItem *item) {
        ui->lineEdit->setText(item->text());
    });
    this->setLayout(ui->gridLayout);
}

OrderFindingByName::~OrderFindingByName()
{
    delete ui;
}

void OrderFindingByName::on_pushButton_clicked()
{
    foundNum = finder.FindOrderByName(ui->lineEdit->text());
    if (foundNum < 0) {
        message->setText("Товар не найден!");
        message->show();
        return;
    }
    this->hide();
    emit ordFound();
}

void OrderFindingByName::filterItems(const QString &text)
{
    itemList->clear();
    for (const QString &item : productsName) {
        if (item.contains(text, Qt::CaseInsensitive)) {
            itemList->addItem(item);
        }
    }
}

int OrderFindingByName::getFoundNum() const
{
    return foundNum;
}

void OrderFindingByName::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void OrderFindingByName::showEvent(QShowEvent *event)
{
    itemList->clear();
    productsName.clear();
    QVector<Order> products = finder.AllOrdersInFile();
    for (int i = 0; i < products.size(); ++i) {
        productsName << products[i].getOrderer();
    }
    itemList->addItems(productsName);
    QWidget::showEvent(event);
}
