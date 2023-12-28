#include <stdio.h>
#include <string.h>

int main()
{
    int cid;
    float unit,m;
    char name[50];
    printf("Enter your name ;");
    fgets(name, 50, stdin);
    printf("Enter your contomer id :");
    scanf("%d", &cid);
    printf("Enter your used unit :");
    scanf("%f", &unit);
    if (unit <= 350)
    {
        m = unit * 1.20;
    }
    else if (unit > 350 && unit <= 600)
    {
        m = unit * 1.50;
    }
    else if (unit > 600 && unit <= 800)
    {
        m = unit * 1.80;
    }
    else
    {
        m = unit * 2;
    }
    printf("\n");
    printf("________ELECTRICITY BILL DETAILS_______\n");
    printf("\nName :%s", name);
    printf("Costomer id : %d\n", cid);
    printf("used unit :%.2f\n", unit);
    printf("Your total electricity bill is = %.2f", m);
}
