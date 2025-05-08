#include <stdio.h>
struct StructBook
{
    char bname[100];
    char author[100];
    float price;
};

int main()
{
    int n;
    printf("enter number of ther books: ");
    scanf("%d", &n);

    struct StructBook books[n];

    for (int i = 0; i < n; i++)
    {
        printf("book %d name : ", i + 1);
        scanf("%s", &books[i].bname);
        printf("author : ");
        scanf("%s", &books[i].author);
        printf("price : ");
        scanf("%f", &books[i].price);
    }

    printf("book details: ");
    for (int i = 0; i < n; i++)
    {
        printf("%s by %s,price : %.2f\n", books[i].bname, books[i].author, books[i].price);
    }
    return 0;
}