#include <stdio.h>

int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    // input from user
    for (int i = 0; i < size; i++)
    {
        printf("enter array values %d : ", i + 1);
        scanf("\n %d", &arr[i]);
    }

    printf("your array values: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}