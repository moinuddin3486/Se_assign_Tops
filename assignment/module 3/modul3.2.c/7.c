#include <stdio.h>
int main()
{
    int m,i;
    printf("Enter your value to Do you want to print table:");
    scanf("%d",&m);
    for(i=1;i<=10;i++)
    {
        printf("%d %d %d\n",m,i,m*i);
    }

}