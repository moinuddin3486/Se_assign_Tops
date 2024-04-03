#include <stdio.h>
int main()
{
    int temp;
    printf("Enter temperatur:");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("Freezing Weather!");
    }
    else if (temp>=0 && temp<=10)
    {
        printf("Very Could Weather!");
    }
    else if(temp>=10 &&temp<=20)
    {
        printf("Could Weather!");
    }
    else if(temp>=20 && temp<=30)
    {
        printf("Normal Weather!");
    }
    else if (temp>=30 && temp<=40)
    {
        printf("Hot weather!");
    }
    else 
    {
        printf("Very Hot Weather!");
    }
}