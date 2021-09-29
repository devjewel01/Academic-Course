#include<bits/stdc++.h>
using namespace std;

void insertionSort(int array[], int length)
{
    for(int i=1; i<length; i++)
    {
        int key = array[i];
        int j = i-1;

        while(j>=0 && key < array[j])
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

int main()
{
    int array[] = {764, 74, 4, 764, 864, 64, 74, 94, 974, 84, 94, 94, 974, 84, 94, 974, 84};
    int n = sizeof(array)/sizeof(array[0]);

    insertionSort(array, n);

    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}