#include <stdio.h>
int main()
{
    int m,n;
    char count;

    for(m=1;m<=5;m++)
    {count='A';
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