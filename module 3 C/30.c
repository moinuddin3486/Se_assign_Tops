#include <stdio.h>
int main()
{
    int year,day,m;
    printf("Enter your year :");
    scanf("%d",&year);

    day=year*365;
    printf("Year(%d) into days = %d (days)\n",year,day);
    m=day/365;
    printf("\nDay(%d) into year = %d (year)",day,m);

}
