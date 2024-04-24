#ifndef PRODUCTBYNUMFINDER_H
#define PRODUCTBYNUMFINDER_H

#include <QWidget>
#include "pricelistwork.h"
#include <QMessageBox>
#include <QKeyEvent>

namespace Ui {
class ProductByNumFinder;
}

class ProductByNumFinder : public QWidget
{
    Q_OBJECT

public:
    explicit ProductByNumFinder(QWidget *parent = nullptr);
    ~ProductByNumFinder();

    int getFoundNum() const;
protected:
    void keyPressEvent(QKeyEvent *event) override;
private slots:
    void on_pushButton_clicked();
signals:
    void prodFound();
private:
    Ui::ProductByNumFinder *ui;
    PriceListWork finder;
    QMessageBox* message;
    int foundNum;
};

#endif // PRODUCTBYNUMFINDER_H
