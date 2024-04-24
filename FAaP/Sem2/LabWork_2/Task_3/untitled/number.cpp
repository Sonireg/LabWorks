#include "number.h"

Number::Number() {}

Number::Number(double initNum)
{
    number = initNum;
}

double Number::evaluate()
{
    return number;
}
