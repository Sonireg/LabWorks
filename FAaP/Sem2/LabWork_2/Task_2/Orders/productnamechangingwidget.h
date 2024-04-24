#ifndef PRODUCTNAMECHANGINGWIDGET_H
#define PRODUCTNAMECHANGINGWIDGET_H

#include <QWidget>
#include "pricelistwork.h"
#include <QMessageBox>
#include <QKeyEvent>

namespace Ui {
class ProductNameChangingWidget;
}

class ProductNameChangingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductNameChangingWidget(QWidget *parent = nullptr);
    ~ProductNameChangingWidget();

    void setNumOfProd(int newNumOfProd);

private slots:
    void on_pushButton_clicked();
signals:
    void nameChanged();
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private:
    Ui::ProductNameChangingWidget *ui;
    PriceListWork nameChanger;
    int numOfProd = 0;
    QMessageBox* message;
};

#endif // PRODUCTNAMECHANGINGWIDGET_H
