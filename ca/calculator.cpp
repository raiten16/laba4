#include "calculator.h"
#include <cmath>

int Calculator::Add(double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}

int Calculator::Mul(double a, double b)
{
    return a * b;
}

int Calculator::Div(double a, double b)
{
    if (b != 0)
        return a / b;
    else
        return 0;
}

double Calculator::Power(double base, double exponent)
{
    return std::pow(base, exponent);
}
