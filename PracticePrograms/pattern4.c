#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

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

    return 0;
}
