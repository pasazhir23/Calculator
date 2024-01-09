#include <iostream>
#include "Operation.h"
#include "Tools.h"

int main()
{
    Operation oper;

    double a = tools::getNumber("a");
    oper.getOperation();
    double b = tools::getNumber("b");
    oper.calculate(a,b);
    return 0;
}
