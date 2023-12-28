#include <stdio.h>
int main()
{
    int year;
    printf("Enter your year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("\nThe year of %d is leap year!!!",year);
    }
    else
    {
        printf("\nThe year of %d is not leap year!!!",year);
    }
}