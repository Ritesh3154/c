#include <stdio.h>

int main() {
    int i, j;

    // Loop for each row
    for (i = 1; i <= 5; i++) {
        // Loop for printing numbers in reverse
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
