#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter two numbers for range" << endl;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j <i; j++)
        {
            if (j % 2 == 0)
            {
                cout << j << " is non Prime" << endl;
            }
            else
            {
                cout << j << " is Prime" << endl;
            }
        }
    }
    return 0;
}