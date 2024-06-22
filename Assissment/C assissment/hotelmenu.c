#include <stdio.h>
#include <string.h>
int main()
{
    int choice;
    float qui,total;
    char answer[3];
    while(1)
    {
        printf("1 IDLI 2    PCS 40ES\n");
        printf("2 DOSA 1   PCS 80RS\n");
        printf("3  PIZZA M1  PCS 120RS\n");
        printf("4 PASTA  BOWLL PCS 220RS\n");
        printf("Enter your irem :");
        scanf("%d",&choice);
        printf("Enter how many plates do you want ?");
        scanf("%f",&qui);
        switch(choice)
        {
            case 1:
            total+=40*qui;
            break;
            case 2:
            total+=80*qui;
            break;
            case 3:
            total+=120*qui;
            break;
            case 4:
            total+=220*qui;
            break;
        }
        printf("Do you want anything else ?");
        printf("Yes or No");
        scanf("%s",&answer);
        if (strcmp(answer,"yes")==0 || strcmp(answer,"YES")==0)
        {
           continue;
        }
        else
        {
            printf("THANKS FOR ORDERING IN OUR RESTURANT\n");
            break;
        }
    }
    printf("This is your total bill :%.2f",total);
 return 0;   
}

    
