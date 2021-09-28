//Write a program to read only the numbers greater than 100 from a text file.
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
using namespace std;


int main()
{
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
            if(num > 100)
                cout<<num<<endl;
        }
    }
    infile.close();
    return 0;
}


