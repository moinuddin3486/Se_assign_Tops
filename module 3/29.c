#include <stdio.h>
int main()
{
    int minute,second,hours;
    printf("Enter your minute :");
    scanf("%d",&minute);
    second=minute*60;
    hours=minute/60;

    printf("minute(%d) into second = %d\n",minute,second);
    printf("Minute(%d) into house = %d",minute,hours);
}