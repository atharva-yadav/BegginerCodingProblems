// 1_Decimal to Binary

#include <iostream>
using namespace std;

int main()
{
    int rem, rev = 0, n;
    cout << "Entre a decimal number" << endl;
    cin >> n;

    while (n)
    {
        rem = n % 2;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << "The equivalent binary is " << rev;

    return 0;
}
