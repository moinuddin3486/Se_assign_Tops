// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include <stdio.h>
#include <conio.h>
void func();
int main()
{
      func();
}
void func()
{
    int a,b,choice;
    printf("Enter value of A :");
    scanf("%d",&a);
    printf(" Enter Value of b :");
    scanf("%d",&b);
    printf("Enter your choice :");
    printf("1-Addition, 2-Subtraction, 3-Multiplication and 4-Division");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        {
            printf("Addition of %d and %d is %d",a,b,a+b);
            break;

        }
        case 2:
        {
            printf("Subtraction of %d and %d is %d",a,b,a-b);
            break;
        }
         case 3:
        {
            printf("Multiplication of %d and %d is %d",a,b,a*b);
            break;
        }
         case 4:
        {
            printf("Division of %d and %d is %d",a,b,a/b);
            break;
        }
        default :
        {
            printf("Envelid input ");
        }

    }
}
