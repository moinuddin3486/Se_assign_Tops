#include <stdio.h>
int main()
{
    int m,n,total=0;
    printf("Enter any value here :");
    scanf("%d",&m);
    while(m!=0)
    {
        n=m%10;
        total+=n;
        m=m/10;
    }
    printf("This is your total ;%d",total);

}