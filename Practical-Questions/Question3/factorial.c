#include <stdio.h>

int main()
{
    int number, fact = 1;
    printf("enter number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number;i++){
        fact = fact * i;
    }

    printf("factorial of %d is :%d ",number,fact);
    return 0;
}