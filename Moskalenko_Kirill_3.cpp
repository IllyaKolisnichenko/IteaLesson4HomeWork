#include <iostream>
//==== task_1 ================================
void calculator() 
{
    float num1, num2, res;
    char operat;
    std::cout << "number 1: ";
    std::cin >> num1;
    std::cout << "operator(+,-,*,/,^): ";
    std::cin >> operat;
    std::cout << "number 2: ";
    std::cin >> num2;
    switch (operat)
    {
        case '+':
            res = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << res;
            break;
        case '-':
            res = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << res;;
            break;
        case '*':
            res = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << res;;
            break;
        case '/':
            res = num1 / num2;
            std::cout << num1 << " / " << num2 << " = " << res;;
            break;
        case '^':
            res = std::pow(num1,num2);
            std::cout << num1 << " ^ " << num2 << " = " << res;;
            break;
        default:
            std::cout << "ERROR";
            break;
    }
    std::cout << std::endl;
}
//===== task_2 ============================================
void print()
{
    int rows, k = 0;
    std::cout << "lenth: ";
    std::cin >> rows;
    for (int i = 1; i <= rows; i++, k = 0)
    {
        for (int space = 1; space <= rows-i; space++)
        {
            std::cout << " ";
        }
        while (k != 2 * i - 1)
        {
            std::cout << "*";
            k++;
        }
        std::cout << std::endl;
    }
}
//====== task_3 ===============================================
void factorial_1()
{
    int num;
    long long factorial = 1;
    std::cout << "number: ";
    std::cin >> num;
    if (num > 0)
    {
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
        }
    }
    else if (num == 0)
    {
        factorial = 1;
    }
    else
    {
        std::cout << "error: number < 0";
    }
    std::cout << "factorial = " << factorial << std::endl;
}
long double factorial_2(int num)
{
    long long res;
    if (num < 0)
    {
        std::cout << "error: number < 0";
    }
    else if (num == 0)
    {
        res = 1;
    }
    else 
    {
        res = num * factorial_2(num - 1);
    }
    return res;
}
//====== task_4 ==============================================

//empty 

//====== main ===================================
int main()
{
    calculator();
    print();
    factorial_1();
    int num;
    std::cout << "number: ";
    std::cin >> num;
    std::cout << "factorial = " << factorial_2(num);
    return 0;
}
