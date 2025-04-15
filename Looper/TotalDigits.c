#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("enter number: ");
    scanf("%d", &num);

    while (num)
    {
        num = num / 10;
        count++;
    }
    printf("Total Digits = %d\n", count);

    return 0;
}