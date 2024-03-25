// WAP to accept 5 numbers from user and display in reverse order using for
//loop and array
#include <stdio.h>
int main()
{
    int arr[4],i,m;
    for(i=0;i<=4;i++)
    {
        printf("[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\n-------- Reverse array -------\n");
    for(i=4;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

}