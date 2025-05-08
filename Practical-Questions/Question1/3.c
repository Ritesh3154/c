#include <stdio.h>

void reverse(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;

    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    reverse(str);
    return 0;
}
