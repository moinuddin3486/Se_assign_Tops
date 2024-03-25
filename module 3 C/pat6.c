#include <stdio.h>
int main()
{
    int m, j, n;
    for (m = 1; m <= 5; m++)
    {
        n = 'A';
        for (j = 1; j <= 5; j++)
        {
            if (j <= m)
            {
                printf("%c ", n);
                n++;
            }
        }
        printf("\n");
    }
}