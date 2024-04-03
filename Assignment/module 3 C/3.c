#include <stdio.h>
// 2*3.14.R[square]
int main()
{
    float r, a, c;
    printf("Enter your radius");
    scanf("%f", &r);
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
    printf("The area is =%.2f",a);
    printf("\nThe Circumference is =%.2f",c);
}