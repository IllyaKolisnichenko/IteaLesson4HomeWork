#include <iostream>

unsigned long long int factorialCalculate(unsigned short number)
{
    static unsigned long long int factorial{1};
    if (number < 1)
        return factorial;
    factorial = factorial * number;
    factorialCalculate(--number);
}

int main()
{
    unsigned short numberCalc;
    std::cout << "Please enter number for calculate factorial: ";
    std::cin >> numberCalc;
    std::cout << factorialCalculate(numberCalc);

    return 0;
}
