#include <iostream>

// might aswell be realized w/ macros
// #define CALC_ADD(num1, num2) (num1 + num2)
// #define CALC_SUBTR(num1, num2) (num1 - num2)
// #define CALC_MULT(num1, num2) ((num1) * (num2))
// #define CALC_DIV(num1, num2) ((num1) / (num2))

// + 43
// - 45
// * 42
// / 47
// ^ 94

int multiply(int num1, int num2) {
    return num1 * num2;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

int power(int num, unsigned int pow) {
    int b = 1;
    int i = 0;
    while(i != pow) {
        b *= num;
        i++;
    }
    return b;
}

int main() {

    int firstNumber, secondNumber;
    char mathOperator;

    std::cout << "Enter first number:";
    std::cin >> firstNumber;
    std::cout << "Enter math operator(+ - * / ^):";
    std::cin >> mathOperator;
    std::cout << "Enter second number:";
    std::cin >> secondNumber;

    // if(mathOperator == 43) {
    //     std::cout << "+";
    //     return 0;
    // }
    switch (mathOperator) {
    case 43:
        std::cout << "Result: " << firstNumber << mathOperator << secondNumber << "=" << add(firstNumber, secondNumber);
        break;
    case 45:
        std::cout << "Result: " << firstNumber << mathOperator << secondNumber << "=" << subtract(firstNumber, secondNumber);
        break;
    case 42:
        std::cout << "Result: " << firstNumber << mathOperator << secondNumber << "=" << multiply(firstNumber, secondNumber);
        break;
    case 47:
        std::cout << "Result: " << firstNumber << mathOperator << secondNumber << "=" << divide(firstNumber, secondNumber);
        break;
    case 94:
        std::cout << "Result of powering " << firstNumber << " to exponent " << secondNumber << " = " << power(firstNumber, secondNumber);
        break;
    default:
        std::cout << "not funny\n" << "enter correct operator";
        break;
    }
    
    return 0;
}
