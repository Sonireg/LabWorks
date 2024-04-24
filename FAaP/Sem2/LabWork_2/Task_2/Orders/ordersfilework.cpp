#include "ordersfilework.h"

OrdersFileWork::OrdersFileWork() {}

int OrdersFileWork::FindOrderByNum(int numOfOrder)
{
    if (OrdersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&OrdersFile);
        int readedNum;
        int numOfLine = 1;
        while(!in.atEnd()) {
            readedNum = in.readLine().split("***")[0].toInt();
            if (readedNum == numOfOrder){
                OrdersFile.close();
                return numOfLine;
            }
            numOfLine++;
        }
        OrdersFile.close();
        return -1;
    }
    else {
        return -2;
    }
}

int OrdersFileWork::FindOrderByName(QString searchedName)
{
    if (OrdersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&OrdersFile);
        QString readedName;
        int numOfLine = 1;
        while(!in.atEnd()) {
            readedName = in.readLine().split("***")[2];
            if (readedName == searchedName){
                OrdersFile.close();
                return numOfLine;
            }
            numOfLine++;
        }
        OrdersFile.close();
        return -1;
    }
    else {
        return -2;
    }
}

int OrdersFileWork::FindOrderByDate(QDate searchedDate)
{
    if (OrdersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&OrdersFile);
        QString readedDate, searchedDateStr = searchedDate.toString("dd.MM.yyyy");
        int numOfLine = 1;
        while(!in.atEnd()) {
            readedDate = in.readLine().split("***")[1];
            if (readedDate == searchedDateStr){
                OrdersFile.close();
                return numOfLine;
            }
            numOfLine++;
        }
        OrdersFile.close();
        return -1;
    }
    else {
        return -2;
    }
}

int OrdersFileWork::AddOrder(int numOfOrder, QDate dateOfOrder, QString nameOfOrderer)
{
    int nOfOrder = FindOrderByNum(numOfOrder);
    if (nOfOrder > 0) return -3;
    if (OrdersFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&OrdersFile);
        out << numOfOrder << "***" + dateOfOrder.toString("dd.MM.yyyy") + "***" + nameOfOrderer + "\n";
        OrdersFile.close();
    } else
    {
        return -1;
    }

    if (ProductsInOrderFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&ProductsInOrderFile);
        out << numOfOrder << "\n";
        ProductsInOrderFile.close();
    } else
    {
        return -2;
    }
    return 1;
}

QVector<Order> OrdersFileWork::AllOrdersInFile()
{
    if (OrdersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&OrdersFile);
        QVector<Order> OrdersInFile;
        QStringList strInfo;
        while(!in.atEnd()) {
            strInfo = in.readLine().split("***");
            OrdersInFile.append(Order(strInfo[0].toInt(), QDate::fromString(strInfo[1], "dd.MM.yyyy"), strInfo[2]));
        }
        OrdersFile.close();
        return OrdersInFile;
    }
    else {
        return QVector<Order>(1, Order());
    }
}

bool OrdersFileWork::deleteOrder(int numOfOrder)
{
    if (FindOrderByNum(numOfOrder) < 0) return -1;
    if (OrdersFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&OrdersFile);
        int readedNum;
        QString readedLine, fileInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            readedNum = readedLine.split("***")[0].toInt();
            if (readedNum != numOfOrder){
                fileInfo += readedLine + '\n';
            }
        }
        OrdersFile.resize(0);
        in << fileInfo;
        OrdersFile.close();
    }
    else {
        return -2;
    }
    if (ProductsInOrderFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&ProductsInOrderFile);
        int readedNum;
        QString readedLine, fileInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            readedNum = readedLine.split("***")[0].toInt();
            if (readedNum != numOfOrder){
                fileInfo += readedLine + '\n';
            }
        }
        ProductsInOrderFile.resize(0);
        in << fileInfo;
        ProductsInOrderFile.close();
    }
    else {
        return -2;
    }
    return 1;
}

