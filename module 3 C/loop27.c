// // 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//      m,n,s=1,k=2;
//     float total=0;
//     printf("Enter your number :");
//     scanf("%d",&m);
//     for(n=1;n<=m;n++)
//     {


//        if(n%2==1)
//         {
//             total-=n/(n+1);
//         }
//         else
//         {
//             total+=n/(n+1);
//         }


//     }
//     printf("%d",total);
// }
#include <stdio.h>
int main()
{
    float i, n,sum=0;
    printf("Enter n value :");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==0)
            sum-=i/(i+1);
        else
            sum+=i/(i+1);
    }
    printf("Sum: %lf",sum);
    return 0;
}
