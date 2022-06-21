#include <iostream>

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

    switch (mathOperator) {
    case '+':
        std::cout << "Result: " << firstNumber << mathOperator << secondNumber << "=" << add(firstNumber, secondNumber);
        break;
    case '-':
        std::cout << "Result: " << firstNumber << mathOperator << secondNumber << "=" << subtract(firstNumber, secondNumber);
        break;
    case '*':
        std::cout << "Result: " << firstNumber << mathOperator << secondNumber << "=" << multiply(firstNumber, secondNumber);
        break;
    case '/':
        std::cout << "Result: " << firstNumber << mathOperator << secondNumber << "=" << divide(firstNumber, secondNumber);
        break;
    case '^':
        std::cout << "Result of powering " << firstNumber << " to exponent " << secondNumber << " = " << power(firstNumber, secondNumber);
        break;
    default:
        std::cout << "not funny\n" << "enter correct operator";
        break;
    }
    
    return 0;
}
