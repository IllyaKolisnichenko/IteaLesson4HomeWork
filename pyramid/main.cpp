#include <iostream>

void pyramid(unsigned int lenght, char c) {
    int k = 0;
    for(int i = 0; i < lenght; i++) {
        for(int j = lenght; j > i; --j) {
            printf("%c", ' ');
        }
        for(int j = lenght; j <= lenght + i; ++j) {
            printf("%c", c);
        }
        for(int j = lenght + i; j <= lenght + i + k; ++j) {
            printf("%c", c);
        }
        k++;
        std::cout << "\n";
    }
}
int main() {
    unsigned int height;
    char symbol;
    std::cout << "Enter height and symbol of pyramid: ";
    std::cin >> height;
    std::cin >> symbol;
    std::cout << "Here's your pyramid\n";
    pyramid(height, symbol);
    return 0;
}
