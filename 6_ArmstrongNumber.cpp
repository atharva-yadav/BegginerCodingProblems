// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     int arm = 0, rem;
//     cout << "Enter a number: " << endl;
//     cin >> n;

//     int a = n;
//     while (n)
//     {

//         rem = n % 10;
//         arm = arm + (rem * rem * rem);
//         n = n / 10;
//        // cout<<arm<<endl;
//     }
//     if (arm == a)
//     {
//         cout << "Number is Armstrong" << endl;
//     }
//     else
//     {
//         cout << "Number is not Armstrong";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int order(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n = n / 10;
    }
    return cnt;
}

bool armstrong(int n)
{
    int tmp = n;
    int sum = 0;
    int ord = order(n);
    cout<<ord<<"-";
    while (n)
    {
        int rem = n % 10;
        sum = sum + pow(rem, ord);

        n /= 10;
    }

    if (sum == tmp)
        return true;
    return false;
}
int main()
{
    int x = 153;
    cout << boolalpha << armstrong(x) << endl;
    x = 1253;
    cout << boolalpha << armstrong(x) << endl;
    return 0;
}