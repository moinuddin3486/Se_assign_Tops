#include <stdio.h>
int main()
{
    int m,j,k=0;
    for(m=1;m<=11;m++)
    {(m<=6)?(k++):(k--);
        for(j=1;j<=6;j++)
        {
            if(j<=k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}