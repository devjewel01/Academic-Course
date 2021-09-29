#include<bits/stdc++.h>
using namespace std;

int lcs(string a, string b) 
{
    int n = a.size(), m = b.size();
    int v[n+1][m+1];

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(i==0 || j==0)
                v[i][j] = 0;
            else if( a[i-1] == b[j-1] )
                v[i][j] = v[i-1][j-1] + 1;
            else
                v[i][j] = max(v[i-1][j], v[i][j-1]);
        }
    }
    return v[n][m];
}
int main()
{
    string a = "AGGTAB";
    string b = "GXTXAYB";

    cout<<lcs(a, b)<<endl;
    return 0;
}