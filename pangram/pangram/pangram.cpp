// pangram.cpp : eta programa pokazivaet ispolyzuet li virazhenie vse bukvi alphavita (pangram).
// 

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
std::string text;
int sum{0};

namespace myPangram 
{
	int pangram(std::string &text) // determine if all letters of the alphabet are used in text
	{
		std::array <int, 30> charct{};

		for (char let : text)
		{
			if (isalpha(let))
			{
				if (charct[let - 'a'] == 0) charct[let - 'a'] = 1;

			}
		}
		for (auto i : charct) { sum += i; }
		return sum;
	}

	void countChar(std::string &text) //Count repetition of letters in a string
	{
		for (int i = 0; i < text.length(); i++) {
			int numbertsA = std::count(text.cbegin(), text.cend(), ('a' + i));
			if (numbertsA>0)
			std::cout << numbertsA << "-" << (char)('a' + i )<< "\n";
			numbertsA = 0;
		}
		
			
	}
}

int main()
{
	
	std::cout << "Enter your text\n";
	std::getline( std::cin, text);
	//text = "the quick brown fox jumps over the lazy dog"; //this text use all letters of alphabet
	
	if (myPangram::pangram(text) == 26) std::cout << "True! your sentence use all alphabet\n";
	if (myPangram::pangram(text)!=26) std::cout << "False! your sentence do not use all alphabet\n";
	myPangram::countChar(text);

	return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
