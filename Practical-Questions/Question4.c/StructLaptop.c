#include <stdio.h>

struct StructLaptop
{
    char name[50];
    float price;
};

int main()
{
    int n;
    printf("enter number of laptops : ");
    scanf("%d", &n);

    struct StructLaptop laptop[n];

    for (int i = 0; i < n; i++)
    {
        printf("name of laptop: ");
        scanf("%s", laptop[i].name);
        printf("name of price: ");
        scanf("%f", laptop[i].price);
    }

    printf("details::");

    for (int i = 0; i < n; i++)
    {
        printf("laptop: %s , price = %f \n", laptop[i].name, laptop[i].price);
    }
    return 0;
}
