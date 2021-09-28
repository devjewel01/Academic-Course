//Create a program that opens a file and counts the white space separated words in that file.
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
    cout<< "Program - 16" <<endl<<endl;
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
        int Count = 0;
        while(getline(infile, s))
        {
            stringstream ss;
            ss << s;
            string t;
            while(ss >> t)
            {
                //cout<<t<<endl;
                Count++;
            }
        }
        cout<<"Total Number of Words = "<< Count <<endl;
    }
    infile.close();
    return 0;
}
/*
Sample Input :
file.txt

Sample Output :

*/






