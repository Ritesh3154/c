#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("enter number one: ");
    scanf("%d", &a);
    printf("enter number two: ");
    scanf("%d", &b);
    printf("enter number three: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }

    printf("the maximum number is: %d",max);
    return 0;
}