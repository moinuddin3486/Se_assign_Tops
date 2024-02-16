/*
Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/
#include <iostream>
using namespace std;
class rectangle
{
    private:
    int l,w;
    public:
    void getdata()
    {
        cout<<"Enter your lenght";
        cin>>l;
        cout<<"Enter your widht";
        cin>>w;
    }
    void result()
    {
      cout<<"The rectangle area="<<l*w;
    }
};
int main()
{
    rectangle a1;
    a1.getdata();
    a1.result();
}