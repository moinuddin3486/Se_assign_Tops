// WAP Find out length of string without using inbuilt function
#include <stdio.h>
#include <string.h>
int main()
{
    char name[50], i;
    printf("Enter your name here :");
    gets(name);
    puts(name);

    for (i = 0; name[i]; i++);
        
    printf("The lenght of string is = %d", i);
}