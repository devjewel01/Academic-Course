//Write a program to pass objects to functions.
#include<iostream>
#include<iomanip>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 23" <<endl<<endl;
}
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
    ID();
    A object;
    Function(object);

    return 0;
}
/*
Sample Input :

Sample Output :

*/

