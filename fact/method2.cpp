#include <iostream>

int fact(int num) {
    if(num == 0) {
        return 1;
    }
    return num * fact(num - 1);
}

int main() {
    int n{};
    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout << "Factorial of it is " << fact(n);
    return 0;
}
