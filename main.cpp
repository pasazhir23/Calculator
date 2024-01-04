#include <iostream>

void checkCin(){
    if (std::cin.fail()){
        std::cout << "\nerror\n";
        exit(1);
    }
}

double getNumber(std::string name){
    std::cout << "vvedit chislo " << name << ": ";
    double a = 0;
    std::cin >> a;
    checkCin();
    return a;
}

int main()
{
    int op = 0;

    std::cout << "viberit operaciu(1 - plus; 2 - minus): ";
    std::cin >> op;

    checkCin();
    if((op!=1 && op!=2)){
        std::cout << "\nerror\n";
        return 1;
    }

    double a = getNumber("a");
    double b = getNumber("b");

    switch (op) {
    case 1:
        std::cout << a+b;
        break;

    case 2:
        std::cout << a-b;
        break;

    default:
        std::cout << "\nerror\n";
        break;
    }
    std::cout << '\n';

    return 0;
}
