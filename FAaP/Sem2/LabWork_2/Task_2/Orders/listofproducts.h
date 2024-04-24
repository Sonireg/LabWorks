#ifndef LISTOFPRODUCTS_H
#define LISTOFPRODUCTS_H

#include <QVector>

class ListOfProducts
{
public:
    ListOfProducts();
    ListOfProducts(int);
    void addProduct(int, int);
    bool removeProductByNum(int);
    bool removeProductByPos(int);
private:
    int numOfOrder;
    QVector<int> productsList;
    QVector<int> amountOfProduct;
};

#endif // LISTOFPRODUCTS_H
