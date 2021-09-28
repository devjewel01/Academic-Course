//Write a program to copy the entire file into a single string object.
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
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
       vector<string>str;
       string s;
       while(getline(infile, s))
       {
           str.push_back(s);
       }
       cout<<"Your full file --"<<endl;
       for(auto it : str)
            cout<<it<<endl;
    }
    infile.close();
    return 0;
}
/*
Sample Input :
file.txt

Sample Output :

*/




