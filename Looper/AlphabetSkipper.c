#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 27)
    {
        printf("%c", 'a' + i);
        i += 3;
    }
    return 0;
}