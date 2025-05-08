#include <stdio.h>

int main()
{
    char op;
    int a, b;
    printf("enter operator: ");
    scanf("%c", &op);
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
    case '+':
        printf("result = %d\n", a + b);
        break;
    case '-':
        printf("result = %d\n", a - b);
        break;
    case '*':
        printf("result = %d\n", a * b);
        break;
    case '/':
        printf("result = %d\n", a / b);
        break;
    default:
        printf("invalid operator!!");
        break;
    }
}