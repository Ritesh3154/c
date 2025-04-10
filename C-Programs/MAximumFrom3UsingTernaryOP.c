#include <stdio.h>

int main() {
    int a, b, c, max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using nested ternary operator to find the maximum
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Display the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
