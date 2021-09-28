//Write a program to round a number with specific places. For example, 5.78 would be 5.8.
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<math.h>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 08" <<endl<<endl;
}


int main()
{
    ID();
    string fileName;
    cout<< "Enter your File Name" <<endl;
    cout<< "Example : myfile.txt" <<endl;
    getline(cin, fileName);
    ifstream infile;
    infile.open(fileName);
    if(infile.fail())
    {
        cout<< "Your file didn't work" <<endl;
        cout<< "Enter a valid file" <<endl;
    }
    else
    {
        double num;
        while(infile>>num)
        {
            cout<<fixed<<setprecision(1)<<num<<endl;
        }
    }
    infile.close();
    return 0;
}
/*
Sample Input :
file.txt

Sample Output :
66464.3
64.7
35.8
*/


