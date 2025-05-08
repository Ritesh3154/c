#include <stdio.h>
int main()
{
    FILE *ptr = fopen("data.txt", "w");
    char name[100], role[100];

    for (int i = 0; i < 3; i++)
    {
        printf("enter name of employee: %d");
        scanf("%s", &name);
        printf("role: ");
        scanf("%s", role);
        fprintf(ptr,"employee: %s - %s\n",name,role);
    }

    fclose(ptr);
    printf("data writtten");

    return 0;
}