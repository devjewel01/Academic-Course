// Write a program that prompts the user to enter a
// person’s date of birth in numeric form such as 8-27-
// 1980. The program then outputs the date of birth in
// the form: August 27, 1980. Your program must
// contain at least two exception classes: invalidDay
// and invalidMonth. If the user enters an invalid value
// for day, then the program should throw and catch an
// invalidDay object. Similar conventions for the invalid
// values of month and year. (Note that your program
// must handle a leap year.)
#include<bits/stdc++.h>
using namespace std;
string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
bool isLeapYear(int year)
{
    return (year%4 == 0 && year%400 != 0);
}
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 30" <<endl<<endl;
}

int main()
{
    ID();
    int day, month, year;
    char c;
    cout << "Enter the date of month by following format(m-d-y) : ";
    cin>>month>>c>>day>>c>>year;

    try
    {
        if(month > 12 || month < 1)
        {
            throw runtime_error("You entered invalid month!");
        }

        if((month==4||month==6||month==9||month==11) && day == 31)
        {
            throw runtime_error("The month "+months[month-1]+" should be at most 30!");
        }

        if(day > 31 || day < 1)
        {
            throw runtime_error("You have entered invalid day!");
        }

        if(!isLeapYear(year) && month == 2 && day == 29)
        {
            throw runtime_error("This is not leap year, so the month February should be at most 28!");
        }

        cout << months[month-1] << " " << day << ", " << year << endl;
    }

    catch(exception& e)
    {
        cout << e.what() << endl;
    }

    return 0;
}
/*
Sample Input :

Sample Output :

*/




