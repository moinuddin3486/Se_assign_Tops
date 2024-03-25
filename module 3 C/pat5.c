#include <stdio.h>
int main()
{
    int m,j,k=1;
    for(m=0;m<5;m++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=m)
            {
                printf("%d ",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}