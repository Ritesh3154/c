#include <stdio.h>

void main()
{

    FILE *ptr = fopen("data.txt", "r");
    if (ptr)
    {
        printf("the file is opened successfully");
    }
    else
    {
        printf("the file is not exists");
    }
}