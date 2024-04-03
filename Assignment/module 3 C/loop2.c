#include <stdio.h>
int main()
{
    int arr[5],i;
        for(i=0;i<5;i++)
    {
        printf("[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);

    }
}