#include <iostream>
int main()
{
	int a, b;
	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;
	for (int i=a; i<=b; i++)
	{
		switch ((i > 1) && (i % 2 || i == 2) && (i % 3 || i == 3) && (i % 4 || i == 4) && (i % 5 || i == 5) && (i % 6 || i == 6) && (i % 7 || i == 7) && (i % 8 || i == 8) && (i % 9 || i == 9))
		{
		case false: continue;
		case true: std::cout << i << " ";
		}
	}
	return 0;
}
