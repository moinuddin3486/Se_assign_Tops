/*
Write a program of Addition, Subtraction, Division, Multiplication using
constructor.

*/
#include <iostream>
using namespace std;
class math
{  public:
    int a,b;
    math(int s,int y)
    {
        a=s;
        b=y;
    }
    void sum()
    {
        cout<<"\n The sum ="<<a+b;
    }
    void sub()
    {
        cout<<"\nThe subtraction ="<<a-b;
    }
    void div()
    {
        cout<<"\nThe devison ="<<a/b;
    }
    void multi()
    {
        cout<<"\n The multiplication ="<<a*b;
    }
};
int main()
{
    int k,i,choice;
    cout<<"\nEnter value 0f k=";
    cin>>k;
    cout<<"Enter value of i=";
    cin>>i;
    math m1(k,i);
    cout<<"1-addition"<<endl;
    cout<<"2- subtraction"<<endl;
    cout<<"3-division"<<endl;
    cout<<"4-multiplication"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
          m1.sum();
          break;
        }
        case 2:
        {
            m1.sub();
            break;
        }
        case 3:
        {
            m1.div();
            break;
        }
        case 4:
        {
            m1.multi();
            break;
        }
        default:
        {
            cout<<"Enter valid number!!!";
        }

    }
    
}