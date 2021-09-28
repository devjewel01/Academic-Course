//write a program to pass object to functions.


#include<iostream>
#include<iomanip>
using namespace std;

class A
{
    public:
        void display()
        {
            cout<<"This is a Object"<<endl;
            cout<<"It's pass to a function"<<endl;
        }
};
void Function(A object)
{
    object.display();
}
int main()
{
    A object;
    Function(object);

    return 0;
}


