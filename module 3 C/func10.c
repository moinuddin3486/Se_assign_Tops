// WAP to perform Palindrome number using for loop and function
#include <stdio.h>
int main()
{
    int m,n,k=0,l;
     printf("Enter your number :");
     scanf("%d",&l);
    m=l;
    
    while(m!=0)
    {
        n=m%10;
        k=k*10+n;
        m=m/10;
        
    }
   
    printf("\nThe revers number = %d",k);
    if(k==l)
    {
        printf("\nThe number is palindrome");
    }
    else
    {
        printf("\nThe number is not palindrome");
    }
}