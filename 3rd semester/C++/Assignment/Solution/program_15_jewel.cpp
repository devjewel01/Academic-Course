//Write a program to read a text file using eof() function.
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 15" <<endl<<endl;
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
        string s;
        while(!infile.eof())
        {
            getline(infile, s);
            cout<<s<<endl;
        }
    }
    infile.close();
    return 0;
}
/*
Sample Input :
file.txt

Sample Output :

*/





