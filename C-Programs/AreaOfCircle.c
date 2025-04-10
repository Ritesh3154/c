#include <stdio.h>
#define PI 3.14

void main()
{
    float r, area;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    printf("area of the circle is : %.2f", area);
}