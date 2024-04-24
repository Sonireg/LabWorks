#include "order.h"

Order::Order() {
    numOfOreder = 0;
    dateOfOrder = QDate(0, 0, 0);
    orderer = "Don Joeh";
}

Order::Order(int initNumOfOrder, QDate initDateOfOrder, QString nameOfOrderer)
{
    numOfOreder = initNumOfOrder;
    dateOfOrder = initDateOfOrder;
    orderer = nameOfOrderer;
}

int Order::getNumOfOreder() const
{
    return numOfOreder;
}

void Order::setNumOfOreder(int newNumOfOreder)
{
    numOfOreder = newNumOfOreder;
}

QDate Order::getDateOfOrder() const
{
    return dateOfOrder;
}

void Order::setDateOfOrder(const QDate &newDateOfOrder)
{
    dateOfOrder = newDateOfOrder;
}

QString Order::getOrderer() const
{
    return orderer;
}

void Order::setOrderer(const QString &newOrderer)
{
    orderer = newOrderer;
}
