//  (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>
int main()
{
    int m,n=1,i,total=0;
    printf("Enter your number :");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        total+=i*n;
        n++;
    }
    printf("The sum = %d",total);

}