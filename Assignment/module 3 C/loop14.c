 // Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>
int main()
{
    int arr[5],i,m,p,t,n;
    for(i=0;i<5;i++)
    {
        printf("[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        t=arr[i];
        m=t;

        p=1;
        
        for(n=1;n<=m;n++)
        {
            p=p*n;
        }
        
        printf("Factorial of %d is = %d \n",t,p);
    }
    
}
