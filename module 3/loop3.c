/*
WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/
#include <stdio.h>
int main()
{
    int arr[10],i,even[10],odd[10],e=0,o=0,etotal=0,ototal=0;
    for(i=0;i<10;i++)
    {
        printf("[%d]=",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
           etotal+=arr[i];
           e++;
        }
        else
        {
            ototal+=arr[i];
            o++;

        }
    }
    printf("Even number = %d\n",e);
    printf("Odd number = %d\n",o);
    printf("Total of  even number = %d\n",etotal);
    printf("Total of odd number = %d",ototal);

}