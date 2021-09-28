//Write a program to find the sum, average, maximum, and minimum from a list.
#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int n, i, Max = INT_MIN, Min = INT_MAX;
    long long int sum = 0;
    double avarage;
    cout<<"Enter number of element - ";
    cin>>n;
    cout<<"Enter the element - "<<endl;
    vector<int>v(n);
    for(auto &it : v)
        cin>>it;
    for(i=0; i<n; i++)
    {
        sum += v[i];
        Max = max(Max, v[i]);
        Min = min(Min, v[i]);
    }
    cout<<"Min of element = "<<Min<<endl;
    cout<<"Max of element = "<<Max<<endl;
    cout<<"Sum of element = "<<sum<<endl;
    cout<<"Average of element = "<< double(sum*1.0/n*1.0)<<endl;
    return 0;
}
/*
Sample Input :

Sample Output :

*/

