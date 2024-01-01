#include <stdio.h>
int main()
{
    int m,j;
    for(m=1;m<=5;m++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-m && j<=4+m)
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
