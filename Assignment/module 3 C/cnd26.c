/*
Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include <stdio.h>
int main()
{
    int unit;
    float total;
    printf("Enter your used unit :");
    scanf("%d",&unit);
    if(unit<=50)
    {
        total=unit*0.5;
    }
    else if(unit<=150)
    {
        total=50*.5+100.75;
    }
    else if(unit<=250)
    {
        total=(50*0.5)+(100*0.75)+(100*1.20);
    }
    else
    {
        
      unit=unit-250;
      total=50*.5+100*.75+100*1.20+unit*1.5;
    }

    total+=(total*20/100);
    printf("This is your total bill=%.2f",total);
}

