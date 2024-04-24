#ifndef ORDERNAMECHANGING_H
#define ORDERNAMECHANGING_H

#include <QWidget>
#include <QMessageBox>
#include "ordersfilework.h"
#include <QKeyEvent>

namespace Ui {
class OrderNameChanging;
}

class OrderNameChanging : public QWidget
{
    Q_OBJECT

public:
    explicit OrderNameChanging(QWidget *parent = nullptr);
    ~OrderNameChanging();

    void setNumOfProd(int newNumOfProd);

private slots:
    void on_pushButton_clicked();
signals:
    void nameChanged();
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private:
    Ui::OrderNameChanging *ui;
    OrdersFileWork nameChanger = OrdersFileWork();
    QMessageBox* message;
    int numOfProd;
};

#endif // ORDERNAMECHANGING_H
