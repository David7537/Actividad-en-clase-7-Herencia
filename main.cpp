#include <iostream>
#include "Calculadora.h"

int main() {
    Calculadora calc;

    std::cout << "sum(1, 5) = " << calc.sumar(1, 5) << '\n';
    std::cout << "sub(5, 1) = " << calc.restar(5, 1) << '\n';
    std::cout << "mul(3, 4) = " << calc.multiplicar(3, 4) << '\n';
    std::cout << "div(9, 3) = " << calc.dividir(9, 3) << '\n';

    return 0;
}
