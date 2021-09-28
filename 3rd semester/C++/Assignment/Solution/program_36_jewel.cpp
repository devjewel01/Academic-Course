//Write a program to demonstrate function overloading and overriding.
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include <exception>
using namespace std;

void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 36" <<endl<<endl;
}

class data_Type
{
public:
    void print(int i)
    {
        cout << "Printing int: " << i << endl;
    }
    void print(double  f)
    {
        cout << "Printing float: " << f << endl;
    }
    void print(string str)
    {
        cout << "Printing character: " << str << endl;
    }
};

int main(void)
{
    data_Type object;
    object.print(37);
    object.print(1783931.1432);
    object.print("Welcome to object oriented programming with C++");

    return 0;
}
