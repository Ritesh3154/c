#include <stdio.h>
int main()
{
    int num, sum = 0, digits;

    printf("enter digits: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digits = num % 10;
        sum += digits;
        num = num / 10;
    }

    printf("sum of digits: %d", sum);

    return 0;
}
