#include <stdio.h>
int main()
{
    int year;
    printf("Enter your year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("This year is not leap tear");
        
    }
}