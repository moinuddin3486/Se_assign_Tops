#include <stdio.h>
int main()
{
    int kilometer,meter;
    printf("Enter your kilometer :");
    scanf("%d",&kilometer);
    meter=kilometer*1000;
    printf("Kilometer(%d) into meter = %d (meter)",kilometer,meter);
}