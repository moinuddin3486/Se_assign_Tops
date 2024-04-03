// // WAP to show difference between Structure and Union.
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     char name[50];
//     int roll_number;
//     float per;
// };
// int main()
// {
//     struct student s1;
//     printf("Enter your name :");
//     gets(s1.name);
//     printf("Enter your roll number :");
//     scanf("%d",&s1.roll_number);
//     printf("Enter your percentage :");
//     scanf("%f",&s1.per);

//     printf("Name= %s\n",s1.name);
//     printf("Roll number = %d\n",s1.roll_number);
//     printf("Percentage= %f\n",s1.per);


// }
#include <stdio.h>
#include <string.h>
union student
{
    char name[50];
    int roll_number;
    float per;
};
int main()
{
    union student s1;
    printf("Enter your name :");
    gets(s1.name);
    printf("Enter your roll number :");
    scanf("%d",&s1.roll_number);
    printf("Enter your percentage :");
    scanf("%f",&s1.per);

    printf("Name= %s\n",s1.name);
    printf("Roll number = %d\n",s1.roll_number);
    printf("Percentage= %f\n",s1.per);


}

