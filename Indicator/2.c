#include <stdio.h>

// UDF to calculate cubes
void findCubes(int *ptr, int size) {
    printf("Cubes of all elements:\n");
    for (int i = 0; i < size * size; i++) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
        if ((i + 1) % size == 0)
            printf("\n");
    }
}

int main() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];

    // Input elements
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }

    findCubes(&arr[0][0], size);

    return 0;
}
