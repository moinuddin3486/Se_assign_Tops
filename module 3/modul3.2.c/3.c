#include <stdio.h>
int main()
{
    int m;
    printf("Enter any value here :");
    scanf("%d",&m);
    if(m%2==0)
    {
        printf("The entered Value of %d is :Even ",m);
    }
    else
    {
        printf("The entered value of %d is :Odd",m);
    }
}