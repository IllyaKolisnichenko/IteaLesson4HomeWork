#include <iostream>

long double factorial(int f)
{
    if (f < 0)
        return 0;
    if (f == 0)
        return 1;
    else
        return f * factorial(f - 1);
}

int main()
{
    int f;
    std::cout << "Enter a number to calculate factorial: ";
    std::cin >> f;
    std::cout << "Factorial of " << f << " = " << factorial(f) << std::endl;
    return 0;
}
