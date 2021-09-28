//Write a program to demonstrate operator overloading.
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
    cout<< "Program - 38" <<endl<<endl;
}

class my_class
{
    private:
        int value;
    public:
        my_class(int num)
        {
            value = num;
        }
        void operator ++()
        {
            value += 50;
        }
        void display()
        {
            cout<<"Value = "<<value<<endl;
        }
};
int main()
{
    my_class object(10);
    object.display();
    ++object;
    object.display();
    ++object;
    object.display();
}
