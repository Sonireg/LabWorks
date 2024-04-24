#ifndef PRODUCTBYNAMEFINDER_H
#define PRODUCTBYNAMEFINDER_H

#include <QWidget>
#include "pricelistwork.h"
#include <QMessageBox>
#include <QKeyEvent>
#include <QListWidget>

namespace Ui {
class ProductByNameFinder;
}

class ProductByNameFinder : public QWidget
{
    Q_OBJECT

public:
    explicit ProductByNameFinder(QWidget *parent = nullptr);
    ~ProductByNameFinder();

    int getFoundNum() const;
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private slots:
    void on_pushButton_clicked();
    void filterItems(const QString &text);
signals:
    void prodFound();
private:
    Ui::ProductByNameFinder *ui;
    PriceListWork finder;
    QMessageBox* message;
    int foundNum;
    QListWidget *itemList;
    QStringList productsName;
};

#endif // PRODUCTBYNAMEFINDER_H
