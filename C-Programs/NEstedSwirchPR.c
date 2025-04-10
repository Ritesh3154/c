#include <stdio.h>

int main()
{
    int choice;
    printf("Enter 1 For English");
    printf("\nEnter 1 For Hindi");
    printf("\nEnter 1 For Gujrati");
    printf("\nEnter your choice");
    scanf("%d", &choice);

    switch (choice)
    {
        int recharge;
    case 1:
        printf("\npress 1 for internet");
        printf("\npress 2 for Top-up");
        printf("\npress 3 for special");
        printf("\nEnter your choice");
        scanf("%d", &recharge);

        switch (recharge)
        {
        case 1:
            printf("you have successsfully done internet");
            break;
        case 2:
            printf("you have successsfully done topup");
            break;
        case 3:
            printf("you have successsfully done special");
            break;
        default:
            printf("wrong choice..");
            break;
        }

        break;

        int recharge2;

    case 2:
        printf("internet reachrge k liye 1");
        printf("topup reachrge k liye 2");
        printf("specail reachrge k liye 3");
        printf("\nEnter your choice");
        scanf("%d", &recharge2);

        switch (recharge2)
        {
        case 1:
            printf("\ninternet recahrge ho gaya hai");
            break;
        case 2:
            printf("\ntopup recahrge ho gaya hai");
            break;
        case 3:
            printf("\nspecail recahrge ho gaya hai");
            break;

        default:
            printf("wrong choice..");
            break;
        }

        break;

        int recharge3;
    case 3:
        printf("\ninternet mate 1 dabavo");
        printf("\ntopup mate 2 dabavo");
        printf("\nspecial mate 3 dabavo");
        printf("\nEnter your choice");
        scanf("%d", &recharge3);

        switch (recharge3)
        {
        case 1:
            printf("\napnu internet thai gayu che");
            break;
        case 2:
            printf("\napnu topup thai gayu che");
            break;
        case 3:
            printf("\napnu special thai gayu che");
            break;

        default:
            printf("wrong choice..");
            break;
        }
        break;
    default:
        printf("Enter valid choice...");
        break;
    }

    return 0;
}