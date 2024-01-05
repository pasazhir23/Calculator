#include <iostream>

enum class Operation{
    plus,
    minus,
    multiply,
    division
};

void checkCin(){
    if (std::cin.fail()){
        std::cout << "\nerror\n";
        exit(1);
    }
}

double getNumber(std::string name){
    std::cout << "input number " << name << ": ";
    double a = 0;
    std::cin >> a;
    checkCin();
    return a;
}

Operation getOperation(){
    int op = 0;

    std::cout << "enter operation (1-plus,2-minus,3-multiply,4-division): ";
    std::cin >> op;

    checkCin();

    switch (op) {
    case 1:
        return Operation::plus;
    case 2:
        return Operation::minus;
    case 3:
        return Operation::multiply;
    case 4:
        return Operation::division;
    default:
        std::cout << "\nerror\n";
        exit(1);
    }
}

void Calculate(double a, double b, Operation op){
    switch (op) {
    case Operation::plus:
        std::cout << a+b << "\n";
        return;
    case Operation::minus:
        std::cout << a-b << "\n";
        return;
    case Operation::multiply:
        std::cout << a*b << "\n";
        return;
    case Operation::division:
        std::cout << a/b << "\n";
        return;
    }
    std::cout << "\nerror\n";
    exit(1);
}

int main()
{
    double a = getNumber("a");
    Operation op = getOperation();
    double b = getNumber("b");
    Calculate(a,b,op);
    return 0;
}
