// /*
// 13.Write a program to find the max number from given two numbers
// using friend function*/
// #include <iostream>
// using namespace std;
// class maths{
//     int a,b;
//     public:
//     void get_data()
//     {
//         cout<<"\nEnter value of a=";
//         cin>>a;
//         cout<<"\nEnter value of b=";
//         cin>>b;

//     }
//       void max()
//     {
        
//         if(a>b)
//         {
//             cout<<"A is biggest";
//         }
//         else
//         {
//             cout<<"B is biggest ";
//         }
//     }

    
// };
// int main()
// {
//     maths m1;
//     m1.get_data();
//     m1.max();
// }
#include <iostream>
using namespace std;
class moin
{
   int a,b;
   public:
   void get_data()
   {
    cout<<"\nEnter value of a=";
    cin>>a;
    cout<<"\nEnter value of b=";
    cin>>b;
   }
   friend void big(moin);
};
void big(moin mm)
{
    if(mm.a>mm.b)
    {
        cout<<"\nA is biggest";
    }
    else
    {
        cout<<"\nB is biggest";
    }
}
int main()
{
    moin m1;
    m1.get_data();
     big(m1);
}
