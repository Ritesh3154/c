#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        if (i == 1 || i == 3)
        {
            printf("*****");
        }
        else
        {
            printf("*   *");
        }
        printf("\n");
    }
}

// *****
// *   *
// *****
// *   *