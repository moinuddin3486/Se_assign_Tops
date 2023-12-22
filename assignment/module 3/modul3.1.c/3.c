#include <stdio.h>
int main ()
{
    float year,days;
    float day,years;
    printf("Enter your years :");
    scanf("%f",&year);
    days=365*year;
    printf("Days :%.0f",days);
    printf("\nEnter your days:");
    scanf("%f",&day);
    years=day/365;
    printf("\nThe years :%.2f",years);



}