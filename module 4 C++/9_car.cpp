/*
Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/
#include <iostream>
using namespace std;
class car
{
    private:
    char   model[10],company[10];
    int year;
    public:
    car()
    {
        cout<<"\nEnter your car company:";cin>>company;
        cout<<"\nEnter your car model";cin>>model;
        cout<<"\nEnter your car year";cin>>year;

    }
    void print()
    {
        cout<<"Company ="<<company<<endl;
        cout<<"model ="<<model<<endl;
        cout<<"year ="<<year<<endl;
    }
};
int main()
{
    car c1;
    c1.print();
    car c2;
    c2.print();
}