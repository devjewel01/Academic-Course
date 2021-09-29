#include <stdio.h>

int main()
{
    int count, first, last, middle, numberOfElements, search, array[100],flag;

    printf("Enter number of elements\n");
    scanf("%d",&numberOfElements);

    printf("Enter %d integers\n", numberOfElements);

    for (count = 1; count <= numberOfElements; count++)
        scanf("%d",&array[count]);

    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 1;
    last = numberOfElements;
    flag=0;

    while ((first <= last) && !(flag))
    {
        middle = (first+last)/2;


        if (array[middle] < search)
            first = middle + 1;

        else if (array[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle);
            flag=1;
        }
        else
            last = middle - 1;

    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}
