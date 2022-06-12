// pyramida.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main() {
    std::string s;
    char symbol;
    std::cout << "Vvedite simvol -";
    std::cin >> symbol;
    std::cout << std::endl;
    std::cout << "Vvedite visotu pyramydi(max 50) -";
    int high;
    s = symbol;
    s = symbol+s;
    std::cin >> high;
    
    for (int i{}; i < high; i++)
    {
        for (int j = 1; j < high - i; j++)
           std:: cout << " ";
       
        std::cout << s;
        s = symbol + s + symbol;
        std::cout << std::endl;
    }
    return 0;
}

