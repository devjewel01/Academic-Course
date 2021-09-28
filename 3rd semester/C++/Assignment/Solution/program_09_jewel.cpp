//Write a program to delete the character ‘S or s’ in a text file.
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 09" <<endl<<endl;
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
        while(getline(infile, s))
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='S' || s[i]=='s')
                    continue;
                cout<< s[i] ;
            }
            cout<<endl;
        }
    }
    infile.close();
    return 0;
}
/*
Sample Input :
file.txt

Sample Output :
it i c++ code
chool

*/


