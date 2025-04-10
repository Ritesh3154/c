#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                              : (marks >= 70)   ? 'C'
                              : (marks >= 60)   ? 'D'
                                                : 'F';

    printf("Your Grade : %c", grade);

    switch (grade)
    {
    case 'A':
        printf("\nExcellent Work");
        break;

    case 'B':
        printf("\nWell Done");
        break;
    case 'C':
        printf("\nGood Job ");
        break;
    case 'D':
        printf("\nYou passed, but you could do better.");
        break;
    case 'F':
        printf("\nYou Failed");
        break;
    default:
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C')
    {
        printf("\nCongratulations! You are eligible for next level.");
    }
    else
    {
        printf("\nYou need to improve your score to move to the next level.");
    }

    return 0;
}