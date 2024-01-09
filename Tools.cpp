#include "Tools.h"
#include <iostream>

void tools::checkCin(){
    if (std::cin.fail()){
        std::cout << "\nerror\n";
        exit(1);
    }
}

double tools::getNumber(std::string name){
    std::cout << "input number " << name << ": ";
    double a = 0;
    std::cin >> a;
    checkCin();
    return a;
}
