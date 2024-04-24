#ifndef PRODUCTBYPRICEFINDER_H
#define PRODUCTBYPRICEFINDER_H

#include <QWidget>
#include "pricelistwork.h"
#include <QMessageBox>
#include <QKeyEvent>

namespace Ui {
class ProductByPriceFinder;
}

class ProductByPriceFinder : public QWidget
{
    Q_OBJECT

public:
    explicit ProductByPriceFinder(QWidget *parent = nullptr);
    ~ProductByPriceFinder();

    int getFoundNum() const;
protected:
    void keyPressEvent(QKeyEvent *event) override;
private slots:
    void on_pushButton_clicked();
signals:
    void prodFound();
private:
    Ui::ProductByPriceFinder *ui;
    PriceListWork finder;
    QMessageBox* message;
    int foundNum;
};

#endif // PRODUCTBYPRICEFINDER_H
