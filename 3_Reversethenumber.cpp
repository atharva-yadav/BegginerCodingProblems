#include <iostream>
using namespace std;

int main()
{
    int rev=0,rem;
    int a=0;
    cout<<"Entre the number to reverse: "<<endl;
    cin>>a;

    while (a!=0)
    {
        rem = a%10;
        rev = ((rev*10)+rem);
        a = a/10;

    }
    cout<<rev;
   
    return 0;
}
/*#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}*/