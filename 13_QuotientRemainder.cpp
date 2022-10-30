#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter 1st number for operations" << endl;
    cin >> a;
    cout << "Enter 2nd numbers for operations" << endl;
    cin >> b;

    int quo;
    float rem;

    quo = a / b;
    rem = a % b;
    cout << "Quotient is " << quo << " and Remainder is " << rem << endl;

    return 0;
}