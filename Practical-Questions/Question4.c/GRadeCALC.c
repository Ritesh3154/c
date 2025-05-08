#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("enter your marks: ");
    scanf("%d", &marks);

    grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                              : (marks >= 70)   ? 'C'
                              : (marks >= 60)   ? 'D'
                                                : 'F';

    printf("your grade is %c \n", grade);

    switch (grade)
    {
    case 'A':
        printf("excellent work");
        break;
    case 'B':
        printf("good work");
        break;
    case 'C':
        printf("nice work");
        break;
    case 'D':
        printf("have some study");
        break;
    case 'F':
        printf("failed");
        break;
    default:
        break;
    }


    if(grade == 'A' || grade == 'B' || grade == 'C'){
        printf("you are elgible for nxt level");
    }else{
        printf("you are not elgible for nxt level");
    }
}