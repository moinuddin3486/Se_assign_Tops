#include <stdio.h>
int main()
{
    int m[10],n,even[10],e=0,odd[10],o=0,etotal=0,ototal=0;
    for(n=0;n<10;n++)
    {
       printf("Enter your value [%d]=",n);
       scanf("%d",&m[n]);
       if(m[n]%2==0)
       {
        even[e]=m[n];
        e++;
        etotal+=m[n];
       }
       else
       {
        odd[o]=m[n];
        o++;
        ototal+=m[n];
       }

    }
    printf("\nEven number is :%d",e);
    printf("\nOdd number is :%d",o);
    printf("\n The sum of Even number is :%d",etotal);
    printf("\nThe sun of Odd numbers id :%d",ototal);


}