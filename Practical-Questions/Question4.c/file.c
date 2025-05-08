#include <stdio.h>

int main()
{
    FILE *ptr = fopen("data.txt", "w");
    int n;
    char name[50];

    printf("enter name: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("  name: ");
        scanf("%s", name);

        fprintf(ptr, "name = %s", name);
    }

    fclose(ptr);
    printf("Data written to data.txt\n");
    return 0;
}