// Write a C++ Program to find Area of Rectangle using inheritance
#include <iostream>
using namespace std;
class rect1{
    protected:
    int  wight,height;
    public:
    void getdata() 
    {
        cout<<"\nEnter wight";
        cin>>wight;
        cout<<"\nEnter height";
        cin>>height;
        
    }
};
class rect2:public rect1{
public:
    int result()
    {
       return wight*height;
    }

};
int main()
{
    rect2 m1;
    m1.getdata();
    cout<<"The area of rectangle="<<m1.result();
}
