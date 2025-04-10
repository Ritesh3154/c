#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value a: ");
    scanf("%d", &a);
    printf("enter value b: ");
    scanf("%d", &b);
    printf("Addition of %d + %d = %d ", a, b, a + b);
    printf("\nSubtraction of %d - %d = %d ", a, b, a - b);
    printf("\nMultiplication of %d * %d = %d ", a, b, a * b);
    printf("\nDivision of %d / %d = %d ", a, b, a / b);
    printf("\nModulo of %d % %d = %d ", a, b, a % b);
}