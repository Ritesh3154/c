#include <stdio.h>

int main()
{
    int num, first, last;

    printf("enter number: ");
    scanf("%d", &num);

    last = num % 10;

    first = num;

    while (first >= 10)
    {
        first /= 10;
    }

    int sum = first + last;

    printf("sum of first and last digits:%d", sum);

    return 0;
}