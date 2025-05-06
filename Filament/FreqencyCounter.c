#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

int main()
{
    char str[1000];
    int freq[MAX_CHAR] = {0};

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for (int i = 0; i < MAX_CHAR; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}