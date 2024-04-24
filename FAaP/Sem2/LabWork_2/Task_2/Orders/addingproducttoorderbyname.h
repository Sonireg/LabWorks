#ifndef ADDINGPRODUCTTOORDERBYNAME_H
#define ADDINGPRODUCTTOORDERBYNAME_H

#include <QWidget>
#include "pricelistwork.h"
#include "orderprodutslistworker.h"
#include <QMessageBox>
#include <QKeyEvent>
#include <QLineEdit>
#include <QListWidget>

namespace Ui {
class AddingProductToOrderByName;
}

class AddingProductToOrderByName : public QWidget
{
    Q_OBJECT

public:
    explicit AddingProductToOrderByName(QWidget *parent = nullptr);
    ~AddingProductToOrderByName();

    void setNumOfOrder(int newNumOfOrder);

private slots:
    void on_confirmButton_clicked();
    void filterItems(const QString &text);
signals:
    void ProductAddedToOrder();
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;

private:
    Ui::AddingProductToOrderByName *ui;
    PriceListWork PriceListWorker = PriceListWork();
    OrderProdutsListWorker orderProdutsWorker = OrderProdutsListWorker();
    QMessageBox* wrongInput;
    int numOfOrder;
    QListWidget *itemList;
    QStringList productsName;
};

#endif // ADDINGPRODUCTTOORDERBYNAME_H
