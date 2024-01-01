#include <stdio.h>
int sum(int arr[]);
int main()
{
    int arr[5],i,m;
    for(i=0;i<5;i++)
    {
        printf("[%d]",i);
        scanf("%d",&arr[i]);
        
    }
    m=sum(arr);
    printf("The sum of array = %d",m);

}
int sum(int arr[])
{
    int i,total=0;
    for(i=0;i<5;i++)
    {
         total+=arr[i];

    }
    return total;
}