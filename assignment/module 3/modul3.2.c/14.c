#include <stdio.h>
int main()
{
    int m,n;
    for(m=1;m<=5;m++)
    {
        for(n=1;n<=5;n++)
        {
            if(n<=m)
            {
                printf("%d ",n%2);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}