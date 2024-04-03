#include <stdio.h>
int main()
{
    int day,year,month;
    printf("Enter your years:");
    scanf("%d",&year);
    day=year*365;
    month=year*12;
    
    printf("Year(%d) into days = %d\n",year,day);
    printf("Year(%d) into months = %d",year,month);
}