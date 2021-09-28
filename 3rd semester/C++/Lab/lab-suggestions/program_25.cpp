//Write a program to pass reference to functions.
#include<iostream>
#include<iomanip>
using namespace std;

void Swap(int &a, int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}
int main()
{
    
    cout<<"Enter a & b - ";
    int a, b;
    cin>>a>>b;
    cout<<"After swap,  a = "<<a<<", b = "<<b<<endl;
    Swap(a,b);
    cout<<"Before swap, a = "<<a<<", b = "<<b<<endl;

    return 0;
}
/*
Sample Input :

Sample Output :

*/


