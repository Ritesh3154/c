#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin); // safer input method
    ptr = str;

    // Count characters until newline or null character
    while (*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;
    }

    printf("The length of the string is: %d\n", length);
    return 0;
}
