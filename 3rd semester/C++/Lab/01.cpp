//Write a program to implement your own namespace.

#include<iostream>
#include<string>
using namespace std;

namespace number1
{
    int num = 10;
}
namespace number2
{
    int num = 20;
    int Function()
    {
        return 5*num;
    }
}
int main()
{
    cout<< number1::num <<endl;
    cout<< number2::num <<endl;
    cout<< number2::Function() <<endl;
    return 0;
}


