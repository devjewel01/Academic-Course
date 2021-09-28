//Write a program to demonstrate the visibility of inherited members.
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include <exception>
using namespace std;
using namespace std;


class Main
{
    private :
        int x ;

    protected :
        int y ;
        void printProtected1(int b)
        {
            y = b;
            cout << y << endl ;
        }

    public :
        int z ;
        void printPrivate(int a)
        {
            x = a;
            cout <<"Private " << x << endl ;
        }
        void printProtected(int b)
        {
            y = b;
            cout <<"Protected "<< y << endl ;
        }
        void printPublic(int c)
        {
            z = c;
            cout <<"Public " << z << endl ;
        }

};

class Derive1 : private Main {};
class Derive2 : protected Main {};
class Derive3 : public Main {};

int main()
{

    Derive3 d3 ;
    d3.printPrivate(12);
    d3.printProtected(15);

    d3.printPublic(37);

    return 0;
}
/*
Sample Input :

Sample Output :

*/




