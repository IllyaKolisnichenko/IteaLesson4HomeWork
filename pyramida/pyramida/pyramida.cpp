// pyramida.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main() {
    std::string s;
    char symbol;
    std::cout << "Vvedite simvol -";
    std::cin >> symbol;
    s = symbol;
    s = symbol + s;
    std::cout << "Vvedite visotu pyramydi(max 50) -";
    int high;
    std::cin >> high;
    std::cout << std::endl;
    
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

