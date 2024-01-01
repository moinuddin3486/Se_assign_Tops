// Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>
int main()
{
    int m,n=0,k;
    printf("Enter any value here :");
    scanf("%d",&m);
    while(m!=0)
    {
        n=m%10;
        k+=n;
        m=m/10;
    }
    printf("Summation = %d",k);

}