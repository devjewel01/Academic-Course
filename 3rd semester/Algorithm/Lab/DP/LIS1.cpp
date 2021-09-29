#include<bits/stdc++.h>
using namespace std;

int lis(int a[], int n)
{
    int c[n];
    for(int i = 0; i < n; i++) 
    {
        c[i] = 1;
        for(int j = 0; j < n; j++)
        {
            if(a[i] > a[j])
                c[i] = max(c[i], c[j]+1);
        }
    }
    int ans=0;
    for(int i=0; i<n; i++) 
        ans = max(ans, c[i]);
    return ans;
}

int main()
{
    int array[] = {764, 74, 4, 764, 864, 64, 74, 94, 974, 84, 94, 94, 974, 84, 94, 974, 84};
    int n = sizeof(array)/sizeof(array[0]);

    cout<< lis(array, n) <<endl;

    return 0;
}