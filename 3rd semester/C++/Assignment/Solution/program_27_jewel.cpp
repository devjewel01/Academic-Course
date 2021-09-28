//Use four functions to solve the problem 26.
#include<iostream>
#include<vector>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 27" <<endl<<endl;
}
int Min(vector<int>v)
{
    int mn = INT_MAX;
    for(auto it : v)
        mn = min(mn, it);
    return mn;
}
int Max(vector<int>v)
{
    int mx = INT_MIN;
    for(auto it : v)
        mx = max(mx, it);
    return mx;
}
long long int sum(vector<int>v)
{
    long long int s = 0LL;
    for(auto it : v)
        s += it;
    return s;
}
double Average(vector<int>v)
{
    return (double)(sum(v)*1.0 / (int)v.size()*1.0);
}
int main()
{
    ID();
    int n;
    cout<<"Enter number of element - ";
    cin>>n;
    cout<<"Enter the element - "<<endl;
    vector<int>v(n);
    for(auto &it : v)
        cin>>it;

    cout<<"Min of element = "<<Min(v)<<endl;
    cout<<"Max of element = "<<Max(v)<<endl;
    cout<<"Sum of element = "<<sum(v)<<endl;
    cout<<"Average of element = "<<Average(v)<<endl;
    return 0;
}
/*
Sample Input :

Sample Output :

*/


