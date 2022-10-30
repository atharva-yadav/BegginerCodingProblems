#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Entre first numbers: " << endl;
    cin >> a;
    cout << "Entre second numbers: " << endl;
    cin >> b;

    cout << "What do you want to perform? " << endl;

    cout << "Entre 1 for addition" << endl;
    cout << "Entre 2 for subtraction" << endl;
    cout << "Entre 3 for multiplication" << endl;
    cout << "Entre 4 for division" << endl;
    cout << "Entre 5 for all operations" << endl;

    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Addition is: " << a + b << endl;
        break;

    case 2:
        cout << "Subtraction is: " << a - b << endl;
        break;

    case 3:
        cout << "Multiplication is: " << a * b << endl;
        break;

    case 4:
        cout << "Division is: " << a / b << endl;
        break;

    case 5:
        cout << "Addition is: " << a + b << endl;
        cout << "Subtraction is: " << a - b << endl;
        cout << "Multiplication is: " << a * b << endl;
        cout << "Division is: " << a / b << endl;

    default:
        cout << "Invalid input :(" << endl;
        break;
    }
    return 0;
}