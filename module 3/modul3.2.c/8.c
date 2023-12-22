#include <stdio.h>
int main()
{
    int m,n=1;
    printf("Enter any number here :");
    scanf("%d",&m);
    while(m>1)
    {
        n=n*m;
        m--;
    }
    printf("The facto is :%d",n);


}