// Write a C Program to Print the Multiplication Table of N
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enyer your number to do you want to print table :");
    scanf("%d",&m);
    for(n=1;n<=10;n++)
    {
        printf("%d %d %d\n",m,n,m*n);

    }
}