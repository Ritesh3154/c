#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        for (k = 0; k < rows - i; k++) {
            if (k % 2 == 0)
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }

    return 0;
}
