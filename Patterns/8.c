#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// 1
// 21
// 321
// 4321