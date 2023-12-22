#include <stdio.h>
int main()
{
    int m,n,count='A';
    for(m=1;m<=5;m++)
    {
        for(n=1;n<=5;n++)
        {
            if(n<=m)
            {
                printf("%c ",count);
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