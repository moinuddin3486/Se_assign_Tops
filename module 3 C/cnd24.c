//WAP to input the week number and print week day.
#include <stdio.h>
int main()
{
    int day;
    printf("Enter month  number (1 to 12)");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        {
            printf("January");
            break;
        }
        case 2:
        {
            printf("Fabruary");
            break;
        }
        case 3:
        {
            printf("March");
            break;
        }
        case 4:
        {
            printf("April");
            break;
        }
        case 5:
        {
           printf("May");
           break;
        }
        case 6:
        {
           printf("June");
           break;
        }
        case 7:
        {
            printf("July");
            break;
        }
        case 8:
        {
            printf("August");
            break;
        }
        case 9:
        {
            printf("September");
            break;
        }
        case 10:
        {
            printf("Octomber");
            break;
        }
        case 11:
        {
            printf("November");
            break;
        }
        case 12:
        {
            printf("December");
            break;
        }
        default :
        {
            printf("Envalid input!!!");
        }
    }
}
