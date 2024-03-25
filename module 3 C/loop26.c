//  (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>
int main()
{
    int i,m,n,total=1;
    printf("Enter your value :");
    scanf("%d",&i);
    for(m=1;m<=i;m++)
    {
        for(n=1;n<=m;n++)
        {
           total+=n;
        }
    }
    printf("The sum = %d",total);

}