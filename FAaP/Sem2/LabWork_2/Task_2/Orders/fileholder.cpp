#include "fileholder.h"

FileHolder::FileHolder() {}

QFile FileHolder::PriceList()
{
    return QFile("/home/denis/Qtprojects/LABA2/Task2/build-Orders-Desktop-Debug/PRICELIST.txt");
}
