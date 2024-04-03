// calculate the Factorial of a Given Number using while loop
#include <stdio.h>
int main()
{
    int m,n=1;
    printf("Enter your value to do you want to print facto :");
    scanf("%d",&m);
    while(m!=1)
    {
        n*=m;
        m--;

    }
    printf("The factorial of %d is = %d ",m,n);
}