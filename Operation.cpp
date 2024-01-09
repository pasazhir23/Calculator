#include "Operation.h"
#include <iostream>
#include "Tools.h"

void Operation::getOperation(){
    char op = 0;

    std::cout << "enter operation (+ | - | * | /): ";
    std::cin >> op;

    tools::checkCin();
    mOp = charToOperation(op);
}

void Operation::calculate(double a, double b){
    switch (mOp) {
    case Type::plus:
        std::cout << a+b << "\n";
        return;
    case Type::minus:
        std::cout << a-b << "\n";
        return;
    case Type::multiply:
        std::cout << a*b << "\n";
        return;
    case Type::division:
        std::cout << a/b << "\n";
        return;
    }
    std::cout << "\nerror\n";
    exit(1);
}

Operation::Type Operation::charToOperation(char op)
{
    switch (op) {
    case '+':
        return Type::plus;
    case '-':
        return Type::minus;
    case '*':
        return Type::multiply;
    case '/':
        return Type::division;
    default:
        std::cout << "\nerror\n";
        exit(1);
    }
}
