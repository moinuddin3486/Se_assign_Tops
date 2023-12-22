#include <stdio.h>
int main()
{
    int m,n=0,k=0;
    printf("Enter any value here :");
    scanf("%d",&m);
    n=m%10;
    while(m!=0)
    {
        k=m%10;
        m=m/10;
    }
    printf("This is addition of first and last digit:%d",n+k);
}