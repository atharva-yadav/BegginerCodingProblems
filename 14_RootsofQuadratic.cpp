#include<iostream>
#include<cmath>
using namespace std;

int main(){
    

    int a,b,c;
    float x1,x2;
    cout<<"Enter values of a,b and c of quadratic equation"<<endl;
    cin>>a>>b>>c;

    float descriminant=((b*b)-(4*a*c));

    if (descriminant>0)
    {
        cout<<"Roots are real and unequal"<<endl;
        x1= ((-b+sqrt(descriminant))/(2*a));
        x2= ((-b-sqrt(descriminant))/(2*a));
    }

    else if (descriminant<0)
    {
        cout<<"Roots are unequa and Imaginary"<<endl;
        //x1=((-b)/2*a)
    }

    else
    {
        cout<<"Roots are Equal"<<endl;
        x1=x2=((-b)/(2*a));
    }
    
    cout<<"Roots of given quadratic equation is "<<x1<<" "<<x2<<endl;
    

    return 0;
}



/* 

b2 – 4ac > 0	 Real and unequal
b2 – 4ac = 0	 Real and equal
b2 – 4ac < 0	 Unequal and Imaginary
b2 – 4ac > 0     (is a perfect square)	 Real, rational and unequal
b2 – 4ac > 0     (is not a perfect square)	 Real, irrational and unequal
b2 – 4ac > 0     (is aperfect square and a or b is irrational)	 Irrational

*/