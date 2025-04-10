#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, avg;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    avg = (sub1 + sub2 + sub3) / 3;

    printf("average of three subject is: %.2f",avg);
    return 0;
}