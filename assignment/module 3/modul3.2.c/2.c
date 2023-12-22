#include <stdio.h>
int main()
{
    int m,n;
    printf("\nEnter any two value :");
    scanf("%d%d",&m,&n);
    printf("\nBefore swapping value :");
    printf("\nm=%d",m);
    printf("\nn=%d",n);
    m=m+n;   // m=10 n=20;  m+n=30;
    n=m-n; // 10
    m=m-n;
    printf("\nAfter swaping value :");
    printf("\nm=%d",m);
    printf("\nn=%d",n);


}