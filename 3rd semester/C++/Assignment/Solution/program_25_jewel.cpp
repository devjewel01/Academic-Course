//Write a program to pass reference to functions.
#include<iostream>
#include<iomanip>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 25" <<endl<<endl;
}
void Swap(int &a, int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}
int main()
{
    ID();
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


