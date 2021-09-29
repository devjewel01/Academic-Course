#include <stdio.h>

int main()
{
    int number_of_elements, array[1000], count, key, j,i;

    printf("Enter number of elements\n");
    scanf("%d", &number_of_elements);

    printf("Enter %d integers\n", number_of_elements);

    for (count = 0; count <= (number_of_elements - 1); count++)
    {
        scanf("%d", &array[count]);
    }

    for (j = 1 ; j <= (number_of_elements - 1); j++)
    {
        key = array[j];
        i=j-1;

        while ( i >= 0 && array[i] > key)
        {
            array[i+1] = array[i];
            i--;
        }
        array[i+1]=key;
    }

    printf("Sorted list in ascending order:\n");

    for (count = 0; count <= (number_of_elements - 1); count++)
    {
        printf("%d\n", array[count]);
    }

    return 0;
}
