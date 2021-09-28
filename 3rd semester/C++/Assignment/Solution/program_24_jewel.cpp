//Write a program to pass array of values to a functions.
#include<iostream>
#include<vector>

using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 24" <<endl<<endl;
}
void Display(vector<int>v)
{
    cout<<"This array is -- "<<endl;
    for(auto it : v)
        cout<<it<<' ';
    cout<<endl;
}
int main()
{
    ID();
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    vector<int>v(n);
    cout<< "Enter array element - " <<endl;
    for(auto &it : v)
        cin>>it;
    Display(v);
    return 0;
}
/*
Sample Input :

Sample Output :

*/


