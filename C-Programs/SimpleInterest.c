#include <stdio.h>

void main()
{
    float p, r, n, interest;

    printf("Enter the p amount: ");
    scanf("%f", &p);
    printf("Enter the annual interest r : ");
    scanf("%f", &r);
    printf("Enter the time in month: ");
    scanf("%f", &n);

    interest = (p * r * n) / 100;

    printf("The Simple Interest is: %.2f\n", interest);
}
