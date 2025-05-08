#include <stdio.h>

void main()
{
    FILE *ptr = fopen("data.txt", "w");
    char content[1000];

    if (ptr)
    {
        fputs("welcome to c language", ptr);
        printf("data is successfully written into file");
        fclose(ptr);
    }
    else
    {
        printf("the file is not exists");
    }
}