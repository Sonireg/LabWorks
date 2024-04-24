#ifndef ORDERSFILEWORK_H
#define ORDERSFILEWORK_H

#include <QFile>
#include <QTextStream>
#include <QDate>
#include "order.h"

class OrdersFileWork
{
public:
    OrdersFileWork();
    int FindOrderByNum(int);
    int FindOrderByName(QString);
    int FindOrderByDate(QDate);
    int AddOrder(int numOfOrder, QDate dateOfOrder, QString nameOfOrderer);
    QVector<Order> AllOrdersInFile();
    bool deleteOrder(int);
    void Sort(int);
    int ChangeNum(int, int);
    int ChangeDate(int, QDate);
    int ChangeName(int, QString);
    Order getOrderByNum(int);
private:
    QFile OrdersFile = QFile("/home/denis/Qtprojects/LABA2/Task2/build-Orders-Desktop-Debug/ORDERS.txt");
    QFile ProductsInOrderFile = QFile("/home/denis/Qtprojects/LABA2/Task2/build-Orders-Desktop-Debug/ORDERPRODUCTLIST.txt");
};

#endif // ORDERSFILEWORK_H
