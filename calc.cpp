#include<iostream>
#include<cmath>


void addit(double a, double b)
{
    std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void subtract(double a, double b)
{
    std::cout << a << " - " << b << " = " << a - b << std::endl;
}

void multipl(double a, double b)
{
    std::cout << a << " * " << b << " = " << a * b << std::endl;
}

void givision(double a, double b)
{
    if (a == 0 && b == 0)
        std::cout << "Result is undefined\a" << std::endl; 
    else if (b == 0)
        std::cout << "Error. Cannot divide by zero!\a" << std::endl;
    else 
    {
        std::cout << a << " / " << b << " = " << a / b << std::endl;
    }
}

void square(double a, double b)
{
    std::cout << a << " √ " << b << " = " << pow(a, 1 / b) << std::endl;
}

double data()
{
    while (true)
    {
        double a;
        std::cout << "Enter firs data: ";
        std::cin >> a;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Input is invalid. Please try again!\n";
        }
        else return a;
    }
}

char sign()
{
    while (true)
    {
        char sg;
        std::cout << "Enter the sign of the required operation: +, -, *, / , ^: ";
        std::cin >> sg;
        std::cin.ignore(32767, '\n');
        if (sg == '+' || sg == '-' || sg == '*' || sg == '/' || sg == '^')
            return sg;
        else std::cout << "Input is invalid.  Please try again.\n";
    }
}

int main()
{
    std::cout << "Welcome to calculator!\n\n";
    double a = data();
    char sg = sign();
    double b = data();
    if (sg == '+') addit(a, b);
    else if (sg == '-') subtract(a, b);
    else if (sg == '*') multipl(a, b);
    else if (sg == '/') givision(a, b);
    else if (sg == '^') square(a, b);
    else std::cout << "Something is wrong. Try again.";
    return 0;
}
