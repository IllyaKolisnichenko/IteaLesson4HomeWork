#include <iostream>

void printPyramid(int height, char symbol)
{
    int p{height};
    int symbolInRow{1};

    for (int i{1}; i <= height; ++i)
    {
        for (int j{1}; j <= p - 1; ++j)
        {
            std::cout << " ";
        }
        for (int k{1}; k <= symbolInRow; ++k)
        {
            std::cout << symbol;
        }
        --p;
        symbolInRow = symbolInRow + 2;
        std::cout << "\n";
    }
}

int main()
{
    int heightPyramid;
    char symbolPyramid;

    std::cout << "Please enter the height of the pyramid: ";
    std::cin >> heightPyramid;

    std::cout << "Please enter symbol of the pyramid: ";
    std::cin >> symbolPyramid;

    printPyramid(heightPyramid, symbolPyramid);

    return 0;
}
