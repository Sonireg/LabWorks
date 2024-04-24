#include "pricelistwork.h"

PriceListWork::PriceListWork() {
}

int PriceListWork::addProduct(int numOfProd, QString nameOfProd, qreal priceOfProd)
{
    if (findProdByNum(numOfProd) > 0) return -2;
    if (findProdByName(nameOfProd) > 0) return -3;
    if (PriceList.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&PriceList);
        out << numOfProd << "***" << priceOfProd << "***" + nameOfProd << "\n";
        PriceList.close();
    } else
    {
        return -1;
    }
    return 1;
}

int PriceListWork::findProdByNum(int searchedNum)
{
    if (PriceList.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&PriceList);
        int readedNum;
        int numOfLine = 1;
        while(!in.atEnd()) {
            readedNum = in.readLine().split("***")[0].toInt();
            if (readedNum == searchedNum){
                PriceList.close();
                return numOfLine;
            }
            numOfLine++;
        }
        PriceList.close();
        return -1;
    }
    else {
        return -2;
    }
}

int PriceListWork::findProdByName(QString searchedName)
{
    if (PriceList.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&PriceList);
        QString readedName;
        int numOfLine = 1;
        while(!in.atEnd()) {
            readedName = in.readLine().split("***")[2];
            if (readedName == searchedName){
                PriceList.close();
                return numOfLine;
            }
            numOfLine++;
        }
        PriceList.close();
        return -1;
    }
    else {
        return -2;
    }
}

int PriceListWork::findProdByPrice(qreal searchedPrice)
{
    if (PriceList.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&PriceList);
        qreal readedPrice;
        int numOfLine = 1;
        while(!in.atEnd()) {
            readedPrice = in.readLine().split("***")[1].toDouble();
            if (readedPrice == searchedPrice){
                PriceList.close();
                return numOfLine;
            }
            numOfLine++;
        }
        PriceList.close();
        return -1;
    }
    else {
        return -2;
    }
}

int PriceListWork::amountOfLines()
{
    if (PriceList.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&PriceList);
        int amOfLines = 0;
        while(!in.atEnd()) {
            in.readLine();
            amOfLines++;
        }
        PriceList.close();
        return amOfLines;
    }
    else {
        return -2;
    }
}

Product PriceListWork::ProdOnLine(int line)
{
    if (PriceList.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&PriceList);
        int numOfLine = 1;
        while(!in.atEnd()) {
            QString prodInfo = in.readLine();
            if (numOfLine == line){
                PriceList.close();
                auto info = prodInfo.split("***");
                return Product(info[0].toInt(), info[2], info[1].toDouble());
            }
            numOfLine++;
        }
        PriceList.close();
        return Product(0, "", 0);
    }
    else {
        return Product(0, "", -1);
    }
}

QVector<Product> PriceListWork::allProductsInFile()
{
    QVector<Product> allProd;
    if (PriceList.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&PriceList);
        while(!in.atEnd()) {
            QString prodInfo = in.readLine();
            auto info = prodInfo.split("***");
            allProd.append(Product(info[0].toInt(), info[2], info[1].toDouble()));
        }
        PriceList.close();
        return allProd;
    }
    else {
        return QVector<Product>(1, Product(0, "", -1));
    }
}

QString PriceListWork::NameFromNum(int searchedNum)
{
    return ProdOnLine(findProdByNum(searchedNum)).getName();
}

qreal PriceListWork::PriceFromNum(int searchedNum)
{
    return ProdOnLine(findProdByNum(searchedNum)).getPrice();
}

int PriceListWork::deleteProduct(int numOfProd)
{
    if (findProdByNum(numOfProd) < 0) return -1;
    if (PriceList.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&PriceList);
        int readedNum;
        QString readedLine, fileInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            readedNum = readedLine.split("***")[0].toInt();
            if (readedNum != numOfProd){
                fileInfo += readedLine + '\n';
            }
        }
        PriceList.resize(0);
        in << fileInfo;
        PriceList.close();
        return 1;
    }
    else {
        return -2;
    }
}

void PriceListWork::Sort(int type)
{
    QVector<Product> sortedVect = allProductsInFile();

    std::sort(sortedVect.begin(), sortedVect.end(), [=](const Product& prod1, const Product& prod2){
        switch (type) {
        case 0:
            return prod1.getCodeOfProduct() < prod2.getCodeOfProduct();
            break;
        case 1:
            return prod1.getCodeOfProduct() > prod2.getCodeOfProduct();
            break;
        case 2:
            return prod1.getName() < prod2.getName();
            break;
        case 3:
            return prod1.getName() > prod2.getName();
            break;
        case 4:
            return prod1.getPrice() < prod2.getPrice();
            break;
        case 5:
            return prod1.getPrice() > prod2.getPrice();
            break;
        default:
            return true;
            break;
        }
    });
    PriceList.open(QIODevice::ReadWrite | QIODevice::Text);
    PriceList.resize(0);
    QTextStream out(&PriceList);
    for (int i = 0; i < sortedVect.size(); ++i) {
        out << sortedVect[i].getCodeOfProduct() << "***" << sortedVect[i].getPrice() << "***" + sortedVect[i].getName() + '\n';
    }
    PriceList.close();
}

int PriceListWork::ChangeName(int numOfLine, QString newName)
{
    if (findProdByName(newName) > 0) return -1;
    if (PriceList.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&PriceList);
        int currLineNum = 1;
        QString readedLine, fileInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            if (currLineNum == numOfLine){
                QStringList prodInfo = readedLine.split("***");
                readedLine = prodInfo[0] + "***" + prodInfo[1] + "***" + newName;
            }
            fileInfo += readedLine + '\n';
            currLineNum++;
        }
        PriceList.resize(0);
        in << fileInfo;
        PriceList.close();
        return 1;
    }
    else {
        return -2;
    }
}

int PriceListWork::ChangeNum(int numOfLine, int newNum)
{
    if (findProdByNum(newNum) > 0) return -1;
    if (PriceList.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&PriceList);
        int currLineNum = 1;
        QString readedLine, fileInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            if (currLineNum == numOfLine){
                QStringList prodInfo = readedLine.split("***");
                readedLine = QString::number(newNum) + "***" + prodInfo[1] + "***" + prodInfo[2];
            }
            fileInfo += readedLine + '\n';
            currLineNum++;
        }
        PriceList.resize(0);
        in << fileInfo;
        PriceList.close();
        return 1;
    }
    else {
        return -2;
    }


}

int PriceListWork::ChangePrice(int numOfLine, qreal newPrice)
{
    if (PriceList.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&PriceList);
        int currLineNum = 1;
        QString readedLine, fileInfo;
        while(!in.atEnd()) {
            readedLine = in.readLine();
            if (currLineNum == numOfLine){
                QStringList prodInfo = readedLine.split("***");
                readedLine = prodInfo[0] + "***" + QString::number(newPrice) + "***" + prodInfo[2];
            }
            fileInfo += readedLine + '\n';
            currLineNum++;
        }
        PriceList.resize(0);
        in << fileInfo;
        PriceList.close();
        return 1;
    }
    else {
        return -2;
    }
}


