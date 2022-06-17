#include <iostream>
#include <cmath>

void findPrimeNumbers(int n)
{
    bool primeNum[n + 1]{false};

    for (int p{2}; p * p <= n; p++)
    {
        if (primeNum[p] == false)
        {
            for (int i{p * p}; i <= n; i += p)
                primeNum[i] = true;
        }
    }
    for (int p = 2; p <= n; p++)
        if (primeNum[p] == false)
            std::cout << p << " ";
}

int main()
{
    int endNum;

    std::cout << "Please enter the end number of the range: ";
    std::cin >> endNum;

    findPrimeNumbers(endNum);

    return 0;
}
