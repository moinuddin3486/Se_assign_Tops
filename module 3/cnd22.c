// Write a C program to input basic salary of an employee and calculateits
// Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%
#include <stdio.h>
int main()
{
    int salary,hra,da;
    printf("Enter your salary here :");
    scanf("%d",&salary);
    if(salary<=10000)
    {
        salary=salary+(salary*20/100)+(salary*80/100);

    }
    else if(salary<=20000)
    {
        salary=salary+(salary*25/100)+(salary*90/100);
    }
    else if(salary>20000)
    {
        salary=salary+(salary*30/100)+(salary*95/100);
    }
    printf(" You gross salary is = %d",salary);
}