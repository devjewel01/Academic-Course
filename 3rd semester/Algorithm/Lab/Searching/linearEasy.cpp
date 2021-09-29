#include<bits/stdc++.h>
using namespace std;

int linear(int a[], int length, int key)
{

    for(int i = 0; i < length; i++)
    {
        if(a[i] == key)
            return i+1;
    }
    return -1;

}
int main()
{
    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(a) / sizeof(a[0]);
    int x = 6;

    int k = linear(a, length, x);

    if(k== -1)
        cout<<"No found";
    else
        cout<<"Element found in position "<< k<<endl;

    return 0;
}