//Write a program to print the current date and time in different formats.
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    time_t Current_Time = time(0);
    tm* get_time = localtime(&Current_Time);

    int year    = 1900 + get_time->tm_year;
    int month   = 1 +    get_time->tm_mon;
    int date    =        get_time->tm_mday;
    int hour    =        get_time->tm_hour;
    int miniute =        get_time->tm_min;
    int second  =        get_time->tm_sec;
    string am = "AM", pm = "PM";

    cout<< "Todays  date is : "<<date<<'/'<<month<<'/'<<year<<endl;
    cout<< "Current time is : ";
    if(hour < 12)
        cout<<hour<<':'<<miniute<<':'<<second<<' '<<((hour<12)?am:pm)<<endl;
    else
    {
        cout<<hour-12<<':'<<miniute<<':'<<second<<' '<<pm<<endl;
    }
}
