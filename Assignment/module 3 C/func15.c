// Store 5 numbers in array and sort it in ascending order
#include <stdio.h>
int main()
{
    int arr[5],i,m,swap;
    for(i=0;i<5;i++)
    {
        printf("[%d]",i);
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<5;i++)
    {
        for(m=0;m<5;m++)
        {
            if(arr[i]<arr[m])  // 5 4 3 2 1 
            {
                swap=arr[i];
                arr[i]=arr[m];
                arr[m]=swap;

            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf(" Ascending nuber = %d ",arr[i]);
    }
}