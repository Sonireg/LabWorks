#ifndef ORDERPRODUCTAMOUNTCHANGER_H
#define ORDERPRODUCTAMOUNTCHANGER_H

#include <QWidget>
#include <QMessageBox>
#include "orderprodutslistworker.h"
#include <QKeyEvent>

namespace Ui {
class OrderProductAmountChanger;
}

class OrderProductAmountChanger : public QWidget
{
    Q_OBJECT

public:
    explicit OrderProductAmountChanger(QWidget *parent = nullptr);
    ~OrderProductAmountChanger();
    void setNumOfCurrOrder(int newNumOfCurrOrder);

    void setNumOfProd(int newNumOfProd);

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private slots:
    void on_pushButton_clicked();
signals:
    void amountChanged();
private:
    Ui::OrderProductAmountChanger *ui;
    QMessageBox* message;
    OrderProdutsListWorker amountChanger;
    int numOfCurrOrder;
    int numOfProd;
};

#endif // ORDERPRODUCTAMOUNTCHANGER_H
