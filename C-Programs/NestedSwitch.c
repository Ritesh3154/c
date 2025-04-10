#include <stdio.h>

int main()
{
    int choice;
    printf("\npress 1 for English");
    printf("\npress 2 for Hindi");
    printf("\npress 3 for Gujarati");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        int recharge;

    // case 1 for English
    case 1:
        printf("\nPress 1 for Internet Recharge");
        printf("\nPress 2 for Top-Up Recharge");
        printf("\nPress 3 for Special Recharge");

        printf("\nEnter Your choice: ");
        scanf("%d", &recharge);

        switch (recharge)
        {
        case 1:
            printf("You have successfully done an Internet Recharge");
            break;
        case 2:
            printf("You have successfully done a Top-Up Recharge");
            break;
        case 3:
            printf("You have successfully done a Special Recharge");
            break;
        default:
            printf("\nWrong Choice...");
            break;
        }
        break;

        // case 2 for Hindi
        int recharge2;
    case 2:
        printf("\n Internet Recharge ke Liye 1 Dabaiye");
        printf("\n Top-Up Recharge ke Liye 2 Dabaiye");
        printf("\n Special Recharge ke Liye 3 Dabaiye");
        printf("\n Aapki choice Bataiye: ");
        scanf("%d", &recharge2);

        switch (recharge2)
        {
        case 1:
            printf("\n Aapne Sfaltapurvak Internet Recharge Karliya Hai");
            break;
        case 2:
            printf("\n Aapne Sfaltapurvak Top-Up Recharge Karliya Hai");
            break;
        case 3:
            printf("\n Aapne Sfaltapurvak Special Recharge Karliya Hai");
            break;
        default:
            printf("\nAapne Galat Choice Kiya Hai...");
            break;
        }
        break;

        // case 3 for Gujarati
        int recharge3;
    case 3:
        printf("\n Internet Recharge Mate 1 Dabavo");
        printf("\n Top-Up Recharge Mate 2 Dabavo");
        printf("\n Special Recharge Mate 3 Dabavo");

        switch (recharge3)
        {
        case 1:
            printf("\n Tame Safaltapruvak Internet Recharge Karyu Chhe ");
            break;
        case 2:
            printf("\n Tame Safaltapruvak Top-Up Recharge Karyu Chhe ");
            break;
        case 3:
            printf("\n Tame Safaltapruvak Special Recharge Karyu Chhe ");
            break;
        default:
            printf("\nTame Choice Khoti Kari Che...");
            break;
        }
        break;

    default:
        printf("Enter Valid Choice...");
        break;
    }

    return 0;
}