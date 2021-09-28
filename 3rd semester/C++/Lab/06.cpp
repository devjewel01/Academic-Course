//create a program thats opens a file and counts the white spaces separated  words in that file.

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






