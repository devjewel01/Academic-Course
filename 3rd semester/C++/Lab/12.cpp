//write a program to demonstrate a global friend.

#include<iostream>
#include<iomanip>
using namespace std;


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
    A object;
    display(object);

    return 0;
}


