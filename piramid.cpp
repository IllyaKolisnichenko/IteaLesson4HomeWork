#include <iostream>

void piramid(int size, char block)
{
for (int i = 0; i <= size; ++i)
    {
        for (int j = 0; j <= size - i; ++j)
        {
            std::cout << " ";
        }
        for (int j = (size - 2 * i)+1; j <= size; ++j)
        {
            std::cout << block;
        }
        std::cout << "\n";
    }
}

int main()
{
    int size;
    char block;
    std::cout << "Enter the size of the new pyramid: ";
    std::cin >> size;
    std::cout << "\nEnter the symbol to build the pyramid: ";
    std::cin >> block;
    piramid(size, block);    
    return 0;
}
