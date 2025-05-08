#include <stdio.h>

void main()
{

    FILE *ptr = fopen("data.txt", "r");
    char content[1000];

    if (ptr)
    {
        while (fgets(content, 100, ptr) != NULL)
        {
            printf("%s", content);
        }
    }
    else
    {
        printf("the file is not exists");
    }
}