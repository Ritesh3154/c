#include <stdio.h>

int main()
{
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Negative elements from an Array: ");
    int first = 1; 
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            if (!first)
            {
                printf(", ");
            }
            printf("%d", a[i]);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
