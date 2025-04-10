#include <stdio.h>
int main()
{
    // integer
    int v1 = 70;
    int v2 = 70.9090;
    printf("%d", v1);
    printf("\n%d", v2);

    // float
    float val1 = 70.90;
    printf("\n%f", val1);

    // character
    char value = 'A';
    printf("\n%c", value);
    char smallvalue = 'a';
    printf("\n%c", smallvalue);

    // ascii value
    printf("\n%d", value);
    printf("\n%d", smallvalue);

    // string
    char name[] = "ritesh";
    printf("\n%s", name);
}