//write a program to read only the word starting with vowel vowels from text file.

#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
using namespace std;


bool isVowel(char c)
{
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u' || c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

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
        while(infile>>s)
        {
            if(isVowel(s[0]))
                cout<<s<<endl;
        }
    }
    infile.close();
    return 0;
}



