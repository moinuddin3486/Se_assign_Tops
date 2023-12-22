#include <stdio.h>
int main()
{
    float amount;
    float year,rate,m=0,month,j;
    printf("Enter your amount:");
    scanf("%f",&amount);
    printf("Ennter your year:");
    scanf("%f",&year);
    printf("Enter your entrest:");
    scanf("%f",&rate);
    // printf("Your amont is : %d\n",amount);
    // printf("Your month is :%.0f\n",year);
    // printf("your rate is :%.0f\n",rate);
    m=(amount*rate*year)/100;
    j=year*12;
     month=m/j;
    
    printf("This is your all  interest  =%.2f\n",m);
     printf("This is  your monthly interest :%.2f\n",month);
  
    
}