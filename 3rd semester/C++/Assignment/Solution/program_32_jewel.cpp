//Write a program to demonstrate a global friend.
#include<iostream>
#include<iomanip>
using namespace std;

void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 32" <<endl<<endl;
}
class A
{

    private:
        string name = "Jewel Nath";
        int ID = 11909037;
    public:
        friend  void display(A object);
};
void display(A object)
{
    cout<<object.name<<endl;
    cout<<object.ID<<endl;
}
int main()
{
    ID();
    A object;
    display(object);

    return 0;
}
/*
Sample Input :

Sample Output :

*/

