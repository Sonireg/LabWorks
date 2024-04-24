#include "binaryoperation.h"

BinaryOperation::BinaryOperation() {}

BinaryOperation::~BinaryOperation()
{
    delete leftOperand;
    delete rightOperand;
}

BinaryOperation::BinaryOperation(Expression *initLeftOperand, char initOperation, Expression *initRightOperand)
{
    leftOperand = initLeftOperand;
    rightOperand = initRightOperand;
    operation = initOperation;
}

double BinaryOperation::evaluate()
{
    switch (operation) {
    case '+':
        return leftOperand->evaluate() + rightOperand->evaluate();
        break;
    case '-':
        return leftOperand->evaluate() - rightOperand->evaluate();
        break;
    case '*':
        return leftOperand->evaluate() * rightOperand->evaluate();
        break;
    case '/':
        return leftOperand->evaluate() / rightOperand->evaluate();
        break;
    default:
        return 0;
        break;
    }
}
