#include <stdio.h>
#include <math.h>
int main()
{

    float amt, ret, time, m = 0, n;
    printf("Enter your amount :");
    scanf("%f", &amt);
    printf("Enter your ret:");
    scanf("%f", &ret);
    printf("Enter your time year:");
    scanf("%f", &time);
    m=amt*(pow(1+ret/100,time));
    n=m-amt;
    printf("%.2f",n);

}