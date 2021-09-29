#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        if(i!=2)
            i++;
    }
    if (n > 2)
        cout << n << " ";
}

int main()
{
    int n = 315;
    primeFactors(n);
    return 0;
}

