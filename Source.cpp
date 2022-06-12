#include<iostream>
using namespace std;
void blas(int a);
int main()
{
 
    int v;
    cout << "Enter an interesting size:";
    cin >> v;
     blas(v);
}
void blas( int a)
{
    char s;
    cout << "input simbol";
    cin >> s;
    for (int i = 1; i < a; i++)
    {
        for (int j = 1; j < a; j++)
        {
            if (j <= i && i + j >= a)
                cout << s;
            else cout << "  ";
            
        }cout << endl;
    }
}

