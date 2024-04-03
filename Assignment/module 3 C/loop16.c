// Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>
int main()
{
    int m,n=1,sum=0;
    printf("Enter your number here :");
    scanf("%d",&m);
    while(n<=m)
    {
        sum+=n;
        n++;
    }
    printf("The sum of natural number = %d",sum);
}