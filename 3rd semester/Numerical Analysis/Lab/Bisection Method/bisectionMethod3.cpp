#include<iostream>
 
using namespace std;
 
//function used is x^3-2x^2+3
double Function(double x)
{
    return x*x*x - 2*x*x + 3;
}
 
double e=0.001;
double c;
 
void bisection(double a,double b)
{
    if(Function(a) * Function(b) >= 0)
    {
        cout<<"Incorrect a and b";
        return;
    }
 
    c = a;
 
    while ((b-a) >= e)
    {
        c = (a+b)/2;
        if (Function(c) == 0.0)
        {
            cout << "Root = " << c<<endl;
            break;
        }
        
        if(Function(c)*Function(a) < 0)
        {
            cout << "Root = " << c<<endl;
            b = c;
        }
        else
        {
            cout << "Root = " << c<<endl;
            a = c;
        }
    }
}
 
int main()
{
    double a,b;
    a=-10;
    b=20;
 
    cout<<"The function used is x^3-2x^2+3\n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    bisection(a,b);
    cout<<"\n";
    cout<<"Accurate Root calculated is = "<<c<<endl;
 
    return 0;
}