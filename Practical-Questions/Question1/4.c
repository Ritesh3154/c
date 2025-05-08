#include <stdio.h>

int main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("enter elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("aquare elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }

    printf("\n");
    return 0;
}
