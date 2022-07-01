#include <iostream>
#include <cstdlib>
#include <cmath>

double additionOperation(double a, double b);
double subtractionOperation(double a, double b);
double multiplicationOperation(double a, double b);
double divisionOperation(double a, double b);

int main()
{
    double firstNum, secondNum;
    char typeOfOper;
    
    while (true)
    {
        std::cout << "Please enter first number, type of arithmetic operation +, - , *, / ^, second number: \n";
        std::cin >> firstNum >> typeOfOper >> secondNum;

        switch (typeOfOper)
        {
        case '+':
            std::cout << "Result = " << additionOperation(firstNum, secondNum) << "\n";
            break;
        case '-':
            std::cout << "Result = " << subtractionOperation(firstNum, secondNum) << "\n";
            break;
        case '*':
            std::cout << "Result = " << multiplicationOperation(firstNum, secondNum) << "\n";
            break;
        case '/':
            std::cout << "Result = " << divisionOperation(firstNum, secondNum) << "\n";
            break;
        case '^':
            std::cout << "Result = " << pow(firstNum, secondNum) << "\n";
            break;
        default:
            std::cout << "Please enter correct data \n";
            break;
        }
    }
    return 0;
}

double additionOperation(double a, double b)
{
    return a + b;
}

double subtractionOperation(double a, double b)
{
    return a - b;
}

double multiplicationOperation(double a, double b)
{
    return a * b;
}

double divisionOperation(double a, double b)
{
    return a / b;
}
