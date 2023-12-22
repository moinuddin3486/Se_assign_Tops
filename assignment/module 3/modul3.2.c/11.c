#include <stdio.h>
int main()
{
    int m, k = 0,p=0;
    printf("Enter any vale here :");
    scanf("%d", &m);
    
    while (m != 0)
    {
        k=m%10;
        if (k>p)
        {
            p=k;
        }
        m=m/10;
    }
    printf("The biggest value is :%d",p);
}
