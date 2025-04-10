#include <stdio.h>

void main()
{
    float length, area;
    printf("Enter the length of square: ");
    scanf("%f", &length);
    area = length * length;
    printf("area of the aquare is : %.2f", area);
}