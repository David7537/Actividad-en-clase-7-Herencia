#include <gtest/gtest.h>
#include "Calculadora.h"

TEST(HerenciaTest, Suma) {
    CalculadoraAvanzada calc;
    EXPECT_EQ(calc.sumar(4, 6), 10);
}

TEST(HerenciaTest, Resta) {
    CalculadoraAvanzada calc;
    EXPECT_EQ(calc.restar(9, 3), 6);
}

TEST(HerenciaTest, Multiplicacion) {
    CalculadoraAvanzada calc;
    EXPECT_EQ(calc.multiplicar(3, 7), 21);
}

TEST(HerenciaTest, Division) {
    CalculadoraAvanzada calc;
    EXPECT_EQ(calc.dividir(12, 4), 3);
}
