/*
9. Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include <iostream>
using namespace std;
class arr{
    int a[5],b[5],c[5],i;
    public:
    void get_data()
    {
        cout<<"\nEnter value of A array\n";
        for(i=0;i<5;i++)
        {
            cout<<i<<"=";
            cin>>a[i];
        }
        cout<<"\nEnter value of B array\n";
        {
            for(i=0;i<5;i++)
        {
            cout<<i<<"=";
            cin>>b[i];
        }

        }
    }
    void sum()
    {
        for(i=0;i<5;i++)
        {
            c[i]=a[i]+b[i];

        }
    }
    void printdata()
    {
        cout<<"\n************The metrix***********\n";
        for(i=0;i<5;i++)
        {
            cout<<c[i]<<endl;
        }
    }


};
int main()
{
    arr a1;
    a1.get_data();
    a1.sum();
    a1.printdata();
}