/*
Write a program of structure for five employee that


provides the following information -print and display
empno, empname, address andage*/
#include <stdio.h>
#include <string.h>
struct employee
{
    int enumber;
    char name[50];
    char address[100];
    int age;
};

int main()
{
    struct employee s1,s2,s3,s4,s5;
    
   strcpy(s1.name,"Moinudin momnin");
   s1.enumber=1090;
   strcpy(s1.address,"dholka");
   s1.age=21 ;

   strcpy(s2.name,"Sahnavaz momin");
   s2.enumber=2000;
   strcpy(s2.address,"Ahemdabad");
   s2.age=23 ;

   strcpy(s3.name,"sakib shaikh");
   s3.enumber=8099;
   strcpy(s3.address,"khambhat");
   s3.age=30 ;

   strcpy(s4.name,"gulam bhai");
   s4.enumber=28800;
   strcpy(s4.address,"kheda");
   s4.age=37 ;

   strcpy(s5.name,"ahemad pathan");
   s5.enumber=8099;
   strcpy(s5.address,"petlad");
   s5.age=56 ;
   printf("---------------e1--------\n");
   printf("name = %s \n",s1.name);
   printf("The enumber of e1 is= %d\n",s1.name);
   printf("address= %s\n",s1.address);
   printf("Age= %d\n",s1.age);

   printf("---------------e2--------\n");
   printf("name = %s \n",s2.name);
   printf("The enumber of e1 is= %d\n",s2.name);
   printf("address= %s\n",s2.address);
   printf("Age= %d\n",s2.age);

   printf("---------------e3--------\n");
   printf("name = %s \n",s3.name);
   printf("The enumber of e1 is= %d\n",s3.name);
   printf("address= %s\n",s3.address);
   printf("Age= %d\n",s3.age);

   printf("---------------e4--------\n");
   printf("name = %s \n",s4.name);
   printf("The enumber of e1 is= %d\n",s4.name);
   printf("address= %s\n",s4.address);
   printf("Age= %d\n",s4.age);

   printf("---------------e5--------\n");
   printf("name = %s \n",s5.name);
   printf("The enumber of e1 is= %d\n",s5.name);
   printf("address= %s\n",s5.address);
   printf("Age= %d\n",s5.age);
  
  
  

  

  

   
   

   
   
    
    
    

    
}
