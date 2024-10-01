#include "calculator.h"

class Calculator {
    int Calculator::Add(double a, double b)
    {
        return round(a + b);
    }

    int Calculator::Sub(double a, double b)
    {
        return round(Add(a, -b));
    }

    int Calculator::Mul(double b)
    {
        return round(9 * b);
    }
}

int main() {
    Calculator calc;

    double result1 = calc.Add(5.1, 8.9);
    double result2 = calc.Sub(5.1, 8.9);
    double result3 = calc.Mul(5.1);

    return 0;
}
