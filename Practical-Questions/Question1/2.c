#include <stdio.h>

int main()
{

    int size, i, max;
    printf("enter sie of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("enter elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("maxmum element = %d\n", max);

    return 0;
}