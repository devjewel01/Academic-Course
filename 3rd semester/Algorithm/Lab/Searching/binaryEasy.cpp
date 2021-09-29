#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int length, int key)
{
    //sort(a, a+length);

    int low = 0;
    int high = length-1;

    while(low <= high) 
    {
        int mid = (low + high) / 2;
        if(key == a[mid]) 
            return mid+1;
        
        if(key < a[mid]) 
            high = mid;
        else
            low = mid+1;
    }

    return -1;
}
int main()
{
    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(a) / sizeof(a[0]);
    int x = 6;

    int k = binarySearch(a, length, x);

    if(k== -1)
        cout<<"No found";
    else
        cout<<"Element found in position "<< k<<endl;

    return 0;
}