//Display a file a line at a time, waiting for the user to press the “Enter” key after each line.
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
    cout<< "Program - 18" <<endl<<endl;
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
        string str;
        cout<< "please! press Enter key to see your file line by line" <<endl;
        while(getline(infile, str))
        {
            cin.ignore();
            cout<< str <<endl;
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








