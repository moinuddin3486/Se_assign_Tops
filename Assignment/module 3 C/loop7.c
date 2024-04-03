// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>
int main()
{
    int m, n = 0, k = 0;
    printf("Enter any value :");
    scanf("%d", &m);
    while (m != 0)
    {
        n = m % 10;
        k = k * 10 + n;
        m = m / 10;
    }
    printf("Reverse numebr is = %d", k);
}
