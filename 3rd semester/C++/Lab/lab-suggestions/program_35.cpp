//Write a program to demonstrate different types of inheritance.
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include <exception>
using namespace std;



class Grand_Parent
{
    public:
        void grand_parent_Show()
        {
            cout << "this is call from Grand parent" << endl;
        }
};

class Parent
{
    public:
        void parent_Show()
        {
            cout << "This is call  parent" << endl;
        }
};

class Child : public Grand_Parent {
    public:
        void child_Show()
        {
            cout << "this is call from child" << endl;
        }
};


class Grandchild : public Child, public Parent {
    public:
        void grand_child_Show() {
            cout << "this is call from grand child" << endl;
        }
};


int main()
{
    Grand_Parent   grand_parent_object;
    Parent         parent_object;
    Child          child_object;
    Grandchild     grand_child_object;

    grand_child_object.grand_parent_Show();
    grand_child_object.parent_Show();
    grand_child_object.child_Show();
    grand_child_object.grand_child_Show();
}
