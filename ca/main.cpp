#include <iostream>
#include <sstream>
#include "calculator.h"

int main()
{
    Calculator calculator;

    std::cout << "Введіть математичний вираз (наприклад, 2 + 3 або 2 ^ 3): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream expressionStream(input);

    double operand1, operand2;
    char operation;

    if (expressionStream >> operand1 >> operation >> operand2)
    {
        double result;

        switch (operation)
        {
        case '+':
            result = calculator.Add(operand1, operand2);
            break;
        case '-':
            result = calculator.Sub(operand1, operand2);
            break;
        case '*':
            result = calculator.Mul(operand1, operand2);
            break;
        case '/':
            if (operand2 != 0)
                result = calculator.Div(operand1, operand2);
            else
            {
                std::cout << "Помилка: Ділення на нуль!" << std::endl;
                return 1; // Вихід з помилкою
            }
            break;
        case '^':
            result = calculator.Power(operand1, operand2);
            break;
        default:
            std::cout << "Помилка: Невідома операція!" << std::endl;
            return 1; // Вихід з помилкою
        }

        std::cout << "Результат: " << result << std::endl;
    }
    else
    {
        std::cout << "Помилка: Неправильний формат виразу!" << std::endl;
        return 1; // Вихід з помилкою
    }

    return 0;
}