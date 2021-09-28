//Write a program to copy a file from one to another.
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
    cout<< "Program - 13" <<endl<<endl;
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
       cout<< "Enter your new file name\nLike : newfilename.txt" <<endl;
       string newfile;
       cin>>newfile;
       ofstream outfile;
       outfile.open(newfile);
       string s;
       while(getline(infile, s))
       {
           outfile<< s <<endl;
       }
       outfile.close();
       cout<<"Process successfully complete"<<endl;
       cout<<"Check your file"<<endl;
    }
    infile.close();
    return 0;
}
/*
Sample Input :
file.txt

Sample Output :

*/



