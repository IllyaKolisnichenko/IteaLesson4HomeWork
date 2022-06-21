#include <iostream>

int loopFact(int num) {
    int res = 1;
    for(int i = 1; i <= num; i++) {
        res *= i;
    }
    return res;
}

int recFact(int num) {
    if(num == 0) {
        return 1;
    }
    return num * recFact(num - 1);
}

int main() {
    int n{};
    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout << "Factorial of it is " << loopFact(n);
    return 0;
}
