#include <iostream>



int main()
{
    int op = 0;

    std::cout << "viberit operaciu(1 - plus; 2 - minus): ";
    std::cin >> op;

    if((op!=1 && op!=2) || std::cin.fail()){
        std::cout << "\nerror\n";
        return 1;
    }

    double a = 0;
    double b = 0;

    std::cout << "vvedit chislo a: ";
    std::cin >> a;

    if (std::cin.fail()){
        std::cout << "\nerror\n";
        return 1;
    }

    std::cout << "vvedit chislo b: ";
    std::cin >> b;

    if (std::cin.fail()){
        std::cout << "\nerror\n";
        return 1;
    }
    switch (op) {

    case 1:
        std::cout << a+b;
        break;

    case 2:
        std::cout << a-b;
        break;

    default:
        std::cout << "-";
        break;
    }
    std::cout << '\n';

    return 0;
}
