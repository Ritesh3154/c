#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;
    printf("before swap x = %d,y = %d", x, y);
    swap(&x, &y);
    printf("\nafter swap x = %d,y = %d", x, y);
}