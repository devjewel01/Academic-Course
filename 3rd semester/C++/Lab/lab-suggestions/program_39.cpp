//Write a program to demonstrate the virtual function.
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include <exception>
using namespace std;


class Base
{
    public:
    virtual void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
    public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived;

    Base* base = &derived;

    base->print();

    return 0;
}
