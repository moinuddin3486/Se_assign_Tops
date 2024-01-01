#include <stdio.h>
int main()
{
    int m,n,c='A';
    for(m=1;m<=5;m++)
    {
        for(n=1;n<=5;n++)
        {
            if(n<=m)
            {
                printf("%c ",c);
                c++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
}
