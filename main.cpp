#include <iostream>


int main()
{
    int op = 0;

    std::cout << "viberit operaciu(1 - plus; 2 - minus): ";
    std::cin >> op;

    double a = 0;
    double b = 0;

    std::cout << "vvedit chislo a: ";
    std::cin >> a;

    std::cout << "vvedit chislo b: ";
    std::cin >> b;

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
