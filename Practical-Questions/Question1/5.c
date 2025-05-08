#include <stdio.h>

struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    int n;
    printf("Enter number of cars: ");
    scanf("%d", &n);

    struct Car cars[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for car %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    printf("\nCar Details:\n");
    for (int i = 0; i < n; i++)
        printf("Model: %s | Year: %d | Price: %.2f\n", cars[i].model, cars[i].year, cars[i].price);

    return 0;
}
