#include<iostream>
using namespace std;

int main(){
    int n,x=0;
    int y=1;
    int z=1;

    cout<<"Enter no. of terms: ";
    cin>>n;
    int i=0; 
    cout<<x<<" "<<y<<" ";

    while (i<n)
    {
       cout<<z<<" ";
       x=y;
       y=z;
       z=x+y;
       i++;
       
    }
    
    return 0;
}