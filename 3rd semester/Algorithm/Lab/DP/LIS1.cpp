#include<bits/stdc++.h>
using namespace std;

int lis(int a[], int n)
{
    int c[n], p[n];
    for(int i = 0; i < n; i++) 
    {
        c[i] = 1;
        p[i] = -1;
        for(int j = 0; j < n; j++)
        {
            if(a[i] > a[j] && c[i] < c[j]+1)
            {
                c[i] = c[j] + 1;
                p[i] = j;
            }
        }
    }
    int ans=0, pos;
    for(int i=0; i<n; i++) 
    {
        if(ans < c[i])
        {
            ans = c[i];
            pos = i;
        }
    }
    vector<int>v;
    while(pos != -1)
    {
        v.push_back(a[pos]);
        pos = p[pos];
    }
    reverse(v.begin(), v.end());
    for(auto it : v)
        cout<<it<<" ";
    cout<<endl;
    return ans;
}

int main()
{
    int array[] = {764, 74, 4, 764, 864, 64, 74, 94, 974, 84, 94, 94, 974, 84, 94, 974, 84};
    int n = sizeof(array)/sizeof(array[0]);

    cout<< endl<< lis(array, n) <<endl;

    return 0;
}