// .Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include <stdio.h>
int main()
{
    int m=1,n,e=0,o=0;
    while(m<=5)
    {
        printf("Enter you value [%d]=",m);
        scanf("%d",&n);
        if(n%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        m++;
    }
    printf("Number of even = %d\n",e);
    printf("Number of odd is = %d",o);
}
