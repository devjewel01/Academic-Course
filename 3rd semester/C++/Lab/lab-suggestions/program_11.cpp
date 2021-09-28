//Write a program to replace the character ‘S’ with ‘I’ in a text file.
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
         string s;
        while(getline(infile, s))
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='S')
                    s[i] = 'I';
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

*/

