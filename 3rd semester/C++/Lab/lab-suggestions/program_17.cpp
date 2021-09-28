//Create a program that counts the occurrence of a particular word in a file (use the stringclass‟ operator „==‟ to find the word).
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
        string Search_word, word;
        int found=0;
        cout<< "Enter your word " <<endl;
        cin>>Search_word;
        while(infile>>word)
        {
            if(word == Search_word)
                found++;
        }
        cout<<"Your word found "<< found << "th times in this file"<<endl;
    }
    infile.close();
    return 0;
}
/*
Sample Input :
file.txt

Sample Output :

*/







