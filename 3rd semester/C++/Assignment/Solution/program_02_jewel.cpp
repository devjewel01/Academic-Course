//Write a program to implement your own namespace
#include<iostream>
#include<string>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 02" <<endl<<endl;
}

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
    ID();
    cout<< number1::num <<endl;
    cout<< number2::num <<endl;
    cout<< number2::Function() <<endl;
    return 0;
}
/*
Sample Input :

Sample Output :

10
20
100
*/

