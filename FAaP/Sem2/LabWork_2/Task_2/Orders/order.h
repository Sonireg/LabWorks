#ifndef ORDER_H
#define ORDER_H

#include <QDate>
#include "listofproducts.h"

class Order
{
public:
    Order();
    Order(int, QDate, QString);
    int getNumOfOreder() const;
    void setNumOfOreder(int newNumOfOreder);

    QDate getDateOfOrder() const;
    void setDateOfOrder(const QDate &newDateOfOrder);

    QString getOrderer() const;
    void setOrderer(const QString &newOrderer);

private:
    int numOfOreder;
    QDate dateOfOrder;
    QString orderer;
    ListOfProducts orderProductsList;
};

#endif // ORDER_H
