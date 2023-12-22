#include <stdio.h>
int main()
{
    int m,n, count=1;
     

    for(m=1;m<=5;m++)
    {
        for(n=1;n<=5;n++)
        {
            if(n<=m)
            {
                printf("%d ",count);
                count++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}