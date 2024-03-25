#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t,m,n;
    printf("Enter your p=amount :");
    scanf("%f",&p);
    printf("Enter your rat :");
    scanf("%f",&r);
    printf("Enter your t :");
    scanf("%f",&t);
    // compound interest with amount

    m=p*(pow(1+r/100,t));


    printf("amount = %.2f\n",m);
    // compoud interest 
    n=m-p;
    printf("Compond interest = %.2f",n);



}