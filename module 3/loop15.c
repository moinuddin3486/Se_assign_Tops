// .Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main()
{
    int m,n=1,l=0;
    while(n<=10)
    {
        printf("Enter you value :");
        scanf("%d",&m);
        l+=m;
        n++;
    }
    printf("The sum of 10 value = %d",l);
}