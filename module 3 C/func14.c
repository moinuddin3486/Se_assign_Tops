// Perform 2D matrix array
#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3] ,i, m;
    printf("----------A--------\n");
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf("[%d][%d]",i,m);
            scanf("%d",&a[i][m]);
        }
    }
    printf("------------B-----------\n");
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf("[%d][%d]",i,m);
            scanf("%d ",&b[i][m]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
           c[i][m]=a[i][m]+b[i][m];
        }
    }
    printf("-----------A+B--------------\n");
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            
            printf("%d ",c[i][m]);
        }
        printf("\n");
    }
}