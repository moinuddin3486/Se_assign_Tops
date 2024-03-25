// Bank Questions
#include <iostream>
using namespace std;
class account{
    public:
    char name[50];
    int ac_num;
    int balance;
    char t_accont[3];
    int withdrow;
    int total;
    


    void getdata()
    {
         cout<<"\nEnter your name =";
         cin>>name;
        cout<<"\nEnter your accont number :";
        cin>>ac_num;
        cout<<"\nEnter your accont type =";
        cin>>t_accont;
        cout<<"\nEnter your accont balance = ";
        cin>>balance;
        
    }
    void credit()
    {
        cout<<"\nHow many amont do you deposite =";
        cin>>total;
        balance=balance+total;
    }
    void debit()
    {
        cout<<"\nEnter your withdrow amont =";
        cin>>withdrow;
        if(balance>=withdrow)
        {   
            balance=balance-withdrow;
            
        }
        else
        {
             cout<<"\n--------------------------------\n";

            cout<<"\nInsufiseant balance in your accont!!!";
        }
        
    }
    void accontd()
    {          cout<<"\nAccont holder Name = ";
        cout<<name;
        cout<<"\nBalance = ";
        cout<<balance;
    }

};
int main()
{
    account a1;
    a1.getdata();
    a1.credit();
    a1.debit();
    a1.accontd();

    
}


