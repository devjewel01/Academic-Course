//DP sum of subset

#include<bits/stdc++.h>
using namespace std;


bool isSubsetSum(vector<int> &arr, int n, int sum)
{
    int i, j;
    bool subset[n+3][sum+3];
    for(i = 0; i <= n; i++){
        subset[i][0] = true;
    }
    for(i = 1; i <= sum; i++){
        subset[0][i] = false;
    }
 
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= sum; j++)
        {
            if(j<arr[i-1])
                subset[i][j] = subset[i-1][j];
            if (j >= arr[i-1])
                subset[i][j] = subset[i-1][j] || subset[i - 1][j-arr[i-1]];
        }
    }
    return subset[n][sum];
}
 
int main()
{
    int n, i, sum;
    cin>>n;
    vector<int>arr(n);
    for(auto &it : arr){
        cin>>it;
    }
    cin>>sum;
    if(isSubsetSum(arr, n, sum))
        cout<<"Found a subset with given sum"<<endl;
    else
        cout<<"No subset with given sum"<<endl;
    return 0;
}