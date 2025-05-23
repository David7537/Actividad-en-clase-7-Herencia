#include <iostream>
using namespace std;

class CalculadoraBase {
public:
    double sumar(double a, double b) {
        return a + b;
    }

    double restar(double a, double b) {
        return a - b;
    }
};

class CalculadoraAvanzada : public CalculadoraBase {
public:
    double multiplicar(double a, double b) {
        return a * b;
    }

    double dividir(double a, double b) {
        if (b == 0) throw invalid_argument("División por cero");
        return a / b;
    }
};
