// WAP to print table up to given numbers

#include <stdio.h>
int main()
{
    int i, m;
    printf("Enter your number to do you want to print table :");
    scanf("%d", &m);
    for (i = 1; i <= 10; i++)
    {
        printf("%d %d %d\n", m, i , m*i);
    }
}