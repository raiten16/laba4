#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
    int Add(double a, double b);
    int Sub(double a, double b);
    int Mul(double a, double b);
    int Div(double a, double b);
    double Power(double base, double exponent);
};

#endif // CALCULATOR_H