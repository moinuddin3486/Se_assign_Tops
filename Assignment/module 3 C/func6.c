// WAP to make addition, Subtraction and multiplication of two matrix using
// 2-D Array
#include <stdio.h>
int main()
{
    int a[3][3], i, m, b[3][3], c[3][3];
    printf("------------A----------------\n");
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf("[%d][%d]=", i, m);
            scanf("%d", &a[i][m]);
        }
    }
    printf("---------------------B-------------\n");
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf("[%d][%d]=", i, m);
            scanf("%d", &b[i][m]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            c[i][m]=a[i][m]+b[i][m];
        }
    }
    
    printf("----------------ADDITION-----------\n");
    for(i=0;i<3;i++)
    {
        for(m=0;m<3;m++)
        {
            printf("%d ",c[i][m]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            c[i][m]=a[i][m]*b[i][m];
        }
    }
    printf("----------------MULTIPLICATON-----------\n");
    for(i=0;i<3;i++)
    {
        for(m=0;m<3;m++)
        {
            printf("%d ",c[i][m]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            c[i][m]=a[i][m]-b[i][m];
        }
    }
    printf("----------------SUBTRACTION-----------\n");
    for(i=0;i<3;i++)
    {
        for(m=0;m<3;m++)
        {
            printf("%d ",c[i][m]);
        }
        printf("\n");
    }

}
