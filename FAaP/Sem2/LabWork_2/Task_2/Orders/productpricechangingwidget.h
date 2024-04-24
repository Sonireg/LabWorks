#ifndef PRODUCTPRICECHANGINGWIDGET_H
#define PRODUCTPRICECHANGINGWIDGET_H

#include <QWidget>
#include "pricelistwork.h"
#include <QMessageBox>
#include <QKeyEvent>

namespace Ui {
class ProductPriceChangingWidget;
}

class ProductPriceChangingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductPriceChangingWidget(QWidget *parent = nullptr);
    ~ProductPriceChangingWidget();
    void setNumOfProd(int newNumOfProd);

signals:
    void priceChanged();
private slots:
    void on_pushButton_clicked();
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private:
    Ui::ProductPriceChangingWidget *ui;
    PriceListWork numChanger;
    int numOfProd = 0;
    QMessageBox* message;
};

#endif // PRODUCTPRICECHANGINGWIDGET_H
