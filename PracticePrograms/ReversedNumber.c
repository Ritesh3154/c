#include <stdio.h>

int main()
{
    int num, reversedNum = 0, digits;

    printf("enter digits: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digits = num % 10;
        reversedNum = reversedNum * 10 + digits;
        num = num / 10;
    }

    printf("reversed Number: %d",reversedNum);

    return 0;
}