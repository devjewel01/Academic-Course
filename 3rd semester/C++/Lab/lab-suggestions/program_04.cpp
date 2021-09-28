//Write a program to read only the double number from a text file.
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
    cin>>fileName;
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
            int temp = num;
            if(  double(num-temp) > 00000.1 )
                cout<<fixed<<setprecision(5)<<double(num)<<endl;
        }
    }
    infile.close();
    return 0;
}


