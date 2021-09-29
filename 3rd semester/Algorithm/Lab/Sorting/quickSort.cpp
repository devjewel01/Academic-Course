#include<bits/stdc++.h>
using namespace std;

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low-1;

    for(int j = low; j<high; j++) 
    {
        if(array[j] <= pivot)
        {
            i++;
            swap(array[i], array[j]);
        }
    }
    i++;
    swap(array[i], array[high]);
    return i;
}

void quickSort(int array[], int low, int high)
{
    if(low >= high)
        return;

    int pivot = partition(array, low, high);

    quickSort(array, low, pivot-1);
    quickSort(array, pivot+1, high);
}

int main()
{
    int array[] = {764, 74, 4, 764, 864, 64, 74, 94, 974, 84, 94, 94, 974, 84, 94, 974, 84};
    int n = sizeof(array)/sizeof(array[0]);

    quickSort(array, 0, n-1);
    
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}