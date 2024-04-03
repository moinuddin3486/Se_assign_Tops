// // Write a program of structure employee that provides the following
// a. information -print and display empno, empname, address
// andage
// b. Write a program of structure for five employee that
// provides the following information -print and display
// empno, empname, address andage
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[50];
    int enumber;
    char address[50];
};
int main()
{
    struct employee s1;
    printf("Enter you name :");
    gets(s1.name);
    printf("Enter your employee number :");
    scanf("%d",&s1.enumber);
    strcpy(s1.address,"Dholka");

    printf("%s\n",s1.name);
    printf("%d\n",s1.enumber);
    printf("%s",s1.address);


}
