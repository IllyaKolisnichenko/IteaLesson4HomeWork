

#include <iostream>

int number{};



void factorial(int Val)
{
    unsigned long long result{ 1 };

    for (int i = 1; i <= Val; i++)
    {
        result *= i;


    }

    std::cout << result;

}

long long factorial_recurs(int Val)
{
    if (Val <= 1)
        return 1;
    else

        return Val * factorial_recurs(Val - 1);

}


int main()
{
    std::cout << "Enter number to calculate  factorial  - ";
    std::cin >> number;
    std::cout << std::endl;
    std::cout.setf(std::ios::scientific);
    factorial(number); std::cout << std::endl;
    std::cout << factorial_recurs(number);  std::cout << std::endl;




    return 0;
}

