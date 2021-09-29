#include<bits/stdc++.h>
using namespace std;

int lis(int a[], int n)
{
    const int INF = 1e9;          //
    vector<int>d(n+1, INF);
    d[0] = -INF;

    for(int i = 1; i < n; i++)
    {
        int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if(d[j-1] < a[i] && a[i] < d[j+1])
            d[j] = a[i];
    }
    int ans=0;
    for(int i=0; i< n; i++)
        if(d[i] < INF)
            ans = i;
    return ans;

}

int main()
{
    int array[] = {764, 74, 4, 764, 864, 64, 74, 94, 974, 84, 94, 94, 974, 84, 94, 974, 84};
    int n = sizeof(array)/sizeof(array[0]);

    cout<< lis(array, n) <<endl;

    return 0;
}