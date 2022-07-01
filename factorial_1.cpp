#include <iostream>

unsigned long long int factorialCalculate(unsigned short *number)
{
    unsigned long long int factorial{1};

    for (int i{1}; i <= *number; ++i)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    unsigned short numberCalc;
    std::cout << "Please enter number for calculate factorial: ";
    std::cin >> numberCalc;
    std::cout << factorialCalculate(&numberCalc);

    return 0;
}
