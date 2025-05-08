#include <stdio.h>

void main()
{
    FILE *ptr = fopen("data.txt", "w");
    char name[100], course[100];

    if (ptr)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("enter name of student %d :", i + 1);
            scanf("%s", name);
            printf("enter course of student %d :");
            scanf("%s", course);
            fprintf(ptr, "Name: %s, Course: %s\n", name, course);
        }

        fclose(ptr);
        printf("data is successfully written into file");
    }
    else
    {
        printf("the file is not exists");
    }
}