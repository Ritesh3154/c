#include <stdio.h>

int main()
{
    int a, b, c, min;

    printf("enter number one: ");
    scanf("%d", &a);
    printf("enter number two: ");
    scanf("%d", &b);

    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    printf("The minimum number is: %d", min);
    return 0;
}