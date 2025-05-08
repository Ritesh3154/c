#include <stdio.h>

float findAverage(int arr[3][3], int rows, int cols) {
    int sum = 0, count = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
            count++;
        }
    return (float)sum / count;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Average = %.2f\n", findAverage(arr, 3, 3));
    return 0;
}
