/*
Write a program to find the multiplication values and the cubic values using
inline function*/
#include <iostream>
using namespace std;
class sum
{
public:
    int a;
    sum(int s)
    {
        a = s;
    }
    void result()
    {
        cout << "\nThe multiplication =" << a * a<<endl;
        cout << "The cube =" << a * a * a;
    }
};
int main()
{
    int m;
    cout << "Enter value of m:";
    cin >> m;
    cout << endl;
    sum s1(m);
    s1.result();
}