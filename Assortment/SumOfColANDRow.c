#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    // Input array elements
    printf("\nEnter array's elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int row_num;
    printf("\nEnter row number: ");
    scanf("%d", &row_num);

    if(row_num >= 0 && row_num < rows) {
        int row_sum = 0;
        printf("Elements of row %d: ", row_num);
        for(int j = 0; j < cols; j++) {
            printf("%d", a[row_num][j]);
            if (j != cols - 1) {
                printf(", ");
            }
            row_sum += a[row_num][j];
        }
        printf("\nThe sum of row %d: %d\n", row_num, row_sum);
    } else {
        printf("Invalid row number!\n");
    }

    int col_num;
    printf("\nEnter column number: ");
    scanf("%d", &col_num);

    if(col_num >= 0 && col_num < cols) {
        int col_sum = 0;
        printf("Elements of column %d: ", col_num);
        for(int i = 0; i < rows; i++) {
            printf("%d", a[i][col_num]);
            if (i != rows - 1) {
                printf(", ");
            }
            col_sum += a[i][col_num];
        }
        printf("\nThe sum of column %d: %d\n", col_num, col_sum);
    } else {
        printf("Invalid column number!\n");
    }

    return 0;
}
