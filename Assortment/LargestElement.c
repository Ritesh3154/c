#include <stdio.h>

int main()
{
    int row, col;

    printf("enter row size: ");
    scanf("%d", &row);
    printf("\nenter col size: ");
    scanf("%d", &col);

    int a[row][col];

    printf("enter array elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int large = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > large)
            {
                large = a[i][j];
            }
        }
    }

    printf("\n the largest element is : %d\n", large);

    return 0;
}