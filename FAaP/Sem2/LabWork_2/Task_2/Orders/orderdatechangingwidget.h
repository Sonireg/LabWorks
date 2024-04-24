#ifndef ORDERDATECHANGINGWIDGET_H
#define ORDERDATECHANGINGWIDGET_H

#include <QWidget>
#include <QMessageBox>
#include "ordersfilework.h"
#include <QKeyEvent>

namespace Ui {
class OrderDateChangingWidget;
}

class OrderDateChangingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OrderDateChangingWidget(QWidget *parent = nullptr);
    ~OrderDateChangingWidget();

    void setNumOfProd(int newNumOfProd);

private slots:
    void on_pushButton_clicked();
signals:
    void dateChanged();
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private:
    Ui::OrderDateChangingWidget *ui;
    OrdersFileWork nameChanger = OrdersFileWork();
    QMessageBox* message;
    int numOfProd;
};

#endif // ORDERDATECHANGINGWIDGET_H
