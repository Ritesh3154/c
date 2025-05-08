#include <stdio.h>

int main()
{
    for (int i = 1; i < 5; i++)
    {
        int sq = i * i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", sq);
        }
        printf("\n");
    }
    return 0;
}