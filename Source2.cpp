#include<iostream>
#include<math.h>
#include<Windows.h>
using namespace std;
int like(int b );
using namespace std;
int main()
{
	int  b1;
	setlocale(LC_ALL, "");
	int n = 0;
	cout << "введите b:" << endl;
	cin >> n;
    like( n);
}
int like(int b)
 {
   cout << "введите символ вычесления-"<<"1.прибавление\n2.вычитание\n3.умножение\n4.деление\n5.возведение в степень\n";
	int choice;
	cin >> choice;
	switch (choice)
{
	case 1:
	{
		for (int i = 1;i <= 10;i++)
			cout << i << " + " << b << " = " <<(i + b) << endl;
		break;
	}
	
	case 2:
	{
		for (int i{ 1 };i <= 10;i++)
				cout << i << " - " << b << " = " << std::abs(i-b) << '\n';
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
		for (int i =1; i <=10 ;i++)
			
			std::cout << i << "^" << b<< "=" << pow(i,b) << "\n";
		break;
	}
	}
	return b ;
 }
