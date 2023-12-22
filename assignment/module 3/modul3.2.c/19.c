#include <stdio.h>
int main()
{
    int m,n,k=0;
    for(m=1;m<=11;m++)
    { m<=6?k++:k--;
        for(n=1;n<=6;n++)
        {
            if(n<=k)
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