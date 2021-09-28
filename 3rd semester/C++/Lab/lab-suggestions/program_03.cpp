//Write a program to find out the addition of all numbers and the concatenation of all strings from the text “12 ICT 6 Dept 9”.
#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main()
{

    string str;
    getline(cin, str);
    string temp, concate_str="";
    int digit_sum = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(isdigit(str[i]))
        {
            temp = "";
            while(i<str.size() && isdigit(str[i]))
            {
                temp += str[i++];
            }
            int digit = 0;
            stringstream ss(temp);
            ss >> digit;
            digit_sum += digit;
        }
        else
        {
            if(str[i] != ' ')
                concate_str += str[i];
        }
    }
    cout<<"Main string = "<<str<<endl;
    cout<<"Total sum of all numbers = "<<digit_sum<<endl;
    cout<<"Concatenation all string = "<<concate_str<<endl;
    return 0;
}
/*
Sample Input :
Jewel 11909000 Nath 30 ID 7

Sample Output :
Main string = Jewel 11909000 Nath 30 ID 7
Total sum of all numbers = 11909037
Concatenation all string = JewelNathID
*/

