#include "product.h"

Product::Product() {}

Product::Product(int initCode, QString initName, qreal initPrice)
{
    codeOfProduct = initCode;
    nameOfProduct = initName;
    price = initPrice;
}

int Product::getCodeOfProduct() const
{
    return codeOfProduct;
}

QString Product::getName() const
{
    return nameOfProduct;
}

qreal Product::getPrice() const
{
    return price;
}

void Product::setPrice(qreal newPrice)
{
    price = newPrice;
}

void Product::setName(QString newName)
{
    nameOfProduct = newName;
}
