// . WAP to find factorial using recursion
#include <stdio.h>
int facto(int );
int main()
{
    int m,n;
    printf("Enter your value here :");
    scanf("%d",&m);
    n=facto(m);

    printf("The factorial is %d",n);
}
int facto(int s)
{
    if(s==0 )
    {
        return 1;

    }
    else
    {

        return s*facto(s-1);
    }
}
