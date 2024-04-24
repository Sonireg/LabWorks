#include "orderprodutslistworker.h"

OrderProdutsListWorker::OrderProdutsListWorker() {}

int OrderProdutsListWorker::FindOrderByNum(int numOfOrder)
{
    if (OrderProductsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&OrderProductsFile);
        int readedNum;
        int numOfLine = 1;
        while(!in.atEnd())
        {
            readedNum = in.readLine().split("***")[0].toInt();
            if (readedNum == numOfOrder){
                OrderProductsFile.close();
                return numOfLine;
            }
            numOfLine++;
        }
        OrderProductsFile.close();
        return -1;
    }
    else
    {
        return -2;
    }
}

bool OrderProdutsListWorker::AddOrder(int numOfOrder)
{
    if (OrderProductsFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&OrderProductsFile);
        out << numOfOrder;
        OrderProductsFile.close();
    } else
    {
        return false;
    }
    return true;
}

int OrderProdutsListWorker::AddProductToOrder(int numOfOrder, int numOfProduct, int amountOfProduct) //эта хуйня не работает вообще
{
    int isProd = PriceListWorker.findProdByNum(numOfProduct);
    if (isProd < 0) return -3;
    QPair<int, int> OrderNumProductNum = FindProductInOrder(numOfOrder, numOfProduct);
    int numOfLine = OrderNumProductNum.first, numOfProdInLine = OrderNumProductNum.second;
    if (numOfLine < 0) return numOfLine;
    if (numOfProdInLine < 0) {
        if (OrderProductsFile.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            QTextStream out(&OrderProductsFile);
            out.seek(0);
            int lineNumber = 1;
            QString fileInfo = "";
            while (!out.atEnd())
            {
                QString line = out.readLine();
                if (lineNumber == numOfLine)
                {
                    line += "***" + QString::number(numOfProduct) + "***" + QString::number(amountOfProduct);
                }
                fileInfo += line + '\n';
                lineNumber++;
            }
            OrderProductsFile.resize(0);
            out.seek(0);
            out << fileInfo;
            OrderProductsFile.close();
        } else
        {
            return 0;
        }
    }
    else {
        if (OrderProductsFile.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            QTextStream out(&OrderProductsFile);
            out.seek(0);
            int lineNumber = 1;
            QString fileInfo = "";
            while (!out.atEnd())
            {
                QString line = out.readLine();
                if (lineNumber == numOfLine)
                {
                    auto OrderInfo = line.split("***");
                    line = "";
                    for (int i = 0; i < OrderInfo.size(); ++i) {
                        if (i != numOfProdInLine + 1) {
                            line += OrderInfo[i];
                        }
                        else {
                            line += QString::number(OrderInfo[i].toInt() + amountOfProduct);
                        }
                        if (i != OrderInfo.size() - 1) line += "***";
                    }
                }
                fileInfo += line + '\n';
                lineNumber++;
            }
            OrderProductsFile.resize(0);
            out.seek(0);
            out << fileInfo;
            OrderProductsFile.close();
        } else
        {
            return 0;
        }
    }
    return 1;
}

QPair<int, int> OrderProdutsListWorker::FindProductInOrder(int numOfOrder, int numOfProduct)
{
    if (OrderProductsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&OrderProductsFile);
        int readedNum;
        int lineOfOrderNum = 1;
        while(!in.atEnd())
        {
            auto productsInOrder = in.readLine().split("***");
            readedNum = productsInOrder[0].toInt();
            if (readedNum == numOfOrder){
                for (int i = 1; i < productsInOrder.size(); i += 2) {
                    if (productsInOrder[i].toInt() == numOfProduct) {
                        OrderProductsFile.close();
                        return QPair<int, int>(lineOfOrderNum, i);
                    }
                }
                OrderProductsFile.close();
                return QPair<int, int>(lineOfOrderNum, -1);
            }
            lineOfOrderNum++;
        }
        OrderProductsFile.close();
        return QPair<int, int>(-1, -1);
    }
    else
    {
        return QPair<int, int>(-2, -2);
    }
}

QVector<QPair<Product, int>> OrderProdutsListWorker::ProductsInOrder(int numOfLine)
{
    if (OrderProductsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&OrderProductsFile);
        int lineOfOrderNum = 1;
        QVector<QPair<Product, int>> prodInOrd;
        while(!in.atEnd())
        {
            auto productsInOrder = in.readLine().split("***");
            if (lineOfOrderNum == numOfLine) {
                for (int i = 1; i < productsInOrder.size(); i += 2) {
                    prodInOrd.append(QPair<Product, int>(PriceListWorker.ProdOnLine(PriceListWorker.findProdByNum(productsInOrder[i].toInt())),
                                                     productsInOrder[i + 1].toInt()));
                }
                OrderProductsFile.close();
                return prodInOrd;
            }
            lineOfOrderNum++;
        }
        OrderProductsFile.close();
        return QVector<QPair<Product, int>>(1, QPair<Product, int>(Product(), -1));
    }
    else
    {
        return QVector<QPair<Product, int>>(1, QPair<Product, int>(Product(), -1));
    }
}

int OrderProdutsListWorker::deleteProduct(int numOfProduct)
{
    if (OrderProductsFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QTextStream in(&OrderProductsFile);
        QString line, fileInfo;
        fileInfo = "";
        while(!in.atEnd())
        {
            line = in.readLine();
            auto OrderInfo = line.split("***");
            line = OrderInfo[0];
            for (int i = 1; i < OrderInfo.size(); i += 2) {
                if (OrderInfo[i].toInt() != numOfProduct) {
                    line += "***" + OrderInfo[i] + "***" + OrderInfo[i + 1];
                }
            }
            fileInfo += line + '\n';
        }
        OrderProductsFile.resize(0);
        in << fileInfo;
        OrderProductsFile.close();
        return 1;
    }
    else
    {
        return -1;
    }
}

