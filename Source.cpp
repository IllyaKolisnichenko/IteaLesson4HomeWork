#include<iostream>
#include<math.h>
#include<Windows.h>
using namespace std;
int like(int b);
using namespace std;
int main()
{
	int  b1;
	int n = 0;

	cout << "enter a multiplier, a number from 1 to 10:" << endl;
	cin >> n;


	like(n);

}


int like(int b)
{

	cout << "enter the calculation symbol - " << "1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exponentiation\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		for (int i = 1;i <= 10;i++)
			cout << i << " + " << b << " = " << (i + b) << endl;
		break;
	}

	case 2:
	{
		for (int i{ 1 };i <= 10;i++)
			cout << i << " - " << b << " = " << std::abs(i - b) << '\n';
		break;
	}
	case 3:
	{
		for (int i = 1;i <= 10;i++)
			cout << i << " * " << b << " = " << i * b << endl;

		break;
	}
	case 4:
	{
		float i;
		for (int i = 1;i <= 10;i++)
			cout << i << " / " << b << " = " << std::abs(i / b) << '\n';

		break;
	}
	case 5:
	{

		for (int i = 1; i <= 10;i++)

			std::cout << i << "^" << b << "=" << pow(i, b) << "\n";
		break;
	}

	}
	return b;
}