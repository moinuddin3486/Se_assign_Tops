// 1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>
int main()
{
    int i,m,total=0;
    printf("Enter your number :");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        total+=i;
    }
    printf("The sum = %d",total);
}