#include<iostream>
using namespace std;

int main(){
    
    int rem,n,x;
    int rev=0;

    cout<<"Entre The number"<<endl;
    cin>>n;

    x=n;

    while (n)
    {
        /* code */
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(rev==x){
        cout<<"Number is Palindrome"<<endl;
    }
    else
    {
        cout<<"Number is not Palindrome";
    }
    
    

    return 0;
}