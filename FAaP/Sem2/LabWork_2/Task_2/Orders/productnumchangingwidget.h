#ifndef PRODUCTNUMCHANGINGWIDGET_H
#define PRODUCTNUMCHANGINGWIDGET_H

#include <QWidget>
#include "pricelistwork.h"
#include <QMessageBox>
#include <QKeyEvent>
#include "orderprodutslistworker.h"

namespace Ui {
class ProductNumChangingWidget;
}

class ProductNumChangingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductNumChangingWidget(QWidget *parent = nullptr);
    ~ProductNumChangingWidget();
    void setNumOfProd(int newNumOfProd);

signals:
    void numChanged();
private slots:
    void on_pushButton_clicked();
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private:
    Ui::ProductNumChangingWidget *ui;
    PriceListWork numChanger;
    OrderProdutsListWorker numInOrderChanger;
    int numOfProd = 0;
    QMessageBox* message;
};

#endif // PRODUCTNUMCHANGINGWIDGET_H
