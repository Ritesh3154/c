#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value a: ");
    scanf("%d", &a);
    printf("enter value b: ");
    scanf("%d", &b);
    printf("- - - - - - - - - - - - - \n");
    printf("|\t\t\t|\n");
    printf("|\t%dx%d=%d\t\t|\n", a, b, a * b);
    printf("|\t\t\t|\n");
    printf("- - - - - - - - - - - - -\n");
}