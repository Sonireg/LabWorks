#ifndef ORDERNUMCHANGING_H
#define ORDERNUMCHANGING_H

#include <QWidget>
#include <QMessageBox>
#include "ordersfilework.h"
#include <QKeyEvent>

namespace Ui {
class OrderNumChanging;
}

class OrderNumChanging : public QWidget
{
    Q_OBJECT

public:
    explicit OrderNumChanging(QWidget *parent = nullptr);
    ~OrderNumChanging();

    void setNumOfProd(int newNumOfProd);

private slots:
    void on_pushButton_clicked();
signals:
    void numChanged();
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private:
    Ui::OrderNumChanging *ui;
    OrdersFileWork nameChanger = OrdersFileWork();
    QMessageBox* message;
    int numOfProd;
};

#endif // ORDERNUMCHANGING_H
