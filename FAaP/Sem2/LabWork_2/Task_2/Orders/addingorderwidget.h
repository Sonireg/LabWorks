#ifndef ADDINGORDERWIDGET_H
#define ADDINGORDERWIDGET_H

#include <QWidget>
#include <QDate>
#include <QMessageBox>
#include "ordersfilework.h"
#include <QKeyEvent>

namespace Ui {
class AddingOrderWidget;
}

class AddingOrderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddingOrderWidget(QWidget *parent = nullptr);
    ~AddingOrderWidget();

private slots:
    void on_confirmButton_clicked();
signals:
    void OrderAdded();
protected:
    void keyPressEvent(QKeyEvent *event) override;
private:
    Ui::AddingOrderWidget *ui;
    QMessageBox* wrongInput;
    OrdersFileWork ordersFileWorker = OrdersFileWork();
};

#endif // ADDINGORDERWIDGET_H
