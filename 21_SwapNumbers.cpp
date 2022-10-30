#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter values of a,b respectively" << endl;
    cin >> a >> b;
    // a=10;
    // b=20;
     cout << "Before Swapping a = " << a << " and b = " << b << endl;
    a = a + b; //a--->30
    b = a - b; //b--->30-20=10
    a = a - b; //a--->30-10=20

   
    cout << "After Swapping a = " << a << " and b = " << b;

    return 0;
}