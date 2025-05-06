#include <stdio.h>
int main()
{
    char str[100];
    int i, length = 0, flag = 0;
    printf("enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("given string is pallindrome\n");
    }
    else
    {

        printf("given string is not pallindrome");
    }
    return 0;
}