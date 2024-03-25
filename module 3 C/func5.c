// WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice
#include <stdio.h>
void maxmin(int arr[]);
int main()
{
    int arr[10],i,m,swap;
    for(i=0;i<10;i++)
    {
        printf("[%d]",i);
        scanf("%d",&arr[i]);
        
    }
    maxmin(arr);
    
}
void maxmin(int arr[])
{
    int i,m,swap=0;
    for(i=0;i<10;i++)
    {
        for(m=0;m<10;m++)
        {
            if(arr[i]<arr[m])
             {
                swap=arr[i];
                arr[i]=arr[m];
                arr[m]=swap;
             }

        }
    }
    printf("----- Ascending numbers-----\n");
     for(i=0;i<10;i++)
     {
        printf("%d ",arr[i]);
     }
     for(i=0;i<10;i++)
    {
        for(m=0;m<10;m++)
        {
            if(arr[i]>arr[m])
             {
                swap=arr[i];
                arr[i]=arr[m];
                arr[m]=swap;
             }

        }
    }
     printf("\n----- Descending numbers-----\n");
     for(i=0;i<10;i++)
     {
        printf("%d " ,arr[i]);
     }
    


}