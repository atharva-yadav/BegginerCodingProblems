#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    float avg;
    cout << "Enter length of array" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th"
             << " element" << endl;
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }
    avg = sum / n;

    cout << "Average is " << avg << endl;

    return 0;
}