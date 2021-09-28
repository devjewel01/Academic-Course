//Write a program to insert the word ‘Hey!’ at the beginning of each sentence in a text file.
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
    cout<< "Program - 12" <<endl<<endl;
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
        bool dot =true;
        while(getline(infile, s))
        {
            for(int i=0; i<s.size(); i++)
            {
                if(dot)
                {
                    dot = false;
                    cout<<"Hey! ";
                }
                cout<<s[i];
                if(s[i]=='.')
                {
                    cout<<' ';
                    dot = true;
                }
            }
            cout<<endl;
        }
    }
    infile.close();
    return 0;
}
/*
Sample Input :
file1.txt

Sample Output :

*/


