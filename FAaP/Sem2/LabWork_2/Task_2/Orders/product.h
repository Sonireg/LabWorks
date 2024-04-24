#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product
{
public:
    Product();
    Product(int, QString, qreal);
    int getCodeOfProduct() const;
    QString getName() const;
    qreal getPrice() const;
    void setPrice(qreal);
    void setName(QString);
private:
    int codeOfProduct;
    QString nameOfProduct;
    qreal price;
};

#endif // PRODUCT_H
