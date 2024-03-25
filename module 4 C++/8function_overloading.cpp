/*
8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include <iostream>
using namespace std;
class A{
    
    int a, b;
    public:
    
    void get_data()
    {
        cout<<"\nEnter the value of A=";
        cin>>a;
        cout<<"\nEnter the value of B=";
        cin>>b;
    }
    A operator+(A moin)
    {
        A obj;
        obj.a=a+moin.a;
        obj.b=b+moin.b;
        return obj;

    }

     void printdata()
    {
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
    }
    A operator-(A obj)
    {
        A obj1;
        obj1.a=a-obj.a;
        obj1.b=b-obj.b;
        return obj1;
    }
    A operator*(A obj1)
    {
        A obj;
        obj.a=a*obj1.a;
        obj.b=b*obj1.b;
        return obj;

    }
    A operator/(A moin)
    {
        A obj;
        obj.a=a/moin.a;
        obj.b=b/moin.b;
        return obj;

    }
};
int main()
{
    A a1,a2,a3;
    //cout<<"\n*******Adiition**********\n";
    a1.get_data();
    a2.get_data();
    a3=a1+a2;
    cout<<"\n************Addition***********\n";
    a3.printdata();
    //cout<<"\n************Subtraction***********\n";
    // a1.get_data();
    // a2.get_data();
    a3=a1-a2;
    cout<<"\n************SUbtraction*********\n";
    a3.printdata();
    //cout<<"\n************Multiplication*********\n";
    // a1.get_data();
    // a2.get_data();
    a3=a1*a2;
    cout<<"\n************Multiplication*********\n";
    a2.printdata();
    a3=a1/a2;
    cout<<"\n************Division*********\n";
    a3.printdata();

    
    
}
