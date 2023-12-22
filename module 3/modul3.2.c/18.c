#include <stdio.h>
int main()
{
    int m,n;
    for(m=1;m<=5;m++)
    {
        for(n=1;n<=9;n++)
        {
            if(n>=6-m && n<=4+m)
            {
                printf("*");
            }
            else
            printf(" ");
        }
         printf("\n");
    }
   
}