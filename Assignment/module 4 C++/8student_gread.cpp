// Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
using namespace std;
class student{
    protected:
    char name[50];
    int rollno,std;
    public:
    void get_details()
    {
        cout<<"\nEnter your name:";gets(name);
        cout<<"\nEnter your rollno:";cin>>rollno;
        cout<<"\nEnter your std:";cin>>std;
    }

};
class marks:public student{
    protected:
    int English,hindi,gujrati,maths,science,sociology,computer;
    public:
    void get_submarks()
    {
        
        cout<<"\nEnter your english marks:";
        cin>>English;
        cout<<"\nEnter your hindi marks :";
        cin>>hindi;
        cout<<"\nEnter your gujrati marks:";
        cin>>gujrati;
        cout<<"\nEnter your maths marks";
        cin>>maths;
        cout<<"\nEnter your science marks:";
        cin>>science;
        cout<<"\nEnter your sociology marks:";
        cin>>sociology;
        cout<<"\nEnter your coputer marks:";
        cin>>computer;

    }
};
class result:public marks{
    int total;
    public:
    void student_result()
    {
        cout<<"\n-----------RESULT----------\n";
        cout<<"\nName="<<name;
        cout<<"\nRoll number="<<rollno;
        cout<<"\nstd="<<std;
        cout<<"\n__________Subject--------------\n";
        cout<<"\nEnglish="<<English;
        cout<<"\nHindi="<<hindi;
        cout<<"\ngujrati="<<gujrati;
        cout<<"\nscience="<<science;
        cout<<"\nmaths="<<maths;
        cout<<"\ncompute="<<computer;
        cout<<"\nTotal="<<English+hindi+gujrati+maths+science+sociology+computer;

    }
    void print_data()
    {cout<<"\n-------------Details---------";
        cout<<"\nName:"<<name<<endl;
        cout<<"Roll No:"<<rollno<<endl;
        cout<<"Std:"<<std<<endl;
    }
    void gread()
    {
        total=English+hindi+gujrati+maths+science+sociology+computer;
        if(total>600&&total<=700)
        {cout<<"\nA gread!!";

        }
        else if(total>500 && total<=600)
        {
            cout<<"\nB gread!!!";

        }
        else if(total>350&&total<=500)
        {
            cout<<"\nC gread!!!";
        }
        else if(total>200&&total<=350)
        {
            cout<<"\nJust Pass!!!";
        }
        else if(total>100&& total<=200)
        {
            cout<<"\nFail!!!";
        }
    }
};
int main()
{
    result r1;
    r1.get_details();
    r1.get_submarks();
    r1.student_result();
    r1.print_data();
    r1.gread();
}

