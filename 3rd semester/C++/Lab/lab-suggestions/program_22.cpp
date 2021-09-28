//Write a program to implement friend function.
#include<iostream>
#include<iomanip>
using namespace std;

class Class1;
class Class2;

class Class1
{
public:
    void show_class2(Class2 &);
};

class Class2
{
private:
    int a;
    int b;
public:
    Class2(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void Class1::show_class2(Class2 &object);
};
void Class1::show_class2(Class2 &object)
{
    cout<<object.a<<endl;
    cout<<object.b<<endl;
}
int main()
{
    Class1 object1;
    Class2 object2(5, 7);

    object1.show_class2(object2);

    return 0;
}


