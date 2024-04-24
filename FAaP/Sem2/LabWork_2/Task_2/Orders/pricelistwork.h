#ifndef PRICELISTWORK_H
#define PRICELISTWORK_H

#include <QFile>
#include <QTextStream>
#include "product.h"
#include <QtAlgorithms>
#include <QVector>

class PriceListWork
{
public:
    PriceListWork();
    int addProduct(int, QString, qreal);
    int findProdByNum(int);
    int findProdByName(QString);
    int findProdByPrice(qreal);
    int amountOfLines();
    Product ProdOnLine(int);
    QVector<Product> allProductsInFile();
    QString NameFromNum(int);
    qreal PriceFromNum(int);
    int deleteProduct(int);
    void Sort(int);
    int ChangeName(int, QString);
    int ChangeNum(int, int);
    int ChangePrice(int, qreal);
private:
    QFile PriceList = QFile("/home/denis/Qtprojects/LABA2/Task2/build-Orders-Desktop-Debug/PRICELIST.txt");
};

#endif // PRICELISTWORK_H
