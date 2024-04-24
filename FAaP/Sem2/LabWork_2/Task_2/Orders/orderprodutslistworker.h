#ifndef ORDERPRODUTSLISTWORKER_H
#define ORDERPRODUTSLISTWORKER_H

#include <QFile>
#include <QTextStream>
#include "pricelistwork.h"
#include "product.h"

class OrderProdutsListWorker
{
public:
    OrderProdutsListWorker();
    int FindOrderByNum(int);
    bool AddOrder(int);
    int AddProductToOrder(int, int, int);
    QPair<int, int> FindProductInOrder(int, int);
    QVector<QPair<Product, int>> ProductsInOrder(int);
    int deleteProduct(int numOfProduct);
    int deleteProductInOrder(int, int);
    int Sort(int, int);
    int ChangeAmount(int, int, int);
    int ChangeNumOfProduct(int, int);
private:
    QFile OrderProductsFile = QFile("/home/denis/Qtprojects/LABA2/Task2/build-Orders-Desktop-Debug/ORDERPRODUCTLIST.txt");
    PriceListWork PriceListWorker = PriceListWork();
};

#endif // ORDERPRODUTSLISTWORKER_H
