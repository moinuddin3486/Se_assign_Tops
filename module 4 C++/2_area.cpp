/*
Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/
#include <iostream>
using namespace std;


class scale
{ 
    private:
    float a,b;
    public:

    scale()
    {
        cout<<"\nEnter your redius:";cin>>b;
        a=3.14*(b*b);
    }
    void print()
    {
        cout<<"\nThe area of circe ="<<a;
    }
    
    
};
int main()
{
    scale moin;
    moin.print();
}