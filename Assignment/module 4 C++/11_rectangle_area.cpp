/*11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area*/
#include <iostream>
using namespace std;
 const  float pi=3.14;
class maths{
    float area,breath;
    public:
   
    
    float rectangle(float a,float b)
    {
        area=a;
        breath=b;
        return area*breath;
    }
    float triangle(float a,float b)
    {
        float s;
        area=a;
        breath=b;
        s=0.5*(area*breath);
        return s;

    }
    float circle(float a)
    { float y;
         area=a;
        y=pi*area*area;
        return y;
        
        
    }

    
    
};
int main()
{
     maths m1;
     
     cout<<"\nThe rectangle="<<m1.rectangle(2.2,3.4);
     cout<<"\nThe triangle="<<m1.triangle(2.2,3.4);
     cout<<"\nThe triengl="<<m1.circle(2.2);
    
}

