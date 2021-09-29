#include<bits/stdc++.h>
using namespace std;




void merge(int *array, int low, int mid, int high)
{
    int i, j, k, tmp[100];
    //  6 5 12 ----- 9 10 ?
    //low, mid ==== mid+1 high
    // tmp = 6 5 9 10 12

    i = low, j = mid+1, k=low;
    while(i <= mid && j <= high)
    {
        if(array[i] <= array[j])
        {
            tmp[k]=array[i];
            i++; k++;
        }
        else
        {
            tmp[k]=array[j];
            j++; k++;
        }
    }

    while(i<=mid)
    {
        tmp[k]=array[i];
        i++; k++;
    }

    while(j<=high)
    {
        tmp[k]=array[j];
        j++; k++; 
    }
    for(i=low; i<=high; i++)
        array[i]=tmp[i];
}




void mergeSort(int *array, int low, int high)
{
    if(low>=high)
        return;
        
    int mid = (low+high)/2;

    mergeSort(array, low, mid);
    mergeSort(array, mid+1, high);

    merge(array, low, mid, high);
}



int main()
{
    int array[] = {764, 74, 4, 764, 864, 64, 74, 94, 974, 84, 94, 94, 974, 84, 94, 974, 84};
    int n = sizeof(array)/sizeof(array[0]);


    mergeSort(array, 0, n-1);
    
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}