#include <iostream>
using namespace std;

int main()
{
    cout << "GANPATI BAPPA MORYA" << endl;
    char a;
    cout << "Enter a character" << endl;
    cin >> a;

    if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U')
    {
        cout << "It is vowel" << endl;
    }
    else
    {
        cout << "It is consonant";
    }
    return 0;
}