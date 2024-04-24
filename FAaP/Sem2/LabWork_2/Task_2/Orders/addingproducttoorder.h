#ifndef ADDINGPRODUCTTOORDER_H
#define ADDINGPRODUCTTOORDER_H

#include <QWidget>
#include "pricelistwork.h"
#include "orderprodutslistworker.h"
#include <QMessageBox>
#include <QKeyEvent>

namespace Ui {
class AddingProductToOrder;
}

class AddingProductToOrder : public QWidget
{
    Q_OBJECT

public:
    explicit AddingProductToOrder(QWidget *parent = nullptr);
    ~AddingProductToOrder();

    void setNumOfOrder(int newNumOfOrder);

private slots:
    void on_confirmButton_clicked();
signals:
    void ProductAddedToOrder();
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private:
    Ui::AddingProductToOrder *ui;
    PriceListWork PriceListWorker = PriceListWork();
    OrderProdutsListWorker orderProdutsWorker = OrderProdutsListWorker();
    QMessageBox* wrongInput;
    int numOfOrder;
};

#endif // ADDINGPRODUCTTOORDER_H
