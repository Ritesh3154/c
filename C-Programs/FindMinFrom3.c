#include <stdio.h>

int main()
{
    int a, b, c, min;

    printf("enter number one: ");
    scanf("%d", &a);
    printf("enter number two: ");
    scanf("%d", &b);
    printf("enter number three: ");
    scanf("%d", &c);

    if (a < b)
    {
        if (a < c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    else
    {
        if (b < c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }

    printf("the minimum number is: %d ", min);
    return 0;
}