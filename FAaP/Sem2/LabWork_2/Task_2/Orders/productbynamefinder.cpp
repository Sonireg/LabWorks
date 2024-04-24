#include "productbynamefinder.h"
#include "ui_productbynamefinder.h"

ProductByNameFinder::ProductByNameFinder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProductByNameFinder)
{
    ui->setupUi(this);
    message = new QMessageBox();
    this->setWindowTitle("Поиск товар по названию");

    itemList = new QListWidget(this);

    QVector<Product> products = finder.allProductsInFile();
    for (int i = 0; i < products.size(); ++i) {
        productsName << products[i].getName();
    }
    itemList->addItems(productsName);



    connect(ui->lineEdit, &QLineEdit::textChanged, this, &ProductByNameFinder::filterItems);

    ui->gridLayout->addWidget(itemList, 1, 1);

    ui->lineEdit->setText("");
    QObject::connect(itemList, &QListWidget::itemClicked, [&](QListWidgetItem *item) {
        ui->lineEdit->setText(item->text());
    });
    this->setLayout(ui->gridLayout);
}

ProductByNameFinder::~ProductByNameFinder()
{
    delete ui;
}

void ProductByNameFinder::on_pushButton_clicked()
{
    foundNum = finder.findProdByName(ui->lineEdit->text());
    if (foundNum < 0) {
        message->setText("Товар не найден!");
        message->show();
        return;
    }
    this->hide();
    emit prodFound();
}

void ProductByNameFinder::filterItems(const QString &text)
{
    itemList->clear();
    for (const QString &item : productsName) {
        if (item.contains(text, Qt::CaseInsensitive)) {
            itemList->addItem(item);
        }
    }
}

int ProductByNameFinder::getFoundNum() const
{
    return foundNum;
}

void ProductByNameFinder::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_pushButton_clicked();
    } else {
        QWidget::keyPressEvent(event);
    }
}

void ProductByNameFinder::showEvent(QShowEvent *event)
{
    itemList->clear();
    productsName.clear();
    QVector<Product> products = finder.allProductsInFile();
    for (int i = 0; i < products.size(); ++i) {
        productsName << products[i].getName();
    }
    itemList->addItems(productsName);
    QWidget::showEvent(event);
}

