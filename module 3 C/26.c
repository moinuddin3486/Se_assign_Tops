#include <stdio.h>
int main()
{
    int f,c;
    printf("Enter your fahrenheit");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("Celsius = %d C",c);
}