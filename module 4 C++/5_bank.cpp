/*
Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/
#include <iostream>
using namespace std;
class Person{

    private:
    char name[50],country[20];
    int age;
    public:

    void getdata()
    {
        cout<<"\nEnter your name=";cin>>name;
        cout<<"\nEnter your country name=";cin>>country;
        cout<<"\nEnter your age =";cin>>age;
    }
    void printdata()
    {
        cout<<"name="<<name<<endl;
        cout<<"country="<<country<<endl;
        cout<<"age="<<age<<endl;

    }
};
int main()
{
    Person p1,p2,p3;
    p1.getdata();
    cout<<"---------------P1--------"<<endl;
    p1.printdata();
    p2.getdata();
    cout<<"---------------P2--------"<<endl;
    p2.printdata();
    p3.getdata();
    cout<<"---------------P3--------"<<endl;
    p3.printdata();


}
