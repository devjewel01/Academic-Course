//Write a program to pass array of values to a functions.
#include<iostream>
#include<vector>

using namespace std;

void Display(vector<int>v)
{
    cout<<"This array is -- "<<endl;
    for(auto it : v)
        cout<<it<<' ';
    cout<<endl;
}
int main()
{
    
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


