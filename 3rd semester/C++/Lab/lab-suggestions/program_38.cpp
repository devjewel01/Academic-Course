//Write a program to demonstrate operator overloading.
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include <exception>
using namespace std;



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
