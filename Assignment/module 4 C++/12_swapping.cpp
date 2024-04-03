// /*
// 12.Write a program to swap the two numbers using friend function
// without using third variable*/
// #include <iostream>
// using namespace std;
// class maths{
//     int a,b;
//     public:
//     void getdata(int m,int n)
//     {
//        a=m;
//        b=n;

//         cout<<"**********Before swapping********";
//         cout<<"\na="<<a;
//         cout<<"\nb="<<b;

       

//     }
//     void transfer()
//     {
//         a=a+b;
//         b=a-b;
//         a=a-b;

//     }
//     void print_data()
//     {
//         cout<<"\n************After swaping***************";
//         cout<<"\na="<<a;
//         cout<<"\nb="<<b;
//     }
     
    
// };
// int main()
// {
//     maths s1;
//     s1.getdata(2,3);
//     s1.transfer();
//     s1.print_data();
// }
#include <iostream>
using namespace std;
class maths{
    int a,b;
    public:
    void get_data();
    
    friend void swap(maths);
    
};
void maths::get_data()
{
    cout<<"\nEnter value of a=";
    cin>>a;
    cout<<"\nEnter value of b=";
    cin>>b;
}
void swap(maths mm)
{
    mm.a=mm.a+mm.b;
    mm.b=mm.a-mm.b;
    mm.a=mm.a-mm.b;
   
    cout<<"\na="<<mm.a;
    cout<<"\nb="<<mm.b;


}
int main()
{
    maths m1;
    m1.get_data();
    swap(m1);
    
}

