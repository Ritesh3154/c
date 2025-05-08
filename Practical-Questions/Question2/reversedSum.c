#include <stdio.h>

int reversedSum(int arr[], int size)
{
    int sum = 0;
    printf("revesed array: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    printf("sum = %d", sum);
}

int main()
{
    int arr[5] = {111, 222, 333, 444, 555};
    reversedSum(arr, 5);
    return 0;
}