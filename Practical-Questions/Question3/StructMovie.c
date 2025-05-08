#include <stdio.h>

struct StructMovie
{
    char name[100];
    char type[100];
    char language[50];
};

int main()
{
    int n;
    printf("enter number of movie: ");
    scanf("%d", &n);

    struct StructMovie movie[n];

        for (int i = 0; i < n; i++)
    {
        printf("enter name: ");
        scanf("%s", movie[i].name);
        printf("enter type: ");
        scanf("%s", movie[i].type);
        printf("enter language: ");
        scanf("%s", movie[i].language);
    }

    printf("movie details: \n");

    for (int i = 0; i < n; i++)
    {
        printf("name: %s , type = %s , language = %s \n", movie[i].name, movie[i].type, movie[i].language);
    }
    return 0;
}