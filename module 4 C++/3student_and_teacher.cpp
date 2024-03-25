/*
Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/
#include <iostream>
using namespace std;
class person
{
protected:
    char name[50];
    int age;
    void get_data()
    {
        cout<<"\nEnter your name:";
        cin>>name;
        cout<<"\nEnter your age:";
        cin>>age;
    }
    void put_data()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class student:public person{
    public:
    float percentage;
    void get_student()
    { cout<<"\n********student********\n";
        get_data();
        cout<<"Enter stdudent percentages:";
        cin>>percentage;
    }
    void student_put()
    {   cout<<"\n******Student Details*********"<<endl;
        put_data();
        cout<<"Percentages:"<<percentage;
    }

};
class teacher:public person{
    public:
    float salary;
    void get_teacher()
    { cout<<"\n*******Teacher*********\n";
      get_data();
      cout<<"Enter teacher salary:";
      cin>>salary;
    }
    void put_teacher()
    {   cout<<"\n";
        cout<<"\n******Teacher Details*********"<<endl;
        put_data();
        cout<<"Salary:"<<salary;
    }
};
int main()
{
    student s1;
    teacher t1;
    s1.get_student();
    
    t1.get_teacher();
    s1.student_put();
    t1.put_teacher();

    
}