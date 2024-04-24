#include "listofproducts.h"

ListOfProducts::ListOfProducts() {
    productsList = QVector<int>();
    amountOfProduct = QVector<int>();
}

ListOfProducts::ListOfProducts(int inNumOfOrder)
{
    productsList = QVector<int>();
    amountOfProduct = QVector<int>();
    numOfOrder = inNumOfOrder;
}

void ListOfProducts::addProduct(int numOfNewProduct, int amountOfNewProduct)
{
    productsList.append(numOfNewProduct);
    amountOfProduct.append(amountOfNewProduct);
}

bool ListOfProducts::removeProductByNum(int remProdNum)
{
    int remInd = -1;
    for (int i = 0; i < productsList.size(); ++i) {
        if (productsList[i] == remProdNum) {
            remInd = i;
            break;
        }
    }
    if (remInd == -1) {
        return false;
    }
    productsList.removeAt(remInd);
    amountOfProduct.removeAt(remInd);
    return true;
}

bool ListOfProducts::removeProductByPos(int remInd)
{
    if (remInd >= productsList.size() || remInd < 0) {
        return false;
    }
    productsList.removeAt(remInd);
    amountOfProduct.removeAt(remInd);
    return true;
}
