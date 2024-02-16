// /*10.Write a program to concatenate the two strings using Operator Overloading*/
// #include <iostream>
// #include <string.h>
// using namespace std;
// class moin{
//     char str[50];
//     public:
//     void get_data()
//     {
//         cout<<"\nEnter your string\n";
//         cin>>str;
//     }
//     void print_data()
//     {
//         cout<<"string="<<str<<endl;
//     }
//     moin operator +(moin x)
//     {
//         moin t;
//         strcpy(t.str,str);
//         strcat(t.str,x.str);
//         return t;

//     }

// };
// int main()
// {
//     moin s1,s2,s3;
//     s1.get_data();
//     s2.get_data();

//     s3=s1+s2;
//     s3.print_data();

// }
#include <iostream>
#include <string.h>
using namespace std;
class moin
{
public:
    char str[50];

    void get_data()
    {
        cout << "\nEnter your string";
        cin >> str;
    }
    void print_data()
    {
        cout << "string=" << str;
    }
    moin operator+(moin s)
    {moin t;
        // strcat(str,s.str);
        
        //     cout << "String=" << str;
        strcpy(t.str,str);
        strcat(t.str,s.str);
        return t;


        
    }
};
int main()
{
    moin m1, m2,m3;
    m1.get_data();
    m2.get_data();
    m3 = m1 + m2;
    cout<<"The string ="<<m3.str;
    
}