#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Entre 3 nos. " << endl;
    cin >> a >> b >> c;

    if(a>b && a>c){
      cout<<"a is largest"<<endl;
    }
    else if (b>c && b>a){
      cout<<"b is largest"<<endl;
    }
    else {
      cout<<"c is largest"<<endl;
    }

    return 0;
}