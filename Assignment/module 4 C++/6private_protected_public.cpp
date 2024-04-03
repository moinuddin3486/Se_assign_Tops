// 6. Write a C++ Program to show access to Private Public and Protected using
//Inheritance
#include <iostream>
using namespace std;
class A{
    private:
    int a=10;
    protected:
    int b=20;
    public:
    int c=30;
};
class B:private A{
    public:
    void printdata()
    {
        // cout<<"A="<<a;
        cout<<"\n******* B Class**********\n";
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
    }
};
class C:protected A{
    public:
    void printdata()
    {
       // cout<<"a="<<a;
       cout<<"\n******* C Class**********\n";
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
    }
};
class D:public A{
    public:
    void printdata()
    {
       // cout<<"a="<<a;
       cout<<"\n******* D Class**********\n";
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
    }
};
int main()
{
    B b1;
    C c1;
    D d1;
    b1.printdata();
    c1.printdata();
    d1.printdata();
}