int OrderProdutsListWorker::deleteProductInOrder(int numOfOrder, int numOfProduct)
{
    if (OrderProductsFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QTextStream in(&OrderProductsFile);
        int readedNum;
        QString fileInfo = "", readedLine;
        while(!in.atEnd())
        {
            readedLine = in.readLine();
            auto productsInOrder = readedLine.split("***");
            readedNum = productsInOrder[0].toInt();
            if (readedNum == numOfOrder){
                readedLine = QString::number(readedNum);
                for (int i = 1; i < productsInOrder.size(); i += 2) {
                    if (productsInOrder[i].toInt() != numOfProduct) {
                        readedLine += "***" + productsInOrder[i] + "***" + productsInOrder[i + 1];
                    }
                }
            }
            fileInfo += readedLine + '\n';
        }
        OrderProductsFile.resize(0);
        in << fileInfo;
        OrderProductsFile.close();
        return 1;
    }
    else
    {
        return -1;
    }
}

int OrderProdutsListWorker::Sort(int numOfOrder, int type)
{
    QVector<QPair<Product, int>> prodInOrd = ProductsInOrder(FindOrderByNum(numOfOrder));
    std::sort(prodInOrd.begin(), prodInOrd.end(), [=](const QPair<Product, int>& prodAm1, const QPair<Product, int>& prodAm2){
        switch (type) {
        case 0:
            return prodAm1.first.getCodeOfProduct() < prodAm2.first.getCodeOfProduct();
            break;
        case 1:
            return prodAm1.first.getCodeOfProduct() > prodAm2.first.getCodeOfProduct();
            break;
        case 2:
            return prodAm1.first.getName() < prodAm2.first.getName();
            break;
        case 3:
            return prodAm1.first.getName() > prodAm2.first.getName();
            break;
        case 4:
            return prodAm1.second < prodAm2.second;
            break;
        case 5:
            return prodAm1.second > prodAm2.second;
            break;
        case 6:
            return prodAm1.second * prodAm1.first.getPrice() < prodAm2.second * prodAm2.first.getPrice();
            break;
        case 7:
            return prodAm1.second * prodAm1.first.getPrice() > prodAm2.second * prodAm2.first.getPrice();
            break;
        default:
            return true;
            break;
        }
    });
    if (OrderProductsFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QTextStream in(&OrderProductsFile);
        int readedNum;
        QString fileInfo = "", readedLine;
        while(!in.atEnd())
        {
            readedLine = in.readLine();
            auto productsInOrder = readedLine.split("***");
            readedNum = productsInOrder[0].toInt();
            if (readedNum == numOfOrder){
                readedLine = QString::number(readedNum);
                for (int i = 0; i < prodInOrd.size(); i++) {
                    readedLine += "***" + QString::number(prodInOrd[i].first.getCodeOfProduct());
                    readedLine += "***" + QString::number(prodInOrd[i].second);
                }
            }
            fileInfo += readedLine + '\n';
        }
        OrderProductsFile.resize(0);
        in << fileInfo;
        OrderProductsFile.close();
        return 1;
    }
    else
    {
        return -1;
    }
}

int OrderProdutsListWorker::ChangeAmount(int numOfOrder, int numOfProduct, int newAmount)
{
    if (OrderProductsFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QTextStream in(&OrderProductsFile);
        int readedNum;
        QString fileInfo = "", readedLine;
        while(!in.atEnd())
        {
            readedLine = in.readLine();
            auto productsInOrder = readedLine.split("***");
            readedNum = productsInOrder[0].toInt();
            if (readedNum == numOfOrder){
                readedLine = QString::number(readedNum);
                for (int i = 1; i < productsInOrder.size(); i += 2) {
                    if (productsInOrder[i].toInt() != numOfProduct) {
                        readedLine += "***" + productsInOrder[i] + "***" + productsInOrder[i + 1];
                    }
                    else {
                        readedLine += "***" + productsInOrder[i] + "***" + QString::number(newAmount);
                    }
                }
            }
            fileInfo += readedLine + '\n';
        }
        OrderProductsFile.resize(0);
        in << fileInfo;
        OrderProductsFile.close();
        return 1;
    }
    else
    {
        return -1;
    }
}

int OrderProdutsListWorker::ChangeNumOfProduct(int numOfProduct, int newNumOfProduct)
{
    if (OrderProductsFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QTextStream in(&OrderProductsFile);
        QString line, fileInfo;
        fileInfo = "";
        while(!in.atEnd())
        {
            line = in.readLine();
            auto OrderInfo = line.split("***");
            line = OrderInfo[0];
            for (int i = 1; i < OrderInfo.size(); i += 2) {
                if (OrderInfo[i].toInt() != numOfProduct) {
                    line += "***" + OrderInfo[i] + "***" + OrderInfo[i + 1];
                }
                else {
                    line += "***" + QString::number(newNumOfProduct) + "***" + OrderInfo[i + 1];
                }
            }
            fileInfo += line + '\n';
        }
        OrderProductsFile.resize(0);
        in << fileInfo;
        OrderProductsFile.close();
        return 1;
    }
    else
    {
        return -1;
    }
}
