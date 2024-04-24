#ifndef PRICELISTTABLE_H
#define PRICELISTTABLE_H

#include <QWidget>
#include "pricelistwork.h"
#include "orderprodutslistworker.h"
#include "productaddingwidget.h"
#include "productnamechangingwidget.h"
#include "productnumchangingwidget.h"
#include "productpricechangingwidget.h"
#include "productbynamefinder.h"
#include "productbynumfinder.h"
#include "productbypricefinder.h"

namespace Ui {
class PriceListTable;
}

class PriceListTable : public QWidget
{
    Q_OBJECT

public:
    explicit PriceListTable(QWidget *parent = nullptr);
    ~PriceListTable();
    void updateTable();
private slots:
    void on_sortingButton_clicked();

    void on_addingProductButton_clicked();

    void on_changingButton_clicked();

    void on_deletingButton_clicked();
    void on_findingButton_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;
signals:
    void productsChanged();
private:
    Ui::PriceListTable *ui;
    PriceListWork PriceListWorker = PriceListWork();
    OrderProdutsListWorker productsInOrderWorker = OrderProdutsListWorker();

    ProductAddingWidget* productAddingWidget;
    ProductNameChangingWidget* nameChangingWidget;
    ProductNumChangingWidget* numChangingWidget;
    ProductPriceChangingWidget* priceChangingWidget;
    ProductByNameFinder* byNameFinder;
    ProductByNumFinder* byNumFinder;
    ProductByPriceFinder* byPriceFinder;
    QMessageBox* message;
};

#endif // PRICELISTTABLE_H
