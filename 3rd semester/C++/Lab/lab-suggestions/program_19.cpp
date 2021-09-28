//Write a program to implement the set and get methods using days, months, and years.
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;

class Date
{
    int day, year;
    string month;

public:
    void set(int d, string m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void get()
    {
        cout<<"My birthday is : "<<day<<' '<<month<<", "<<year<<endl;
    }
};
int main()
{
    Date myBirthday;
    myBirthday.set(3, "January", 2001);
    myBirthday.get();
    return 0;
}
/*
Sample Input :

Sample Output :
3 January, 2001

*/








