#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 4, 3, 5};
    int *ptr = arr;
    printf("cubes: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}