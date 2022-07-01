#include <iostream>
#include <iomanip>



using namespace std;

int main()
{
    long long height;
    cout << "Enter the height of the pyramid: " << endl;
    cin >> height;
    char symbol;
    cout << "\nEnter the symbol" << endl;
    cin >> symbol;
    cout << endl << endl;
    for (int i = 0; i < height; i++)
    {
        cout << setw(height - i);
        for (int j = 1; j <= i * 2; j++)
            cout << symbol;
            cout << endl;
    }
    return 0;
    
}
