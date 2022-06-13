#include <iostream>

int fact(int num) {
    int res = 1;
    for(int i = 1; i <= num; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n{};
    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout << "Factorial of it is " << fact(n);
    return 0;
}
