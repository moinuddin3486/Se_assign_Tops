// // WAP to print factorial of given number
// #include <stdio.h>
// int main()
// {
//     int m,n,total=1;
//     printf("Enter your number :");
//     scanf("%d",&m);
//     while(m!=1)
//     {
//         total*=m;
//         m--;
//     }
//     printf("factorial = %d",total);
// }
#include <stdio.h>
int main()
{
    int m,n,u=1;
    printf("Enter value :");
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
        u*=m;

    }
    printf("The factorial of %d is = %d",n,u);

}