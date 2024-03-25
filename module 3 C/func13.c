// WAP to accept 5 numbers from user and check entered number is even or odd
// using of array
#include <stdio.h>
int main()
{
    int arr[5],i,even=0,odd=0;
    for(i=0;i<5;i++)
    {
        printf("[%d]",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

    }
    printf("Even number = %d\n",even);
    printf("Odd number = %d",odd);
}