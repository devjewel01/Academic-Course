//DP coin change

#include<bits/stdc++.h>
using namespace std;
 
int minNumofCoin(vector<int>&coin, int NumCoin, int Money)
{
    int table[Money+1];
    table[0] = 0;
    for(int i=1; i<=Money; i++)
        table[i] = INT_MAX;
 
    for(int i=1; i<=Money; i++)
    {
        for (int j=0; j<NumCoin; j++)
        {
            if (coin[j] <= i)
            {
                int m = table[i-coin[j]];
                if(m != INT_MAX && m + 1 < table[i])
                    table[i] = m + 1;
            }
        }
    }
    return table[Money];
}
 
int main()
{
    int numCoin, i, money;
    cin>>numCoin;
    vector<int>coin(numCoin);
    for(auto &it : coin)
    {
        cin>>it;
    }
    cin>>money;
    cout<<minNumofCoin(coin, numCoin, money)<<endl;
    return 0;
}