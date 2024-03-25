// Accept 3 numbers from user using while loop and check each numbers palindrome
#include <stdio.h>
int main()
{
    int m,n=0,l=0,g=0;
    printf("Enter your number here :");
    scanf("%d",&g);
    m=g;
    
    
    while(m!=0)
    {
        n=m%10;
        l=l*10+n;
        m=m/10;

    }
    printf(" Your entered number :%d\n",l);
    printf(" Reverse number : %d\n",g);
    if(g==l)
    {
        printf("The entered  number of [%d] is palindrome ",g);
    }
    else
    {
        printf("The enterd number of [%d] is not palindrome",g);
    }
}