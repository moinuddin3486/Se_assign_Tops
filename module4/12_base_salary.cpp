/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/
#include <iostream>
#include <conio.h>


using namespace std;

class employee{
    public:
    char name[50];
    int e_id;
    float salary;
    
    float performance;
    public:
    void getdata()
    {
        cout<<"\nEnter employee name:";
        cin>>name;
        cout<<"\nEnter employee id;";
        cin>>e_id;
        
               
    }
     void calculate_salary()
    {   cout<<"Enter emloyee salary:";
        cin>>salary; 
        cout<<"Enter employee perfomance in (1.1-1.5)";
        cin>>performance;
        salary*=performance;
        

 
    }
    void printdata()
    {
        cout<<"\nname:"<<name;
        cout<<"\nEmployee id:"<<e_id;
        cout<<"\nsalary:"<<salary;
        //cout<<"\n per"<<performance;

    }
};
int main()
{
    employee e1;
    e1.getdata();
    e1.calculate_salary();
    e1.printdata();
}
