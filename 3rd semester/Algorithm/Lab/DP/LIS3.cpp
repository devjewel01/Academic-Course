#include<bits/stdc++.h>
using namespace std;

int lis(int a[], int i, int n, int prev)
{
    if(i==n) 
        return 0;

    int exclude = lis(a, i+1, n, prev);
    int include = 0;

    if(prev < a[i])
        include = 1 + lis(a, i+1, n, a[i]);
    return max(include, exclude);

}

int main()
{
    int array[] = {764, 74, 4, 764, 864, 64, 74, 94, 974, 84, 94, 94, 974, 84, 94, 974, 84};
    int n = sizeof(array)/sizeof(array[0]);

    cout<< lis(array, 0, n, -1000) <<endl;

    return 0;
}