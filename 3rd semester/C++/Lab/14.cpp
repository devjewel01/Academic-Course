//write a program to demonstrate constructor overloading and overloading.

#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include <exception>
using namespace std;


class my_class
{
    int a=0;
    int b=0;
    int c=0;
public:
    my_class(int x)
    {
        x = a;
    }
    my_class(int x, int y)
    {
        a = x;
        b = y;
    }
    my_class(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout<<a<<"  "<<b<<"  "<<c<<endl;
    }
};
int main()
{
    my_class object1(5);
    my_class object2(3, 8);
    my_class object3(4, 7, 14);

    object1.display();
    object2.display();
    object3.display();

    return 0;
}
