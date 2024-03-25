// Write a program to find out the max number from given array using function
#include <stdio.h>
int max(int arr[10]);
int main()
{
    int arr[10],i,n;
    printf("Enter your value here :\n");
    for(i=0;i<10;i++)
    {
        printf("[%d]=",i);
        scanf("%d",&arr[i]);
    }
    n=max(arr);
    printf("The max number is = %d",n);
}
int max(int arr[])
{
    int m,n=0;
    for(m=0;m<10;m++)
    {
       if(arr[m]>n)
       {
        n=arr[m];
       }
    }
    return n;
}