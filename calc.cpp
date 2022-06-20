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

void division(double a, double b)
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
    std::cout << a << " ^ " << b << " = " << pow(a, 1 / b) << std::endl;
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

char signature()
{
    while (true)
    {
        char sign;
        std::cout << "Enter the sign of the required operation: +, -, *, / , ^: ";
        std::cin >> sign;
        std::cin.ignore(32767, '\n');
        if (sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '^')
            return sign;
        else std::cout << "Input is invalid.  Please try again.\n";
    }
}

int main()
{
    std::cout << "Welcome to calculator!\n\n";
    double a = data();
    char sign = signature();
    double b = data();
    switch (sign)
    {
    case '+': addit(a, b);
        break;
    case '-': subtract(a, b);
        break;
    case '*': multipl(a, b);
        break;
    case '/': division(a, b);
        break;
    case '^': square(a, b);
        break;
    default: std::cout << "Something is wrong. Try again.";
        break;
    }

    return 0;
}