void OrdersFileWork::Sort(int type)
{
    QVector<Order> orders = AllOrdersInFile();

    std::sort(orders.begin(), orders.end(), [=](const Order& ord1, const Order& ord2){
        switch (type) {
        case 0:
            return ord1.getNumOfOreder() < ord2.getNumOfOreder();
            break;
        case 1:
            return ord1.getNumOfOreder() > ord2.getNumOfOreder();
            break;
        case 2:
            return ord1.getDateOfOrder() < ord2.getDateOfOrder();
            break;
        case 3:
            return ord1.getDateOfOrder() > ord2.getDateOfOrder();
            break;
        case 4:
            return ord1.getOrderer() < ord2.getOrderer();
            break;
        case 5:
            return ord1.getOrderer() > ord2.getOrderer();
            break;
        default:
            return true;
            break;
        }
    });
    OrdersFile.open(QIODevice::ReadWrite | QIODevice::Text);
    OrdersFile.resize(0);
    QTextStream out(&OrdersFile);
    for (int i = 0; i < orders.size(); ++i) {
        out << orders[i].getNumOfOreder() << "***" << orders[i].getDateOfOrder().toString("dd.MM.yyyy")
            << "***" + orders[i].getOrderer() + '\n';
    }
    OrdersFile.close();
}

int OrdersFileWork::ChangeNum(int numOfOrder, int newNum)
{
    if (FindOrderByNum(numOfOrder) < 0) return -1;
    if (FindOrderByNum(newNum) > 0) return -3;
    if (OrdersFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&OrdersFile);
        int readedNum;
        QString readedLine, fileInfo;
        QStringList readedInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            readedInfo = readedLine.split("***");
            readedNum = readedInfo[0].toInt();
            if (readedNum == numOfOrder){
                readedLine = QString::number(newNum) + "***" + readedInfo[1] + "***" + readedInfo[2];
            }
            fileInfo += readedLine + '\n';
        }
        OrdersFile.resize(0);
        in << fileInfo;
        OrdersFile.close();
    }
    else {
        return -2;
    }
    if (ProductsInOrderFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&ProductsInOrderFile);
        int readedNum;
        QString readedLine, fileInfo;
        QStringList readedInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            readedInfo = readedLine.split("***");
            readedNum = readedInfo[0].toInt();
            if (readedNum == numOfOrder){
                readedLine = "";
                readedLine += QString::number(newNum);
                for (int i = 1; i < readedInfo.size(); ++i) {
                    readedLine += "***" + readedInfo[i];
                }
            }
            fileInfo += readedLine + '\n';
        }
        ProductsInOrderFile.resize(0);
        in << fileInfo;
        ProductsInOrderFile.close();
        return 1;
    }
    else {
        return -2;
    }
}

int OrdersFileWork::ChangeDate(int numOfOrder, QDate newDate)
{
    if (FindOrderByNum(numOfOrder) < 0) return -1;
    if (OrdersFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&OrdersFile);
        int readedNum;
        QString readedLine, fileInfo;
        QStringList readedInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            readedInfo = readedLine.split("***");
            readedNum = readedInfo[0].toInt();
            if (readedNum == numOfOrder){
                readedLine = readedInfo[0] + "***" + newDate.toString("dd.MM.yyyy") + "***" + readedInfo[2];
            }
            fileInfo += readedLine + '\n';
        }
        OrdersFile.resize(0);
        in << fileInfo;
        OrdersFile.close();
        return 1;
    }
    else {
        return -2;
    }
}

int OrdersFileWork::ChangeName(int numOfOrder, QString newName)
{
    if (FindOrderByNum(numOfOrder) < 0) return -1;
    if (OrdersFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&OrdersFile);
        int readedNum;
        QString readedLine, fileInfo;
        QStringList readedInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            readedInfo = readedLine.split("***");
            readedNum = readedInfo[0].toInt();
            if (readedNum == numOfOrder){
                readedLine = readedInfo[0] + "***" + readedInfo[1] + "***" + newName;
            }
            fileInfo += readedLine + '\n';
        }
        OrdersFile.resize(0);
        in << fileInfo;
        OrdersFile.close();
        return 1;
    }
    else {
        return -2;
    }
}

Order OrdersFileWork::getOrderByNum(int numOfOrder)
{
    if (OrdersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&OrdersFile);
        int readedNum;
        QStringList readedInf;
        while(!in.atEnd()) {
            readedInf = in.readLine().split("***");
            readedNum = readedInf[0].toInt();
            if (readedNum == numOfOrder){
                OrdersFile.close();
                return Order(readedInf[0].toInt(), QDate::fromString(readedInf[1], "dd.MM.yyyy"), readedInf[2]);
            }
        }
        OrdersFile.close();
        return Order();
    }
    else {
        return Order();
    }
}
