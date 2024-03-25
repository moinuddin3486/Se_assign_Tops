#include <stdio.h>
int main()
{
    int m,n;
    for(m=0;m<5;m++)
    {
        for(n=0;n<5;n++)
        {
            if(n<=m )
            {
                if(n%2==0)
                {
                    printf("1 ");
                }
                else
                {
                    
                    printf("0 ");
                }

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}