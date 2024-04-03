// Write a program to find out the max from given number (E.g., No: -1562Max number is 6)


#include <stdio.h>
int main()
{
    int m,n=0,k=0;
    printf("Enter any value here :");
    scanf("%d",&m);
    while(m!=0)
    {
        n=m%10;
        if(n>k)
        {
            k=n;
        }
        m=m/10;
    }
    printf("Summation = %d",k);

}