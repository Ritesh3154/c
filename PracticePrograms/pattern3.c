#include <stdio.h>

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        // Print underscores
        for (j = 0; j < n - i - 1; j++) {
            printf("_ ");
        }

        // Print numbers from (10 - i) to 10
        for (j = 10 - i; j <= 10; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }
}
