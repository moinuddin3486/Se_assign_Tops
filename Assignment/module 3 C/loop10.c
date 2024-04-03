//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include <stdio.h>
int main()
{
    int m,n=0,k=0;
    printf("Enter any value here :");
    scanf("%d",&m);
    k=m%10;
    while(m!=0)
    {
        n=m%10;
        m=m/10;
    }
    printf("Summation of two number is = %d",k+n);

}


