#include <stdio.h>

int main()
{
    int i, j;

    // Loop for rows
    for (i = 5; i >= 1; i--)
    {
        // Loop for printing numbers from i to 5
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}