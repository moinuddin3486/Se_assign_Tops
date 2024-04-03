// /*
// Write a C++ Program to illustrates the use of Constructors in multilevel
// inheritance*/

// #include <iostream>
// using namespace std;
// class A{

//     int a;
//     public:
//     A(int x)
//     {
//         a=x;
//     }
//     void printA()
//     {
//         cout<<"\na="<<a;
//     }
// };
// class B{
//     int b;
//     public:
//     B(int y)
//     {
//         b=y;
//     }
//     void printB()
//     {
//         cout<<"\nb="<<b;
//     }
// };
// class C:public A,public B{
//     int c;
//     public:
//     C(int x,int y,int z):A(x),B(y)
//     {
//         c=z;
//     }
//     void printC()
//     {
//         cout<<"\nc="<<c;
//     }
// };
// int main()
// {
//     C s1(1,2,3);
//     s1.printA();
//     s1.printB();
//     s1.printC();
    
// }
// #include <iostream>
// using namespace std;
// class A{
//     protected:
//     int a;
//     public:
//     A(int x)
//     {
//         a=x;
//         cout<<"\n A constroctor call";
//     }
// };
// class B:public A{
//     protected:
//     int b;
//     public:
//     B(int y,int x):A(x)
//     {
//         b=y;
//         cout<<"\n B constroctor call";
//     }
    
// };
// class C:public B{
//     int c;
//     public:
//     C(int x,int y,int z):B(y,x)
//     {
//         c=z;
//         cout<<"\n C constroctor call";
//     }
//     void printC()
//     {   cout<<"\na="<<a;
//         cout<<"\nb="<<b; 
//         cout<<"\nC="<<c;
//     }
// };
// int main()
// {
//     C c1(10,20,30);
//     c1.printC();
    
// }
#include <iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    A(int x)
    {
        a=x;

    }
};
class B:public A
{
    protected:
    int b;
    public:
    B(int y,int x):A(x)
    {
        b=y;
    }
};
class C:public B{
    protected:
    int c;
    public:
    C(int x,int y,int z):B(y,x)
    {
        c=z;
    }
};
class D:public C {
    public:
    int d;
    D(int x,int y,int z,int s):C(x,y,z)
    {
        d=s;

    }
    void printdata()
    {
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
        cout<<"\nd="<<d;
    }
};
int main()
{
    D d1(1,2,3,4);
    d1.printdata();
}